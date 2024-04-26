package main

import (
	// "udidGUI/FLAPI"

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

func (im *infoManager) init_01(output *widget.Entry, scroll *container.Scroll, image *canvas.Image, imgs []fyne.Resource) {
	EntryAppend(output, "Demo starts!\n", scroll)
	im.Hang()
	output.SetText("=============================Step 1: Link blockchain nodes...\n")

	url0 := "http://10.129.227.181:8001"
	url1 := "http://10.129.227.181:8002"
	// url2 := "http://10.129.227.181:8003"
	// url3 := "http://10.129.227.181:8004"

	keyStorePath := "./keystore"

	lk0 := dperclient.NewLinker(url0, keyStorePath)
	lk1 := dperclient.NewLinker(url1, keyStorePath)

	im.flManagers = []*dperclient.Linker{lk0, lk1}
	//启动url1的http服务器来处理接受的json
	go im.flManagers[1].HandleJSON()

	EntryAppend(output, fmt.Sprintf("Node with Url %s, the node is:\n%s\n", lk0.Url, dperclient.SprintfNodeInfo(lk0.GetNodeInfo())), scroll)
	EntryAppend(output, fmt.Sprintf("Node with Url %s, the node is:\n%s\n", lk1.Url, dperclient.SprintfNodeInfo(lk1.GetNodeInfo())), scroll)

	networkInfo := lk0.BackViewNetInfo()
	im.network.Leaders = networkInfo.Leaders
	im.network.Booters = networkInfo.Booters
	if len(networkInfo.SubNets) > 0 {
		im.network.SubNets[0] = networkInfo.SubNets[0]
	}
	EntryAppend(output, fmt.Sprintf("The network info is: \n %s\n", dperclient.SprintfViewNet(networkInfo)), scroll)

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

	im.Hang()
	output.SetText("=============================Step 2: User interact with local program to generate DID & DID document...\n")
	image.Resource = imgs[1]
	image.Refresh()

	im.Hang()
	output.SetText("=============================Step 3: User send DID & DID document to BC network function through AMF authentication protocol...\n")
	image.Resource = imgs[2]
	image.Refresh()

	im.Hang()
	output.SetText("=============================Step 4: DID & DID document approved by consensus...\n")
	image.Resource = imgs[3]
	image.Refresh()
	EntryAppend(output, "=============================Unique Decentralized Identifiers generation succeed...\n", scroll)

	time.Sleep(1 * time.Second)

	EntryAppend(output, "Account done!", scroll)
	// image.Resource = imgs[1]
	// image.Refresh()

}
