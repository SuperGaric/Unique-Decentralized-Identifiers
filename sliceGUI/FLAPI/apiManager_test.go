package FLAPI

import (
	"io/ioutil"
	"testing"
)

func TestFLAPI(t *testing.T) {
	assistant := NewFLAssistant()
	manager0 := NewFLTrainer()
	manager1 := NewFLTrainer()
	rank0, err := manager0.Register()
	if err != nil {
		t.Fatalf("fail in register: %v", err)
	}
	t.Logf("The rank of manager 0 is %d", rank0)
	rank1, err := manager1.Register()
	if err != nil {
		t.Fatalf("fail in register: %v", err)
	}
	t.Logf("The rank of manager 1 is %d", rank1)

	initModel, err := manager0.GetModel()
	if err != nil {
		t.Fatalf("fail in get initial model: %v", err)
	}

	evalres, err := assistant.Evaluate(initModel)
	if err != nil {
		t.Fatalf("fail in evaluation: %v", err)
	}
	t.Logf("The evaluation result of initial model is: %s", evalres)

	trainModel0, err := manager0.ModelTrain(initModel)
	if err != nil {
		t.Fatalf("fail in train model: %v", err)
	}

	trainModel1, err := manager1.ModelTrain(initModel)
	if err != nil {
		t.Fatalf("fail in train model: %v", err)
	}

	evalres, err = assistant.Evaluate(trainModel0)
	if err != nil {
		t.Fatalf("fail in evaluation: %v", err)
	}
	t.Logf("The evaluation result of trained model 0 is: %s", evalres)

	evalres, err = assistant.Evaluate(trainModel1)
	if err != nil {
		t.Fatalf("fail in evaluation: %v", err)
	}
	t.Logf("The evaluation result of trained model 1 is: %s", evalres)

	aggModel, err := assistant.Aggregate(trainModel0, trainModel1)
	if err != nil {
		t.Fatalf("fail in aggregate model: %v", err)
	}
	evalres, err = assistant.Evaluate(aggModel)
	if err != nil {
		t.Fatalf("fail in evaluation: %v", err)
	}
	t.Logf("The evaluation result of aggregated model is: %s", evalres)
}

func TestFLAssistant_Evaluate(t *testing.T) {
	manager := NewFLAssistant()
	rawmodel1, err := ioutil.ReadFile("../testpara.pt")
	if err != nil {
		t.Fatalf("fail in read: %v", err)
	}
	//rawmodel2, err := ioutil.ReadFile("./gotpara.pt")
	//if err != nil {
	//	t.Fatalf("fail in read: %v",err)
	//}
	res, err := manager.Evaluate(rawmodel1)
	if err != nil {
		t.Fatalf("fail in evaluate: %v", err)
	}
	t.Logf("the evaluate res: %s", res)
}
