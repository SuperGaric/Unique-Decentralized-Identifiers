package dperclient

import (
	"fmt"
)

func SprintfViewNet(net *DPNetWork) string {
	res := ""
	res += "Tier 2: \n"
	res += fmt.Sprintf("node Count: %d\n", len(net.Booters)+len(net.Leaders))
	for i := 0; i < len(net.Booters); i++ {
		res += fmt.Sprintf("Booter%d: %s\n", i, net.Booters[i])
	}
	for i := 0; i < len(net.Leaders); i++ {
		res += fmt.Sprintf("Leader%d: %s\n", i, net.Leaders[i])
	}
	res += "--------------------------------\n"
	res += "Tier 1: \n"
	for i := 0; i < len(net.SubNets); i++ {
		res += fmt.Sprintln("netID: ", net.SubNets[i].NetID)
		res += fmt.Sprintln("node Count: ", len(net.SubNets[i].Followers)+1)
		res += fmt.Sprintf("Leader: %s\n", net.SubNets[i].Leader)

		for j := 0; j < len(net.SubNets[i].Followers); j++ {
			res += fmt.Sprintf("Follower%d: %s\n", j, net.SubNets[i].Followers[j])
		}
		res += fmt.Sprintln()
	}
	return res
}

func SprintfBlockList(blocks *RecentBlock) string {
	res := ""
	res += fmt.Sprintf("Total count: %d \n", len(blocks.BlockList))
	for i := 0; i < len(blocks.BlockList); i++ {
		block := blocks.BlockList[i]
		res += fmt.Sprintf("Block %d:\n", block.Number)
		res += fmt.Sprintf("BlockID------------->%s\n", block.BlockID)
		res += fmt.Sprintf("Leader-------------->%s\n", block.Leader)
		res += fmt.Sprintf("PrevBlock----------->%s\n", block.PrevBlock)
		res += fmt.Sprintf("FromShard----------->%s\n", block.SubNet)
		res += fmt.Sprintf("TxCount------------->%d\n", block.TxCount)
		res += fmt.Sprintf("TxList-->\n")
		for j := 0; j < len(block.TxList); j++ {
			tx := block.TxList[j]
			res += fmt.Sprintf("      Tx %d: %s\n", j, tx)
		}
		res += fmt.Sprintf("TimeStamp----------->%s\n", block.TimeStamp)
		res += fmt.Sprintf("Receipt------------->%s\n", "omission")
	}
	return res
}

func SprintfNodeInfo(node *DPNode) string {
	res := ""
	res += fmt.Sprintf("Node Info: \n")
	res += fmt.Sprintf("NodeID-------------->%s\n", node.NodeID)
	res += fmt.Sprintf("Role---------------->%s\n", node.Role)
	res += fmt.Sprintf("NetID--------------->%s\n", node.NetID)
	res += fmt.Sprintf("State--------------->%t\n", node.State)
	res += fmt.Sprintf("LeaderID------------>%s\n", node.LeaderID)
	return res
}
