package main

import (
	// "udidGUI/FLAPI"

	"log"
	"os"
	"time"

	"fyne.io/fyne/v2"
	"fyne.io/fyne/v2/canvas"
	"fyne.io/fyne/v2/container"
	"fyne.io/fyne/v2/widget"
)

func (im *infoManager) make2aLayout() fyne.CanvasObject {
	exePath, _ := os.Executable()

	imgs := make([]fyne.Resource, 0)
	imgpaths := []string{"/imgs/Authentication0.png", "/imgs/Authentication1.png", "/imgs/Authentication2.png", "/imgs/Authentication3.png", "/imgs/Authentication4.png"}

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
		go im.init_02(entry, scrollContainer, image, imgs)
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

func (im *infoManager) init_02(output *widget.Entry, scroll *container.Scroll, image *canvas.Image, imgs []fyne.Resource) {

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

	image.Resource = imgs[1]
	image.Refresh()

	im.Hang()
	output.SetText("=============================Step 1: SP acquire DID from User...\n")
	image.Resource = imgs[2]
	image.Refresh()

	im.Hang()
	output.SetText("=============================Step 2: SP send Chllenge to User...\n")
	image.Resource = imgs[3]
	image.Refresh()
	EntryAppend(output, "=============================User return Signature to SP...\n", scroll)

	im.Hang()
	output.SetText("=============================Step 3: SP acquire User DID document from ID chain...\n")
	image.Resource = imgs[4]
	image.Refresh()
	im.Hang()
	EntryAppend(output, "=============================Obtain User Public Key from DID document...\n", scroll)
	im.Hang()
	EntryAppend(output, "=============================User Signature validating...\n", scroll)
	time.Sleep(1 * time.Second)
	EntryAppend(output, "=============================Valid Succeed!\n", scroll)

	EntryAppend(output, "Authentication done!", scroll)
	// image.Resource = imgs[1]
	// image.Refresh()

}
