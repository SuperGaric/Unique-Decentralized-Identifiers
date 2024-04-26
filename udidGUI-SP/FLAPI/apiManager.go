package FLAPI

import (
	"encoding/base64"
	"encoding/json"
	"net/http"
	"strconv"
)

type FLAssistant struct {
	client *http.Client
}

func NewFLAssistant() *FLAssistant {
	return &FLAssistant{client: &http.Client{}}
}

func (fa *FLAssistant) Aggregate(models ...[]byte) ([]byte, error) {
	paras := make([]string, 0)
	for _, model := range models {
		strpara := base64.StdEncoding.EncodeToString(model)
		paras = append(paras, strpara)
	}
	request := &AggregateRequest{Models: paras}
	payload := ParseJsonRPCPayload("aggregate", 0, request)
	info, err := json.Marshal(payload)
	if err != nil {
		return nil, err
	}
	res, err := SendRequest(fa.client, info)
	if err != nil {
		return nil, err
	}
	decoderes, err := base64.StdEncoding.DecodeString(res.Result)
	if err != nil {
		return nil, err
	}
	return decoderes, nil
}

func (fa *FLAssistant) Evaluate(model []byte) (string, error) {
	strpara := base64.StdEncoding.EncodeToString(model)
	request := &EvaluateRequest{
		Model: strpara,
	}
	payload := ParseJsonRPCPayload("evaluate", 0, request)
	info, err := json.Marshal(payload)
	if err != nil {
		return "", err
	}
	res, err := SendRequest(fa.client, info)
	if err != nil {
		return "", err
	}
	return res.Result, nil
}

type FLTrainer struct {
	Rank   int
	client *http.Client
}

func NewFLTrainer() *FLTrainer {
	return &FLTrainer{
		Rank:   -1,
		client: &http.Client{},
	}
}

func (ft *FLTrainer) Register() (int, error) {
	payload := ParseJsonRPCPayload("register", 0, nil)
	info, err := json.Marshal(payload)
	if err != nil {
		return -1, err
	}
	res, err := SendRequest(ft.client, info)
	if err != nil {
		return -1, err
	}
	rank, err := strconv.Atoi(res.Result)
	if err != nil {
		return -1, err
	}
	ft.Rank = rank
	return rank, nil
}

func (ft *FLTrainer) ModelTrain(model []byte) ([]byte, error) {
	strpara := base64.StdEncoding.EncodeToString(model)
	request := &ModelTrainRequest{
		Rank:  ft.Rank,
		Model: strpara,
	}
	payload := ParseJsonRPCPayload("modeltrain", 0, request)
	info, err := json.Marshal(payload)
	if err != nil {
		return nil, err
	}
	res, err := SendRequest(ft.client, info)
	if err != nil {
		return nil, err
	}
	decoderes, err := base64.StdEncoding.DecodeString(res.Result)
	if err != nil {
		return nil, err
	}
	return decoderes, nil
}

func (ft *FLTrainer) GetModel() ([]byte, error) {
	request := &GetModelRequest{Rank: ft.Rank}
	payload := ParseJsonRPCPayload("getmodel", 0, request)
	info, err := json.Marshal(payload)
	if err != nil {
		return nil, err
	}
	res, err := SendRequest(ft.client, info)
	if err != nil {
		return nil, err
	}
	decoderes, err := base64.StdEncoding.DecodeString(res.Result)
	if err != nil {
		return nil, err
	}
	return decoderes, nil
}
