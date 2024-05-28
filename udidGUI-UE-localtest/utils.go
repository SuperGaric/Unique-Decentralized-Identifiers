package main

import (
	"fmt"
	"fyne.io/fyne/v2"
	"fyne.io/fyne/v2/canvas"
	"fyne.io/fyne/v2/container"
	"fyne.io/fyne/v2/theme"
	"fyne.io/fyne/v2/widget"
	"image/color"
	"strings"
	"time"
)

func newBorder(w float64, h float32) *canvas.Rectangle {
	border := canvas.NewRectangle(theme.BackgroundColor())
	border.StrokeColor = theme.ForegroundColor()
	border.StrokeWidth = 1
	if w != 0 && h != 0 {
		border.SetMinSize(fyne.NewSize(600, 400)) // Set a minimum size for the border
	}
	return border
}

func newTitle1(content string) *canvas.Text {
	headerText := canvas.NewText(content, nil)
	headerText.TextSize = 24
	headerText.TextStyle.Bold = true
	return headerText
}

func newTitle2(content string) *canvas.Text {
	headerText := canvas.NewText(content, nil)
	headerText.TextSize = 18
	headerText.TextStyle.Bold = true
	return headerText
}

func newFormalText(content string) *canvas.Text {
	formalText := canvas.NewText(content, nil)
	formalText.TextSize = 16
	formalText.TextStyle.Bold = false
	return formalText
}

func marginLRContainer(left, right float32, cnt fyne.CanvasObject) *fyne.Container {
	marginLeft := widget.NewLabel(" ")
	marginLeft.Resize(fyne.NewSize(left, 0)) // 设置左边距的宽度

	marginRight := widget.NewLabel(" ")
	marginRight.Resize(fyne.NewSize(right, 0)) // 设置右边距的宽度

	box := container.NewHBox(marginLeft, cnt, marginRight)

	return box
}

func marginContainer(left, right, top, bottom float32, cnt fyne.CanvasObject) *fyne.Container {
	marginLeft := widget.NewLabel(" ")
	marginLeft.Resize(fyne.NewSize(left, 0)) // 设置左边距的宽度

	marginRight := widget.NewLabel(" ")
	marginRight.Resize(fyne.NewSize(right, 0)) // 设置右边距的宽度

	box := container.NewHBox(marginLeft, cnt, marginRight)

	marginTop := widget.NewLabel(" ")
	marginTop.Resize(fyne.NewSize(0, top)) // 设置上边距的高度

	marginBottom := widget.NewLabel(" ")
	marginBottom.Resize(fyne.NewSize(0, bottom)) // 设置下边距的高度

	// 使用VBoxLayout包含边距和内容
	box0 := container.NewVBox(marginTop, box, marginBottom)
	return box0
}

func standardLine1() *canvas.Line {
	line := canvas.NewLine(color.Black) // 黑色横线
	line.StrokeWidth = 2                // 设置横线宽度
	line.Move(fyne.NewPos(0, 0))        // 设置横线的起始位置
	line.Resize(fyne.NewSize(100, 2))   // 设置横线的长度和高度
	return line
}

func standardLine2() *canvas.Line {
	line := canvas.NewLine(color.CMYK{0, 0, 0, 0100}) // 黑色横线
	line.StrokeWidth = 1                              // 设置横线宽度
	line.Move(fyne.NewPos(0, 0))                      // 设置横线的起始位置
	line.Resize(fyne.NewSize(100, 2))                 // 设置横线的长度和高度
	return line
}

func SeparateStrs(content string) *fyne.Container {
	strs := strings.Split(content, ";")
	objs := make([]fyne.CanvasObject, len(strs)) // 创建 fyne.CanvasObject 类型的切片
	for i, str := range strs {
		cv := newFormalText("------------" + str)
		objs[i] = cv // 将 canvas.Text 对象存储为 fyne.CanvasObject
	}
	return container.NewVBox(objs...) // 使用转换后的切片
}

func EntryAppend(entry *widget.Entry, addText string, scroll *container.Scroll) {
	currentText := entry.Text
	entry.SetText(currentText + addText)

	scroll.ScrollToBottom()
}

func ExtractAccuracy(data string) (float32, error) {
	parts := strings.Split(data, "accuracy:")
	part := parts[1]

	var accuracy float64
	_, err := fmt.Sscanf(part, "%f", &accuracy)
	if err != nil {
		return 0, err
	}
	return float32(accuracy), nil

}

func BackNowTime() string {
	now := time.Now()
	return now.String()
}
