package main

import (
	"udidGUI/dperclient"
)

type infoManager struct {
	network      *dperclient.DPNetWork
	flManagers   []*dperclient.Linker
	modelRes     []string
	globalRes    []string
	modelHeight  int
	recentBlocks *dperclient.RecentBlock
	totalBlocks  int
	nextStep     chan struct{}
}

func generateTestInfoManager() *infoManager {
	sub1 := dperclient.DPSubNetwork{
		Leader:    "leader1",
		NetID:     "net1",
		Followers: []string{"follower1"},
	}

	sub2 := dperclient.DPSubNetwork{
		Leader:    "leader2",
		NetID:     "net2",
		Followers: []string{"follower2"},
	}

	netWork := &dperclient.DPNetWork{
		Booters: []string{"booter1"},
		Leaders: []string{"leader1", "leader2"},
		SubNets: []dperclient.DPSubNetwork{sub1, sub2},
	}

	flms := make([]*dperclient.Linker, 4)
	for i := 0; i < len(flms); i++ {
		flms[i] = dperclient.NewTestLinker(i)
	}

	rbs := dperclient.MakeTestRecentBlock()

	return &infoManager{
		network:      netWork,
		flManagers:   flms,
		modelRes:     []string{"loss: 2.0156    accuracy: 0.52110", "loss: 2.0155    accuracy: 0.52110", "loss: 2.0154    accuracy: 0.52110", "loss: 2.0153    accuracy: 0.52110"},
		globalRes:    []string{"loss: 2.0156    accuracy: 0.52110", "loss: 2.0155    accuracy: 0.52110"},
		modelHeight:  2,
		recentBlocks: rbs,
		totalBlocks:  len(rbs.BlockList),
		nextStep:     make(chan struct{}),
	}

}
