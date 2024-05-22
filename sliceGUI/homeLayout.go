package main

import (
	"flGUI/dperclient"
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
)

var (
	globalDID     string
	globalMessage string
	dataLock      sync.Mutex
	readySignal   = make(chan struct{}, 1) // 非阻塞通道
)

// HTTP请求处理函数
func handleSetDID(w http.ResponseWriter, r *http.Request) {
	// 解析multipart表单
	if err := r.ParseMultipartForm(10 << 20); err != nil {
		http.Error(w, "Error parsing multipart form", http.StatusBadRequest)
		return
	}

	// 从表单中提取DID和message字段
	did := r.FormValue("DID")
	message := r.FormValue("message")

	// 简单的校验
	if did == "" || message == "" {
		http.Error(w, "DID or message not found in form", http.StatusBadRequest)
		return
	}

	// 使用锁来确保并发写入安全
	dataLock.Lock()
	// 实际更新全局变量
	globalDID = did
	globalMessage = message
	dataLock.Unlock()

	log.Printf("Received DID: %s, message: %s", did, message)

	// 发送数据准备好的信号
	select {
	case readySignal <- struct{}{}:
	default:
	}

	fmt.Fprintf(w, "Received DID: %s, message: %s", did, message)
}

// 在指定端口上启动HTTP服务器，监听/setdid路径
func startHTTPServer(port string) {
	// 创建一个新的路由处理器
	mux := http.NewServeMux()
	// 在自定义的处理器上注册路由
	mux.HandleFunc("/dper/setdid", handleSetDID)

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
func (im *infoManager) makeHomeLayout() fyne.CanvasObject {
	exePath, _ := os.Executable()

	imgs := make([]fyne.Resource, 0)
	imgpaths := []string{"/imgs/sliceauthen4.png", "/imgs/sliceauthen1.png", "/imgs/sliceauthen2.png", "/imgs/sliceauthen3.png", "/imgs/sliceauthen4.png"}

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

	entry.SetText("Welcome to the swarm learning demo of P3-Chain!\n") // 设置要显示的文本

	// 创建带滚动条的容器
	scrollContainer := container.NewVScroll(entry)
	scrollContainer.SetMinSize(fyne.NewSize(800, 400))

	stateLabel := widget.NewLabel("Working State: Spare")

	btn0 := widget.NewButton("Run Demo", func() {
		stateLabel.SetText("Working State: Working")
		go im.P2init(entry, scrollContainer, image, imgs)
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

func (im *infoManager) Hang() {
	select {
	case <-im.nextStep:
		return
	}

}

func (im *infoManager) P2init(output *widget.Entry, scroll *container.Scroll, image *canvas.Image, imgs []fyne.Resource) {
	EntryAppend(output, "Demo starts!\n", scroll)
	DID0 := ""
	DID1 := "DID:NF:a713bc1f-e2a5-49f4-a5d2-e6e56cfe8f2b"
	message := ""
	im.Hang()
	output.SetText("=============================Step 1: Wating For DID Post...\n")
	image.Resource = imgs[1]
	image.Refresh()
	//监听所有post命令的8007端口
	startHTTPServer(":8007")
	// 在startHTTPServer(":8007")之后
	<-readySignal // 等待数据准备好的信号

	dataLock.Lock()
	DID0 = globalDID
	message = globalMessage
	dataLock.Unlock()

	// 现在你可以按预期打印DID和message
	EntryAppend(output, fmt.Sprintf("AMF DID: %s\n message:%s\n", DID0, message), scroll)
	time.Sleep(1 * time.Second)

	im.Hang()
	image.Resource = imgs[2]
	image.Refresh()

	EntryAppend(output, "Step 1 done!", scroll)

	im.Hang()
	output.SetText("=============================Step 2: Register network element and blockchain nodes...\n")
	url0 := "http://127.0.0.1:8001"
	url1 := "http://127.0.0.1:8002"
	keyStorePath := "./keystore"
	lk0 := dperclient.NewLinker(url0, keyStorePath)
	lk1 := dperclient.NewLinker(url1, keyStorePath)

	im.flManagers = []*dperclient.Linker{lk0, lk1}
	EntryAppend(output, fmt.Sprintf("Node with Url %s has connected node is:\n%s%s\n\n", lk0.Url, dperclient.SprintfNodeInfo(lk0.GetNodeInfo()), DID0), scroll)
	EntryAppend(output, fmt.Sprintf("Node with Url %s has connected node is:\n%s%s\n\n", lk1.Url, dperclient.SprintfNodeInfo(lk1.GetNodeInfo()), DID1), scroll)

	time.Sleep(1 * time.Second)

	EntryAppend(output, "Step 2 done!", scroll)

	im.Hang()

	image.Resource = imgs[3]
	image.Refresh()

	output.SetText("=============================Step 3: Get AMF Signature\n")
	_, signature := lk0.GetSignature(message)
	EntryAppend(output, fmt.Sprintf("The AMF signature is: \n message:%s\n sigature:%s \n", message, signature), scroll)
	time.Sleep(3 * time.Second)
	EntryAppend(output, "Step 3 done!", scroll)

	im.Hang()

	output.SetText("=============================Step 4: SMF Search AMF's Address\n")

	image.Resource = imgs[4]
	image.Refresh()

	EntryAppend(output, fmt.Sprintf("AMF DID: %s\n", DID0), scroll)
	time.Sleep(3 * time.Second)
	address := lk1.GetAddress(DID0)
	EntryAppend(output, fmt.Sprintf("seraching..."), scroll)
	time.Sleep(3 * time.Second)
	EntryAppend(output, fmt.Sprintf("The AMF's Address is: \n %s\n", address), scroll)

	time.Sleep(3 * time.Second)
	EntryAppend(output, "Step 4 done!", scroll)

	im.Hang()

	output.SetText("=============================Step 5: SMF Validate AMF's Signature\n")

	EntryAppend(output, fmt.Sprintf("SMF's message: %s\n AMF's signature: %s\n AMF's address:%s\n", message, signature, address), scroll)
	time.Sleep(3 * time.Second)
	EntryAppend(output, fmt.Sprintf("validating...\n"), scroll)

	time.Sleep(3 * time.Second)
	EntryAppend(output, fmt.Sprintf("result:%s\n", lk1.CallValid(message, signature, address)), scroll)

	time.Sleep(3 * time.Second)
	EntryAppend(output, "Step 5 done!", scroll)

	im.Hang()

}
