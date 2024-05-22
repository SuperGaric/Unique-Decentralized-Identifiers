package main

import (
	"fyne.io/fyne/v2"
	"fyne.io/fyne/v2/container"
	"strconv"
)

func (im *infoManager) makeP3Layout() fyne.CanvasObject {
	headerText := newTitle1("P3: Programming on Consensus")
	line1 := standardLine1()

	netText1 := newTitle2("Shard 1: " + im.network.SubNets[0].NetID)
	net1_consensus := newFormalText("Consensus Name: FL_DEMO_USE_FedAVG")

	line2 := standardLine2()
	net1_mem1 := newFormalText("Member 1")
	net1_mem1_nodeID := newFormalText("Node ID: " + im.network.SubNets[0].Leader)
	net1_mem1_rank := newFormalText("FL Client Rank: " + strconv.Itoa(im.flManagers[0].FLAgent.Rank))
	net1_mem1_model := newFormalText("Local model evaluation: " + im.modelRes[0])
	line3 := standardLine2()
	net1_mem2 := newFormalText("Member 2")
	net1_mem2_nodeID := newFormalText("Node ID: " + im.network.SubNets[0].Followers[0])
	net1_mem2_rank := newFormalText("FL Client Rank: " + strconv.Itoa(im.flManagers[2].FLAgent.Rank))
	net1_mem2_model := newFormalText("Local model evaluation: " + im.modelRes[2])

	line4 := standardLine1()
	netText2 := newTitle2("Shard 2: " + im.network.SubNets[1].NetID)
	net2_consensus := newFormalText("Consensus Name: FL_DEMO_USE_FedCompete")

	line5 := standardLine2()
	net2_mem1 := newFormalText("Member 1")
	net2_mem1_nodeID := newFormalText("Node ID: " + im.network.SubNets[1].Leader)
	net2_mem1_rank := newFormalText("FL Client Rank: " + strconv.Itoa(im.flManagers[1].FLAgent.Rank))
	net2_mem1_model := newFormalText("Local model evaluation: " + im.modelRes[1])
	line6 := standardLine2()
	net2_mem2 := newFormalText("Member 2")
	net2_mem2_nodeID := newFormalText("Node ID: " + im.network.SubNets[1].Followers[0])
	net2_mem2_rank := newFormalText("FL Client Rank: " + strconv.Itoa(im.flManagers[3].FLAgent.Rank))
	net2_mem2_model := newFormalText("Local model evaluation: " + im.modelRes[3])

	line7 := standardLine1()
	globalModel := newTitle2("Recent Global Models on Blockchain")
	globalModel1 := newFormalText("Global model evaluation of block " + strconv.Itoa(im.totalBlocks-2) + ": " + im.globalRes[0])
	globalModel2 := newFormalText("Global model evaluation of block " + strconv.Itoa(im.totalBlocks-1) + ": " + im.globalRes[1])

	finalLayout := container.NewVBox(headerText, line1, netText1, net1_consensus, line2, net1_mem1, net1_mem1_nodeID, net1_mem1_rank, net1_mem1_model, line3, net1_mem2, net1_mem2_nodeID, net1_mem2_rank, net1_mem2_model, line4, netText2, net2_consensus, line5, net2_mem1, net2_mem1_nodeID, net2_mem1_rank, net2_mem1_model, line6, net2_mem2, net2_mem2_nodeID, net2_mem2_rank, net2_mem2_model, line7, globalModel, globalModel1, globalModel2)
	return finalLayout
}
