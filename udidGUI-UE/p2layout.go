package main

import (
	"udidGUI/dperclient"
	"fmt"
	"fyne.io/fyne/v2"
	"fyne.io/fyne/v2/container"
	"strconv"
)

func (im *infoManager) makeP2Layout() fyne.CanvasObject {
	headerText := newTitle1("P2: Parallelizing on Block")
	line1 := standardLine1()
	totalBlockText := newTitle2("Total Blocks Number: " + strconv.Itoa(im.totalBlocks))

	pending := []fyne.CanvasObject{headerText, line1, totalBlockText}
	for _, block := range im.recentBlocks.BlockList {
		blkC := makeBlock(block)
		pending = append(pending, blkC)
	}

	finalLayout := container.NewVBox(pending...)
	return finalLayout
}

func makeBlock(block dperclient.BlockInfo) *fyne.Container {
	line1 := standardLine2()
	number := int(block.Number)
	blockNumberText := newFormalText("Block No." + strconv.Itoa(number))
	res := ""
	res += fmt.Sprintf("BlockID: %s;", block.BlockID)
	res += fmt.Sprintf("Leader: %s;", block.Leader)
	res += fmt.Sprintf("PrevBlock: %s;", block.PrevBlock)
	res += fmt.Sprintf("FromShard: %s;", block.SubNet)
	res += fmt.Sprintf("TxCount: %d;", block.TxCount)
	res += fmt.Sprintf("TxList: [ ")
	for j := 0; j < len(block.TxList); j++ {
		tx := block.TxList[j]
		res += fmt.Sprintf("Tx%d: %s ", j, tx)
	}
	res += fmt.Sprintf("];")
	res += fmt.Sprintf("TimeStamp: %s;", block.TimeStamp)
	res += fmt.Sprintf("Receipt: %s;", "omission")

	res += fmt.Sprintf("Tier 1 Signatures got %d, Tier 2 Signatures got %d", 2, 2)

	mainInfo := SeparateStrs(res)
	blockContainer := container.NewVBox(line1, blockNumberText, mainInfo)
	return blockContainer
}
