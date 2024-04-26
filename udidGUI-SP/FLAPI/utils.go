package FLAPI

import (
	"bytes"
	"encoding/json"
	"io/ioutil"
	"net/http"
)

const defaultUrl = "http://localhost:4000/jsonrpc"

func ParseJsonRPCPayload(method string, id int, params ...any) *JsonRPCPayload {
	temp_params := make([]any, 0)
	temp_params = append(temp_params, params...)
	return &JsonRPCPayload{
		Method:  method,
		Params:  temp_params,
		JsonRPC: "2.0",
		Id:      id,
	}
}

func SendRequest(client *http.Client, info []byte) (*JsonRPCResult, error) {
	req, err := http.NewRequest("POST", defaultUrl, bytes.NewReader(info))
	if err != nil {
		return nil, err
	}

	resp, err := client.Do(req)
	if err != nil {
		return nil, err
	}
	body, err := ioutil.ReadAll(resp.Body)
	if err != nil {
		return nil, err
	}
	var res JsonRPCResult
	json.Unmarshal(body, &res)
	return &res, nil
}
