package main

import (
	// "udidGUI/FLAPI"

	"encoding/json"
	"fmt"
	"log"
	"os"
	"time"
	"udidGUI/dperclient"

	"fyne.io/fyne/v2"
	"fyne.io/fyne/v2/canvas"
	"fyne.io/fyne/v2/container"
	"fyne.io/fyne/v2/widget"
)

func (im *infoManager) make4aLayout() fyne.CanvasObject {
	exePath, _ := os.Executable()

	imgs := make([]fyne.Resource, 0)
	imgpaths := []string{"/imgs/Audit0.png", "/imgs/Audit1.png", "/imgs/Audit2.png", "/imgs/Audit3.png", "/imgs/Audit4.png"}

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

	entry.SetText("Welcome to the swarm learning demo of DID\n") // 设置要显示的文本

	// 创建带滚动条的容器
	scrollContainer := container.NewVScroll(entry)
	scrollContainer.SetMinSize(fyne.NewSize(800, 400))

	// 创建一个新的 Entry 组件用于输入字符串
	stringEntry := widget.NewEntry()
	stringEntry.SetPlaceHolder("Enter DID here...") // 设置占位符文本

	stateLabel := widget.NewLabel("Working State: Spare")
	btn0 := widget.NewButton("Run Demo", func() {
		stateLabel.SetText("Working State: Working")
		go im.init_04(entry, stringEntry, scrollContainer, image, imgs)

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

	finalLayout := container.NewVBox(image, stringEntry, scrollContainer, bottom)

	return finalLayout
}

func (im *infoManager) init_04(output *widget.Entry, input *widget.Entry, scroll *container.Scroll, image *canvas.Image, imgs []fyne.Resource) {

	// // 创建要发送的JSON数据
	// jsonData := map[string]interface{}{
	// 	"message": "Hello from url0",
	// }

	// // 将jsonData转换为JSON字符串
	// jsonBytes, err := json.Marshal(jsonData)
	// if err != nil {
	// 	fmt.Println("Error marshaling jsonData:", err)
	// 	return
	// }

	// jsonString := string(jsonBytes)

	// EntryAppend(output, fmt.Sprintf("JSON data: \n%s\n", jsonString), scroll)

	// im.Hang()

	// image.Resource = imgs[1]
	// image.Refresh()

	// im.Hang()

	// image.Resource = imgs[2]
	// image.Refresh()

	// im.Hang()

	// image.Resource = imgs[3]
	// image.Refresh()

	// im.Hang()

	// image.Resource = imgs[4]
	// image.Refresh()

	ip := "10.129.13.177"

	url0 := "http://" + ip + ":8001"

	// url1 := "http://" + ip + ":8002"
	// url2 := "http://" + ip + ":8003"
	// url3 := "http://" + ip + ":8004"
	// im.Hang()
	//连接区块链节点
	keyStorePath := "./keystore"

	lk0 := dperclient.NewLinker(url0, keyStorePath)
	// lk1 := dperclient.NewLinker(url1, keyStorePath)
	// lk2 := dperclient.NewLinker(url2, keyStorePath)
	// lk3 := dperclient.NewLinker(url3, keyStorePath)
	// im.flManagers = []*dperclient.Linker{lk0, lk1, lk2, lk3}
	im.flManagers = []*dperclient.Linker{lk0}

	// 从 input Entry 获取用户输入的did
	// im.Hang()
	// EntryAppend(output, fmt.Sprintf("UE DID: %s\n", globalDID2), scroll)
	// // EntryAppend(output, fmt.Sprintf("UE DID2s: %s\n", inputText), scroll)

	// im.Hang()
	// EntryAppend(output, "++++++++++++++please enter your U-DID \n", scroll)

	// im.Hang()
	inputText := "DID:IMSI:a072949737f71sp2908af40e418db24285cc402b8ae63f4b95e2e9ff18636b1d61c43c80b4cce93582cb7ec54b2f89a5f11301d4e347a982f08db9037c1acd08"

	var totalDuration time.Duration
	start := time.Now()

	//step1: get到历史授权记录，打印到output
	r := lk0.GetAudit(inputText, "")

	elapsed := time.Since(start)
	totalDuration += elapsed
	EntryAppend(output, fmt.Sprintf("get transaction time: %s\n", elapsed), scroll)

	// 构造消息字符串，将输入的文本作为 ID 的值
	message := fmt.Sprintf("=============================Now audit the service authorization record for id:%s \n", "DID"+inputText)
	// 使用 EntryAppend 函数将构造的消息追加到 output Entry 中，并可能滚动 scroll 容器
	EntryAppend(output, message, scroll)
	// 解析从GetAudit函数返回的JSON字符串
	var transactions []dperclient.FilteredTransaction // 使用FilteredTransaction代替map
	if err := json.Unmarshal([]byte(r), &transactions); err != nil {
		log.Fatalf("JSON Unmarshal error: %v", err)
	}

	// 构建要显示的交易记录字符串
	// var transactionsStr string
	// for _, trans := range transactions {
	// 	// 将每个交易记录转换回JSON字符串，以保持其内部属性的顺序
	// 	transJSON, err := json.MarshalIndent(trans, "", "	")
	// 	if err != nil {
	// 		log.Fatalf("JSON Marshal error: %v", err)
	// 	}
	// 	transactionsStr += string(transJSON) + "\n\n"
	// }
	// im.Hang()

	// 将交易记录字符串追加到entry组件中
	// EntryAppend(output, "+++++++++++++++++++++++++++++All the authorization history containing DID:"+inputText+":\n"+transactionsStr, scroll)

	// message1 := fmt.Sprintf("+++++++++++++++++++++++++++++All the authorization history:\n %s\n", r)
	// EntryAppend(output, message1, scroll)

	// im.Hang()
	//step2: 生成本次审计的记录，上链并将结果返回
	auditInfo := "DID:" + inputText
	// r1, err := lk0.PublishAuditTx([]byte(auditInfo))
	_, err := lk0.PublishAuditTx([]byte(auditInfo))

	elapsed = time.Since(start)
	totalDuration += elapsed
	EntryAppend(output, fmt.Sprintf("send audit transaction: %s\n", elapsed), scroll)

	if err != nil {
		fmt.Printf("Record audit failed, err:%v\n", err)
	}
	// message2 := fmt.Sprintf("+++++++++++++++++++++++++++++Audit recorded:\n %s\n%s\n", auditInfo, r1)
	// EntryAppend(output, message2, scroll)

	// time.Sleep(1 * time.Second)

	EntryAppend(output, "Audit done!", scroll)
	// image.Resource = imgs[1]
	// image.Refresh()

}
