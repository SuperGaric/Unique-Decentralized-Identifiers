package dperclient

import (
	"udidGUI/FLAPI"
	"testing"
	"time"
)

var testurl = "http://127.0.0.1:8001"
var testKeyPath = "./testKeyStore"

func TestLinker_PublishInitTx(t *testing.T) {
	lk := NewLinker(testurl, testKeyPath)
	time.Sleep(2 * time.Second)
	_, err := lk.PublishInitTx()
	if err != nil {
		t.Fatalf("fail in init: %v", err)
	}

	time.Sleep(3 * time.Second)

	height, err := lk.CallModelHeight()
	if err != nil {
		t.Fatalf("fail in call height: %v", err)
	}
	t.Logf("The height is: %d", height)
}

func TestLinker_ModelTrain(t *testing.T) {
	assistant := FLAPI.NewFLAssistant()
	lk := NewLinker(testurl, testKeyPath)
	time.Sleep(2 * time.Second)
	_, err := lk.PublishInitTx()
	if err != nil {
		t.Fatalf("fail in init: %v", err)
	}

	time.Sleep(3 * time.Second)

	height, err := lk.CallModelHeight()
	if err != nil {
		t.Fatalf("fail in call height: %v", err)
	}
	t.Logf("The height is: %d", height)

	iniModel, err := lk.GetInitModel()
	if err != nil {
		t.Fatalf("fail in get initial model: %v", err)
	}

	evalres, err := assistant.Evaluate(iniModel)
	if err != nil {
		t.Fatalf("fail in evaluate initial model: %v", err)
	}
	t.Logf("The res of initial model is: %s", evalres)

	_, err = lk.PublishModelTx(iniModel)
	if err != nil {
		t.Fatalf("fail in publish initial model: %v", err)
	}

	time.Sleep(10 * time.Second)

	gotModel, err := lk.GetCurrentGlobalModel()
	if err != nil {
		t.Fatalf("fail in get model: %v", err)
	}

	evalres, err = assistant.Evaluate(gotModel)
	if err != nil {
		t.Fatalf("fail in evaluate got model: %v", err)
	}
	t.Logf("The res of got model is: %s", evalres)
}

func TestLinker_Demo(t *testing.T) {
	// Step 3
	assistant := FLAPI.NewFLAssistant()
	url0 := "http://127.0.0.1:8001"
	url1 := "http://127.0.0.1:8002"
	url2 := "http://127.0.0.1:8003"
	url3 := "http://127.0.0.1:8004"
	lk0 := NewLinker(url0, testKeyPath)
	t.Logf("Node with Url %s has connected with rank %d, the node is:\n%s", lk0.Url, lk0.FLAgent.Rank, SprintfNodeInfo(lk0.GetNodeInfo()))
	lk1 := NewLinker(url1, testKeyPath)
	t.Logf("Node with Url %s has connected with rank %d, the node is:\n%s", lk1.Url, lk1.FLAgent.Rank, SprintfNodeInfo(lk1.GetNodeInfo()))
	lk2 := NewLinker(url2, testKeyPath)
	t.Logf("Node with Url %s has connected with rank %d, the node is:\n%s", lk2.Url, lk2.FLAgent.Rank, SprintfNodeInfo(lk2.GetNodeInfo()))
	lk3 := NewLinker(url3, testKeyPath)
	t.Logf("Node with Url %s has connected with rank %d, the node is:\n%s", lk3.Url, lk3.FLAgent.Rank, SprintfNodeInfo(lk3.GetNodeInfo()))

	t.Logf("The newtork info is: \n %s", SprintfViewNet(lk0.BackViewNetInfo()))
	//

	// Step 5
	time.Sleep(2 * time.Second)
	_, err := lk0.PublishInitTx()
	if err != nil {
		t.Fatalf("fail in init: %v", err)
	}

	time.Sleep(3 * time.Second)

	init_height, err := lk0.CallModelHeight()
	if err != nil {
		t.Fatalf("fail in call height: %v", err)
	}
	t.Logf("The height is: %d", init_height)

	iniModel, err := lk0.GetInitModel()
	if err != nil {
		t.Fatalf("fail in get initial model: %v", err)
	}

	evalres, err := assistant.Evaluate(iniModel)
	if err != nil {
		t.Fatalf("fail in evaluate initial model: %v", err)
	}
	t.Logf("The res of initial model is: %s", evalres)

	// step 6
	localModel0, err := lk0.ModelTrain(iniModel)
	if err != nil {
		t.Fatalf("fail in model train %v", err)
	}
	evalres, err = assistant.Evaluate(localModel0)
	if err != nil {
		t.Fatalf("fail in evaluate initial model: %v", err)
	}
	t.Logf("The res of local model 0 is: %s", evalres)

	localModel1, err := lk1.ModelTrain(iniModel)
	if err != nil {
		t.Fatalf("fail in model train %v", err)
	}
	evalres, err = assistant.Evaluate(localModel1)
	if err != nil {
		t.Fatalf("fail in evaluate initial model: %v", err)
	}
	t.Logf("The res of local model 1 is: %s", evalres)

	localModel2, err := lk2.ModelTrain(iniModel)
	if err != nil {
		t.Fatalf("fail in model train %v", err)
	}
	evalres, err = assistant.Evaluate(localModel2)
	if err != nil {
		t.Fatalf("fail in evaluate initial model: %v", err)
	}
	t.Logf("The res of local model 2 is: %s", evalres)

	localModel3, err := lk3.ModelTrain(iniModel)
	if err != nil {
		t.Fatalf("fail in model train %v", err)
	}
	evalres, err = assistant.Evaluate(localModel3)
	if err != nil {
		t.Fatalf("fail in evaluate initial model: %v", err)
	}
	t.Logf("The res of local model 3 is: %s", evalres)

	// step 7
	t.Log("Now start to publish transactions")

	_, err = lk0.PublishModelTx(localModel0)
	if err != nil {
		t.Fatalf("fail in publish initial model: %v", err)
	}
	_, err = lk1.PublishModelTx(localModel1)
	if err != nil {
		t.Fatalf("fail in publish initial model: %v", err)
	}
	_, err = lk2.PublishModelTx(localModel2)
	if err != nil {
		t.Fatalf("fail in publish initial model: %v", err)
	}
	//_, err = lk3.PublishModelTx(localModel3)
	//if err != nil {
	//	t.Fatalf("fail in publish initial model: %v", err)
	//}

	// step 8
	time.Sleep(10 * time.Second)
	t.Logf("now block number is:%d", lk0.GetBlockNum())
	t.Logf("The blocks are:\n %s", SprintfBlockList(lk0.GetCurrentBlocks(3)))

	// step 9

	aggModel1, err := lk0.GetGlobalModelByNo(init_height + 1)
	if err != nil {
		t.Fatalf("fail in get model: %v", err)
	}
	aggModel2, err := lk0.GetGlobalModelByNo(init_height + 2)
	if err != nil {
		t.Fatalf("fail in get model: %v", err)
	}

	evalres, err = assistant.Evaluate(aggModel1)
	if err != nil {
		t.Fatalf("fail in evaluate got model: %v", err)
	}
	t.Logf("The res of aggregated model 1 is: %s", evalres)

	evalres, err = assistant.Evaluate(aggModel2)
	if err != nil {
		t.Fatalf("fail in evaluate got model: %v", err)
	}
	t.Logf("The res of aggregated model 2 is: %s", evalres)

}
