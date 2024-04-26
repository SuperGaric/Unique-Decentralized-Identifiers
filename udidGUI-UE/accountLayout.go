package main

import (
	// "udidGUI/FLAPI"

	"fmt"
	"log"
	"net/http"
	"os"
	"sync"
	"time"

	"fyne.io/fyne/v2"
	"fyne.io/fyne/v2/canvas"
	"fyne.io/fyne/v2/container"
	"fyne.io/fyne/v2/widget"

	"encoding/json"
	"udidGUI/dperclient"
)

var (
	globalIMSI string
	globalDID2 string
)

var (
	// globalDID     string
	// globalMessage string
	dataLock    sync.Mutex
	readySignal = make(chan struct{}, 1) // 非阻塞通道
)

// 定义匹配 JSON 结构的 Go 结构体
// 定义与 data 字段对应的 Go 结构体
type Data struct {
	BlockList []struct {
		Number        int      `json:"number"`
		BlockHash     string   `json:"blockHash"`
		LeaderID      string   `json:"leaderID"`
		PrevBlockHash string   `json:"prevBlockHash"`
		SubNet        string   `json:"subNet"`
		TxCount       int      `json:"txCount"`
		TxList        []string `json:"txList"`
		TimeStamp     string   `json:"timeStamp"`
		BlockReceipt  struct {
			ReceiptID string `json:"receiptID"`
			TxReceipt []struct {
				Valid  int      `json:"valid"`
				Result []string `json:"result"`
			} `json:"txReceipt"`
			WriteSet []struct {
				Value string `json:"value"`
			} `json:"writeSet"`
		} `json:"BlockReceipt"`
	} `json:"blockList"`
	ReqCount int `json:"reqCount"`
	ResCount int `json:"resCount"`
}

type DIDData struct {
	Id        string  `json:"id"`
	Version   string  `json:"version"`
	Created   string  `json:"created"`
	PublicKey string  `json:"publicKey"`
	Service   Service `json:"service"`
	Signature string  `json:"signature"`
}

type Service struct {
	Id              string `json:"id"`
	Type            string `json:"type"`
	ServiceEndpoint string `json:"serviceEndpoint"`
}

func (im *infoManager) make1aLayout() fyne.CanvasObject {
	exePath, _ := os.Executable()

	imgs := make([]fyne.Resource, 0)
	imgpaths := []string{"/imgs/Account0.png", "/imgs/Account1.png", "/imgs/Account2.png", "/imgs/Account3.png"}

	for i := 0; i < len(imgpaths); i++ {
		imgpath := imgpaths[i]
		_, err := os.Stat(exePath + imgpath)

		if err != nil {
			imgpath = "." + imgpath
		} else {
			imgpath = exePath + imgpath
		}

		imageResource, err := fyne.LoadResourceFromPath(imgpath)

		if err != nil {
			log.Fatal(err)
		}
		imgs = append(imgs, imageResource)
	}

	// 创建 Image 组件并设置图片
	image := canvas.NewImageFromResource(imgs[0])
	image.FillMode = canvas.ImageFillContain // 或者使用其他填充模式
	image.SetMinSize(fyne.NewSize(800, 400))

	// 创建 Entry 组件
	entry := widget.NewMultiLineEntry()

	entry.SetText("Welcome to the Authorization demo of Unique Decentralzied Identifiers System\n") // 设置要显示的文本

	// 创建带滚动条的容器
	scrollContainer := container.NewVScroll(entry)
	scrollContainer.SetMinSize(fyne.NewSize(800, 400))

	stateLabel := widget.NewLabel("Working State: Spare")
	btn0 := widget.NewButton("Run Demo", func() {
		stateLabel.SetText("Working State: Working")
		go im.init_01(entry, scrollContainer, image, imgs)
	})
	btn1 := widget.NewButton("Next Step", func() {
		select {
		case im.nextStep <- struct{}{}:
			return
		default:
			return

		}
	})

	bottom := container.NewBorder(nil, nil, nil, container.NewHBox(stateLabel, btn0, btn1), nil)

	finalLayout := container.NewVBox(image, scrollContainer, bottom)

	return finalLayout
}

func handleGetIMSI(w http.ResponseWriter, r *http.Request) {
	// 解析multipart表单
	if err := r.ParseMultipartForm(10 << 20); err != nil {
		log.Printf("Failed to parse multipart form: %v", err) // 记录具体的错误信息
		http.Error(w, "Error parsing multipart form", http.StatusBadRequest)
		return
	}

	// 从表单中提取imsi和DID字段
	imsi := r.FormValue("IMSI")
	did := r.FormValue("DID")

	// 简单的校验
	if imsi == "" || did == "" {
		http.Error(w, "IMSI or DID not found in form", http.StatusBadRequest)
		return
	}

	// 使用锁来确保并发写入安全
	dataLock.Lock()
	// 实际更新全局变量
	globalIMSI = imsi
	globalDID2 = did
	dataLock.Unlock()

	log.Printf("Received IMSI: %s, DID: %s", imsi, did)

	// 发送数据准备好的信号
	select {
	case readySignal <- struct{}{}:
	default:
	}

	fmt.Fprintf(w, "Received IMSI: %s, DID: %s", imsi, did)
}

// 在指定端口上启动HTTP服务器，监听/getimsi路径
func startHTTPServer2(port string) {
	// 创建一个新的路由处理器
	mux := http.NewServeMux()
	// 在自定义的处理器上注册路由
	mux.HandleFunc("/dper/getimsi", handleGetIMSI)

	// 创建一个HTTP服务器实例，指定端口和路由处理器
	server := &http.Server{
		Addr:    port,
		Handler: mux,
	}

	// 异步启动HTTP服务器
	go func() {
		log.Printf("Starting HTTP server on %s...", port)
		if err := server.ListenAndServe(); err != nil {
			log.Fatalf("Failed to start HTTP server on %s: %v", port, err)
		}
	}()
}

func (im *infoManager) init_01(output *widget.Entry, scroll *container.Scroll, image *canvas.Image, imgs []fyne.Resource) {
	EntryAppend(output, "Demo starts!\n", scroll)

	// UE := "127.0.0.1"
	UE := "192.168.1.2"

	UE_port := "8004"

	im.Hang()
	output.SetText("=============================Step 1: User interact with local program to generate DID & DID document...\n")
	image.Resource = imgs[1]
	image.Refresh()

	im.Hang()
	EntryAppend(output, "============================= Wating For IMSI...\n", scroll)

	imsi := ""
	DID := ""

	startHTTPServer2(":8008")
	// 在startHTTPServer(":8008")之后
	<-readySignal // 等待数据准备好的信号

	dataLock.Lock()
	DID = globalDID2
	imsi = globalIMSI
	dataLock.Unlock()

	// 现在你可以按预期打印DID和message
	EntryAppend(output, fmt.Sprintf("UE IMSI: %s\n UE DID: %s\n", imsi, DID), scroll)

	im.Hang()
	url0 := "http://" + UE + ":" + UE_port
	keyStorePath := "./keystore"
	lk0 := dperclient.NewLinker(url0, keyStorePath)
	jsonData := `{
		"id": "DID:IMSI:675bb8982f6cc6e8ea087bd9457ab8024bd2",
		"version": "1",
		"created": "2024-03-10T11:36:15",
		"publicKey": "56acd30de767f084ce3080168ee293053ba33b2...",
		"service": {
			"id": "DID:IMSI:675bb8982f6cc6e8ea087bd9457ab8024bd2",
			"type": "Spectrum",
			"serviceEndpoint": "https://xxx.xxx.xxx"
		},
		"signature": "B138677Q9QNB13Y7Q9..."
	}`

	var data DIDData
	if err := json.Unmarshal([]byte(jsonData), &data); err != nil {
		log.Fatalf("Error parsing JSON: %v", err)
	}

	// 替换publicKey、id和signature

	newId := DID // This value is obtained from earlier in your method
	_, newSignature := lk0.GetSignature(string(jsonData))
	newServiceEndpoint := url0 // Replace with your new endpoint
	newPublicKey := lk0.GetAddress(DID)

	data.PublicKey = newPublicKey
	data.Id = newId
	data.Signature = newSignature
	data.Created = time.Now().Format(time.RFC3339) // Updates "created" to the current time
	data.Service.Id = newId                        // Ensure service ID matches DID ID

	data.Service.ServiceEndpoint = newServiceEndpoint // Update serviceEndpoint
	// 编码回JSON
	modifiedJSON, err := json.MarshalIndent(data, "", "  ")
	if err != nil {
		log.Fatalf("Error encoding JSON: %v", err)
	}

	im.flManagers = []*dperclient.Linker{lk0}
	EntryAppend(output, fmt.Sprintf("UE DID is %s \n", DID), scroll)
	EntryAppend(output, fmt.Sprintf("Searching......\n"), scroll)
	EntryAppend(output, fmt.Sprintf("Document:%s\n", string(modifiedJSON)), scroll)

	im.Hang()
	output.SetText("=============================Step 2: User send DID & DID document to BC network function through AMF authentication protocol...\n")
	image.Resource = imgs[2]
	image.Refresh()

	im.Hang()
	output.SetText("=============================Step 3: DID & DID document approved by consensus...\n")
	image.Resource = imgs[3]
	image.Refresh()
	EntryAppend(output, "=============================Unique Decentralized Identifiers generation succeed...\n", scroll)

	block := lk0.GetCurrentBlock()

	var response struct {
		Data Data `json:"data"`
	}

	err = json.Unmarshal([]byte(block), &response)
	if err != nil {
		fmt.Println("Error unmarshalling JSON:", err)
		return
	}

	// 修改数据中的 Result 字段
	for i := range response.Data.BlockList {
		for j := range response.Data.BlockList[i].BlockReceipt.TxReceipt {
			response.Data.BlockList[i].BlockReceipt.TxReceipt[j].Result = []string{string(modifiedJSON)}
		}
	}

	// 将 data 字段的内容转回 JSON 字符串并格式化
	modifiedDataJSON, err := json.MarshalIndent(response.Data, "", "    ")
	if err != nil {
		fmt.Println("Error marshalling JSON:", err)
		return
	}
	EntryAppend(output, fmt.Sprintf("%s", string(modifiedDataJSON)), scroll)

	EntryAppend(output, "Account done!", scroll)
	// image.Resource = imgs[1]
	// image.Refresh()

}
