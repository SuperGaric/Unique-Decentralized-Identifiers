package main

import (
	"fyne.io/fyne/v2"
	"fyne.io/fyne/v2/container"
)

//func (im *infoManager) makeP1Layout() fyne.CanvasObject {
//	headerText := newTitle1("P1: Partitioning On Transactions")
//	tier2Network := im.makeTier2Network()
//	tier1Network := im.makeTier1Network()
//
//	// Combine Tier 2 and Tier 1 network info into a single container
//	networkInfo := container.NewVBox(tier2Network, tier1Network)
//
//	// Draw a border around the network info
//	border := newBorder(600, 400)
//
//	// Create a container that overlays the border behind the network info
//	networkContainer := container.NewMax(border, networkInfo)
//
//	// Combine the header and networkContainer into the final layout
//	finalLayout := container.NewVBox(headerText, networkContainer)
//
//	return finalLayout
//}

func (im *infoManager) makeP1Layout() fyne.CanvasObject {
	headerText := newTitle1("P1: Partitioning on Transaction")
	line1 := standardLine1()
	tier2Network := im.makeTier2Network()
	line2 := standardLine1()
	tier1Network := im.makeTier1Network()

	// Combine Tier 2 and Tier 1 network info into a single container
	networkInfo := container.NewVBox(tier2Network, line2, tier1Network)

	// Combine the header and networkContainer into the final layout
	finalLayout := container.NewVBox(headerText, line1, networkInfo)

	return finalLayout
}

//func (im *infoManager) makeTier2Network() *fyne.Container {
//	headerText := newTitle2("Tier 2 Network")
//
//	booterLabel := newFormalText("Booters: " + im.network.Booters[0])
//	leaderLabel := newFormalText("Leaders: " + im.network.Leaders[0] + ", " + im.network.Leaders[1])
//	tier2Info := container.NewVBox(headerText, booterLabel, leaderLabel)
//
//	border := newBorder(800, 400)
//
//	tier2Container := marginContainer(20, 20, 0, 0, container.NewMax(border, marginLRContainer(20, 20, tier2Info)))
//
//	return tier2Container
//}

func (im *infoManager) makeTier2Network() *fyne.Container {
	headerText := newTitle2("Tier 2 Network")
	line1 := standardLine2()

	booterLabel := newFormalText("Booters: " + im.network.Booters[0])
	leaderLabel := newFormalText("Leaders: ")
	ll1 := newFormalText("            No.1: " + im.network.Leaders[0])
	ll2 := newFormalText("            No.2: " + im.network.Leaders[1])
	tier2Info := container.NewVBox(headerText, line1, booterLabel, leaderLabel, ll1, ll2)

	return tier2Info
}

//
//func (im *infoManager) makeTier1Network() *fyne.Container {
//	headerText := newTitle2("Tier 1 Network")
//
//	subnet1 := im.network.SubNets[0]
//	subnet2 := im.network.SubNets[1]
//
//	net1_memStr1 := "NodeID: " + subnet1.Leader + "; Role: Leader; Associated Shard: " + subnet1.NetID + "; FL Client Rank: 0"
//	net1_memStr2 := "NodeID: " + subnet1.Followers[0] + "; Role: Follower; Associated Shard: " + subnet1.NetID + "; FL Client Rank: 2"
//	net2_memStr1 := "NodeID: " + subnet2.Leader + "; Role: Leader; Associated Shard: " + subnet2.NetID + "; FL Client Rank: 1"
//	net2_memStr2 := "NodeID: " + subnet2.Followers[0] + "; Role: Follower; Associated Shard: " + subnet2.NetID + "; FL Client Rank: 3"
//
//	shard1 := makeShard(subnet1.NetID, "FL_DEMO_USE_FedAVG", []string{net1_memStr1, net1_memStr2})
//	shard2 := makeShard("Shard Name", "Scheme Name", []string{net2_memStr1, net2_memStr2})
//
//	tier1Box := container.NewVBox(
//		headerText,
//		shard1,
//		shard2,
//	)
//
//	border := newBorder(0, 0)
//	tier1Container := marginContainer(20, 20, 0, 0, container.NewMax(border, marginLRContainer(20, 20, tier1Box)))
//
//	return tier1Container
//}

func (im *infoManager) makeTier1Network() *fyne.Container {
	headerText := newTitle2("Tier 1 Network")
	line1 := standardLine2()
	line2 := standardLine2()

	subnet1 := im.network.SubNets[0]
	subnet2 := im.network.SubNets[1]

	net1_memStr1 := "NodeID: " + subnet1.Leader + "; Role: Leader; Associated Shard: " + subnet1.NetID + "; FL Client Rank: 0"
	net1_memStr2 := "NodeID: " + subnet1.Followers[0] + "; Role: Follower; Associated Shard: " + subnet1.NetID + "; FL Client Rank: 2"
	net2_memStr1 := "NodeID: " + subnet2.Leader + "; Role: Leader; Associated Shard: " + subnet2.NetID + "; FL Client Rank: 1"
	net2_memStr2 := "NodeID: " + subnet2.Followers[0] + "; Role: Follower; Associated Shard: " + subnet2.NetID + "; FL Client Rank: 3"
	net1_Trans := "[init, getHeight, storeModel, getModel, getCurrentModel, publishModelAVG]"
	net2_Trans := "[init, getHeight, storeModel, getModel, getCurrentModel, publishModelCompete]"

	shard1 := makeShard(subnet1.NetID, "FL_DEMO_USE_FedAVG", net1_Trans, []string{net1_memStr1, net1_memStr2})
	shard2 := makeShard(subnet2.NetID, "FL_DEMO_USE_FedCompete", net2_Trans, []string{net2_memStr1, net2_memStr2})

	tier1Box := container.NewVBox(
		headerText,
		line1,
		shard1,
		line2,
		shard2,
	)

	return tier1Box
}

//func makeShard(shardName, schemeName string, members []string) *fyne.Container {
//
//	shardNameLabel := newFormalText("Shard Name: " + shardName)
//	schemeLabel := newFormalText("Consenus Name: " + schemeName)
//	member1 := newFormalText("Member Node 1: \n" + members[0])
//	member2 := newFormalText("Member Node 2: \n" + members[1])
//	shardInfo := container.NewVBox(shardNameLabel, schemeLabel, member1, member2)
//
//	border := newBorder(0, 0)
//
//	shardContainer := marginContainer(20, 20, 0, 0, container.NewMax(border, marginLRContainer(20, 20, shardInfo)))
//
//	return shardContainer
//}

func makeShard(shardName, schemeName, transactions string, members []string) *fyne.Container {

	shardNameLabel := newFormalText("Shard Name: " + shardName)
	schemeLabel := newFormalText("Consenus Name: " + schemeName)
	transactionText := newFormalText("Related Transactions: " + transactions)
	memla1 := newFormalText("Member Node 1: ")
	member1 := SeparateStrs(members[0])
	memla2 := newFormalText("Member Node 2: ")
	member2 := SeparateStrs(members[1])
	shardInfo := container.NewVBox(shardNameLabel, schemeLabel, transactionText, memla1, member1, memla2, member2)

	return shardInfo
}
