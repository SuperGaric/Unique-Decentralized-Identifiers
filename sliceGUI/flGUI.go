package main

import (
	"fyne.io/fyne/v2"
	"fyne.io/fyne/v2/app"
	"fyne.io/fyne/v2/container"
	"fyne.io/fyne/v2/widget"
)

func main() {
	myApp := app.New()
	myWindow := myApp.NewWindow("For Swarm Learning Demo of P3-Chain Use")

	// 创建侧边栏

	sideButtons := make([]*widget.Button, 0)

	// 创建主内容区
	im := generateTestInfoManager()

	content := container.NewMax(widget.NewLabel("Home Content"))

	newSideButton := func(name string) *widget.Button {
		idx := len(sideButtons)
		btn := widget.NewButton(name, func() {
			updateButtonStyles(sideButtons, idx)
			updateContent(content, im, idx)
			myWindow.Resize(fyne.NewSize(400, 400))
		})
		sideButtons = append(sideButtons, btn)
		return btn
	}

	btnHome := newSideButton("Home")
	btnP1 := newSideButton("P1")
	btnP2 := newSideButton("P2")
	btnP3 := newSideButton("P3")

	sidebar := container.NewVBox(
		btnHome,
		btnP1,
		btnP2,
		btnP3,
	)

	// P1 content
	// 使用边界布局将侧边栏和内容区组合起来
	// 边界布局允许你定义上下左右中五个区域的内容
	split := container.NewBorder(nil, nil, sidebar, nil, container.NewHBox(content))

	myWindow.SetContent(split)

	btnHome.OnTapped()
	myWindow.ShowAndRun()
}

func updateButtonStyles(buttons []*widget.Button, activeIndex int) {
	for i, btn := range buttons {
		if i == activeIndex {
			// 改变被点击的按钮样式
			btn.Importance = widget.HighImportance // 示例，根据Fyne版本这个属性可能不可用
			btn.Refresh()
		} else {
			// 其他按钮恢复普通样式
			btn.Importance = widget.MediumImportance // 示例，根据Fyne版本这个属性可能不可用
			btn.Refresh()
		}
	}
}

func updateContent(content *fyne.Container, im *infoManager, activeIndex int) {
	switch activeIndex {
	case 0:
		content.Objects = []fyne.CanvasObject{im.makeHomeLayout()}
		content.Refresh()
		return
	case 1:
		content.Objects = []fyne.CanvasObject{im.makeP1Layout()}
		content.Refresh()
	case 2:
		content.Objects = []fyne.CanvasObject{im.makeP2Layout()}
		content.Refresh()
	case 3:
		content.Objects = []fyne.CanvasObject{im.makeP3Layout()}
		content.Refresh()
	}
}
