package dperclient

import (
	"bytes"
	"encoding/base64"
	"encoding/json"
	"fmt"
	"log"
	"strconv"
	"strings"
	"udidGUI/FLAPI"
	"udidGUI/accounts"
	"udidGUI/common"
	"udidGUI/contract"
	"udidGUI/crypto/keys"
	"udidGUI/eles"

	// "encoding/json"
	"io/ioutil"
	"net/http"
	"net/url"
)

// for a4
type FilteredTransaction struct {
	TxID      string   `json:"txID"`
	Sender    string   `json:"sender"`
	Version   string   `json:"version"`
	Signature string   `json:"signature"`
	Contract  string   `json:"contract"`
	Function  string   `json:"function"`
	Args      []string `json:"args"`
}

// for a4: get all audit information
func (lk *Linker) GetAudit(did string, function string) string {
	uri := lk.Url + "/block/getAllTransactions"
	allTrans := sendHttpGet(uri)
	// 解析JSON字符串到结构体
	var result struct {
		Code int `json:"code"`
		Data struct {
			TransactionList []struct {
				TxID      string   `json:"txID"`
				Sender    string   `json:"sender"`
				Version   string   `json:"version"`
				Signature string   `json:"signature"`
				Contract  string   `json:"contract"`
				Function  string   `json:"function"`
				Args      []string `json:"args"`
			} `json:"transactionList"`
			TxCount int `json:"txCount"`
		} `json:"data"`
		Msg string `json:"msg"`
	}

	if err := json.Unmarshal([]byte(allTrans), &result); err != nil {
		log.Fatalf("JSON Unmarshal error: %v", err)
	}
	did = "DID:" + did
	fmt.Println(did + "\n")

	// 筛选交易
	var filteredTransactions []FilteredTransaction
	for _, trans := range result.Data.TransactionList {
		for _, arg := range trans.Args {
			if strings.Contains(arg, did) {
				filteredTransaction := FilteredTransaction{
					TxID:      trans.TxID,
					Sender:    trans.Sender,
					Version:   trans.Version,
					Signature: trans.Signature,
					Contract:  trans.Contract,
					Function:  trans.Function,
					Args:      trans.Args,
				}
				filteredTransactions = append(filteredTransactions, filteredTransaction)
				break
			}
		}
	}

	// 将筛选结果转换回JSON字符串
	filteredJSON, err := json.Marshal(filteredTransactions)
	if err != nil {
		log.Fatalf("JSON Marshal error: %v", err)
	}
	fmt.Println(string(filteredJSON))
	return string(filteredJSON)
}

// for a4: generate another transaction to record this audit action
func (lk *Linker) PublishAuditTx(did []byte) (string, error) {
	contractAddr := contract.StringToContractAddress("DID::SPECTRUM::TRADE")
	functionAddr := contract.StringToFunctionAddress("GetAddress")

	version := lk.GetVersion()

	tx := eles.Transaction{
		TxID:      common.Hash{},
		Sender:    lk.Account.Address,
		Nonce:     0,
		Version:   version,
		LifeTime:  0,
		Signature: nil,
		Contract:  contractAddr,
		Function:  functionAddr,
		Args:      [][]byte{did},
		CheckList: nil,
	}

	tx.SetTxID()
	signature, err := lk.AccountManager.SignHash(*lk.Account, tx.TxID)
	if err != nil {
		fmt.Printf("Transaction generation failed, signature failed, err:%v\n", err)
		return "", err
	}
	tx.Signature = signature

	err, resp := PublishTx(lk.Url, []*eles.Transaction{&tx})
	if err != nil {
		fmt.Printf("Transaction publishing failed, err:%v\n", err)
		return "", err
	}

	return resp, err
}

//发送json数据到制定的URL
func (lk *Linker) SendJSONTo(url string, jsonData map[string]interface{}) (string, error) {
	jsonValue, _ := json.Marshal(jsonData)
	response, err := http.Post(url, "application/json", bytes.NewBuffer(jsonValue))
	if err != nil {
		return "", err
	}
	defer response.Body.Close()

	body, err := ioutil.ReadAll(response.Body)
	if err != nil {
		return "", err
	}

	return string(body), nil
}

func (lk *Linker) SendFormTo(url string, formData url.Values) (string, error) {
	// 使用http.PostForm发送表单数据
	response, err := http.PostForm(url, formData)
	if err != nil {
		return "", err
	}
	defer response.Body.Close()

	// 读取响应体
	body, err := ioutil.ReadAll(response.Body)
	if err != nil {
		return "", err
	}

	// 将响应体转换为字符串并返回
	return string(body), nil
}

// HandleJSON 设置一个HTTP服务来处理接收到的JSON请求
func (lk *Linker) HandleJSON() {
	http.HandleFunc("/", func(w http.ResponseWriter, r *http.Request) {
		if r.Method == "POST" {
			var data map[string]interface{}
			err := json.NewDecoder(r.Body).Decode(&data)
			if err != nil {
				http.Error(w, err.Error(), http.StatusBadRequest)
				return
			}

			// 处理data，例如打印或执行某些操作
			fmt.Printf("Received data: %v\n", data)

			// 假设回复
			response := map[string]string{"status": "success", "message": "Data received"}
			jsonResponse, err := json.Marshal(response)
			if err != nil {
				http.Error(w, err.Error(), http.StatusInternalServerError)
				return
			}

			w.Header().Set("Content-Type", "application/json")
			w.Write(jsonResponse)
		}
	})

	// 假设url1是 http://10.129.227.181:8002
	fmt.Println("Starting server at port 8002...")
	http.ListenAndServe(":8002", nil)
}

type Data struct {
	Address   string `json:"address"`
	Signature string `json:"signature"`
}
type Response struct {
	Code int      `json:"code"`
	Data []string `json:"data"`
	Msg  string   `json:"msg"`
}
type StatusResponse struct {
	Status string `json:"status"`
}

type Linker struct {
	Url            string
	AccountManager *accounts.Manager
	Account        *accounts.Account
	FLAgent        *FLAPI.FLTrainer
}

func NewTestLinker(rank int) *Linker {
	fla := &FLAPI.FLTrainer{Rank: rank}
	return &Linker{
		Url:            "test url:htttp://123",
		AccountManager: nil,
		Account:        nil,
		FLAgent:        fla,
	}
}

func NewLinker(url string, keyStoreDir string) *Linker {
	keyStore := keys.NewKeyStorePassphrase(keyStoreDir)
	am := accounts.NewManager(keyStore)
	account, _ := am.NewAccount("")
	am.Unlock(account.Address, "")
	flagent := FLAPI.NewFLTrainer()
	rank, _ := flagent.Register()
	fmt.Printf("FL trainer has been registered with rank %d\n", rank)

	return &Linker{
		Url:            url,
		AccountManager: am,
		Account:        account,
		FLAgent:        flagent,
	}
}

func (lk *Linker) GetVersion() common.Hash {
	uri := lk.Url + "/block/blockHash"
	curVer := sendHttpGet(uri)
	return common.HexToHash(curVer)
}

func (lk *Linker) PublishModelTx(model []byte) (string, error) {
	contractAddr := contract.StringToContractAddress("FL")
	functionAddr := contract.StringToFunctionAddress("storeModel")
	version := lk.GetVersion()

	tx := eles.Transaction{
		TxID:      common.Hash{},
		Sender:    lk.Account.Address,
		Nonce:     0,
		Version:   version,
		LifeTime:  0,
		Signature: nil,
		Contract:  contractAddr,
		Function:  functionAddr,
		Args:      [][]byte{model},
		CheckList: nil,
	}

	tx.SetTxID()
	signature, err := lk.AccountManager.SignHash(*lk.Account, tx.TxID)
	if err != nil {
		fmt.Printf("Transaction generation failed, signature failed, err:%v\n", err)
		return "", err
	}

	tx.Signature = signature

	err, resp := PublishTx(lk.Url, []*eles.Transaction{&tx})
	if err != nil {
		fmt.Printf("Transaction publishing failed, err:%v\n", err)
		return "", err
	}

	return resp, err
}

func (lk *Linker) PublishInitTx() (string, error) {
	contractAddr := contract.StringToContractAddress("FL")
	functionAddr := contract.StringToFunctionAddress("init")

	version := lk.GetVersion()

	tx := eles.Transaction{
		TxID:      common.Hash{},
		Sender:    lk.Account.Address,
		Nonce:     0,
		Version:   version,
		LifeTime:  0,
		Signature: nil,
		Contract:  contractAddr,
		Function:  functionAddr,
		Args:      [][]byte{},
		CheckList: nil,
	}

	tx.SetTxID()
	signature, err := lk.AccountManager.SignHash(*lk.Account, tx.TxID)
	if err != nil {
		fmt.Printf("Transaction generation failed, signature failed, err:%v\n", err)
		return "", err
	}
	tx.Signature = signature

	err, resp := PublishTx(lk.Url, []*eles.Transaction{&tx})
	if err != nil {
		fmt.Printf("Transaction publishing failed, err:%v\n", err)
		return "", err
	}

	return resp, err
}

func (lk *Linker) PublishSetDIDTx() (string, error) {
	contractAddr := contract.StringToContractAddress("DID::SPECTRUM::TRADE")
	functionAddr := contract.StringToFunctionAddress("SetDID")

	version := lk.GetVersion()

	tx := eles.Transaction{
		TxID:      common.Hash{},
		Sender:    lk.Account.Address,
		Nonce:     0,
		Version:   version,
		LifeTime:  0,
		Signature: nil,
		Contract:  contractAddr,
		Function:  functionAddr,
		Args:      [][]byte{},
		CheckList: nil,
	}

	tx.SetTxID()
	signature, err := lk.AccountManager.SignHash(*lk.Account, tx.TxID)
	if err != nil {
		fmt.Printf("Transaction generation failed, signature failed, err:%v\n", err)
		return "", err
	}
	tx.Signature = signature

	err, resp := PublishTx(lk.Url, []*eles.Transaction{&tx})
	if err != nil {
		fmt.Printf("Transaction publishing failed, err:%v\n", err)
		return "", err
	}

	return resp, err
}

type CallResult struct {
	Code int      `json:"code"`
	Data []string `json:"data"`
	Msg  string   `json:"msg"`
}

func (lk *Linker) CallModelHeight() (int, error) {
	res := CallTx(lk.Url, "FL", "getHeight", "null")

	callRes := CallResult{}
	json.Unmarshal([]byte(res), &callRes)

	height, err := strconv.Atoi(callRes.Data[0])
	if err != nil {
		panic(err)
	}
	return height, nil
}

func (lk *Linker) GetCurrentGlobalModel() ([]byte, error) {
	res := CallTx64(lk.Url, "FL", "getCurrent", "null")

	callRes := CallResult{}
	json.Unmarshal([]byte(res), &callRes)

	model, err := base64.StdEncoding.DecodeString(callRes.Data[0])
	if err != nil {
		return nil, err
	}
	return model, nil
}

func (lk *Linker) GetSignature(message string) (string, string) {
	var data Data
	res := CallSignature(lk.Url, message)
	err := json.Unmarshal([]byte(res), &data)
	if err != nil {
		// 处理错误
		fmt.Println("Error parsing JSON:", err)
		return "", ""
	}

	return data.Address, data.Signature
}

func (lk *Linker) GetAddress(DID string) string {
	res := CallTx(lk.Url, "DID::SPECTRUM::TRADE", "GetAddress", DID)
	var response Response
	err := json.Unmarshal([]byte(res), &response)
	if err != nil {
		fmt.Println("Error parsing JSON:", err)
		return ""
	}

	// 检查并提取 address
	if len(response.Data) > 0 {
		addressParts := strings.Split(response.Data[0], ":")
		if len(addressParts) == 2 {
			return addressParts[1] // 返回 address 值
		}
	}

	// 如果没有找到 address，返回空字符串或相应的错误信息
	return ""
}

func (lk *Linker) CallValid(message string, sigature string, address string) string {
	res := Signvalid(lk.Url, message, sigature, address)
	// 解析 JSON
	var statusResp StatusResponse
	err := json.Unmarshal([]byte(res), &statusResp)
	if err != nil {
		fmt.Println("Error parsing JSON:", err)
		return ""
	}

	// 返回 status 值
	return statusResp.Status
}

func (lk *Linker) GetGlobalModelByNo(number int) ([]byte, error) {
	numStr := strconv.Itoa(number)
	res := CallTx64(lk.Url, "FL", "getModel", numStr)

	callRes := CallResult{}
	json.Unmarshal([]byte(res), &callRes)

	model, err := base64.StdEncoding.DecodeString(callRes.Data[0])
	if err != nil {
		return nil, err
	}
	return model, nil
}

type DPNetWork struct {
	Booters []string       `json:"booters"`
	Leaders []string       `json:"leaders"`
	SubNets []DPSubNetwork `json:"subnets"`
}

type DPSubNetwork struct {
	Leader    string   `json:"leader"`
	NetID     string   `json:"netID"`
	Followers []string `json:"followers"`
}

type ViewNetInfo struct {
	Code int       `json:"code"`
	Data DPNetWork `json:"data"`
	Msg  string    `json:"msg"`
}

func (lk *Linker) BackViewNetInfo() *DPNetWork {
	uri := lk.Url + "/network/networkInfo"
	netRes := sendHttpGet(uri)
	viewNet := ViewNetInfo{}

	json.Unmarshal([]byte(netRes), &viewNet)
	return &viewNet.Data
}

type BlockNumInfo struct {
	Code int    `json:"code"`
	Data int    `json:"data"`
	Msg  string `json:"msg"`
}

func (lk *Linker) GetBlockNum() int {
	uri := lk.Url + "/block/blockNumber"
	blockNumStr := sendHttpGet(uri)
	bn := new(BlockNumInfo)
	json.Unmarshal([]byte(blockNumStr), &bn)
	count := bn.Data
	return count
}

type RecentBlockInfo struct {
	Code int         `json:"code"`
	Data RecentBlock `json:"data"`
	Msg  string      `json:"msg"`
}

type RecentBlock struct {
	BlockList []BlockInfo `json:"blockList"`
	ReqCount  int         `json:"reqCount"`
	ResCount  int         `json:"resCount"`
}

type BlockInfo struct {
	Number    uint64       `json:"number"`
	BlockID   string       `json:"blockHash"`
	Leader    string       `json:"leaderID"`
	PrevBlock string       `json:"prevBlockHash"`
	SubNet    string       `json:"subNet"`
	TxCount   int          `json:"txCount"`
	TxList    []string     `json:"txList"`
	TimeStamp string       `json:"timeStamp"`
	Receipt   BlockReceipt `json:"BlockReceipt"`
}

type BlockReceipt struct {
	ReceiptID string               `json:"receiptID"`
	TxReceipt []TransactionReceipt `json:"txReceipt"`
	WriteSet  []WriteEle           `json:"WriteSet"`
}

type TransactionReceipt struct {
	Valid  byte     `json:"valid"`
	Result []string `json:"result"`
}

type WriteEle struct {
	Value string `json:"value"`
}

func (lk *Linker) GetCurrentBlocks(count int) *RecentBlock {
	uri := lk.Url + "/block/getRecentBlocks/" + strconv.Itoa(count)
	res := sendHttpGet(uri)
	rb := RecentBlockInfo{}
	json.Unmarshal([]byte(res), &rb)
	return &rb.Data
}
func (lk *Linker) GetCurrentBlock() string {
	uri := lk.Url + "/block/getRecentBlocks/" + strconv.Itoa(1)
	res := sendHttpGet(uri)
	return res
}

type DPNode struct {
	NodeID   string `json:"nodeID"`
	Role     string `json:"role"`
	NetID    string `json:"netID"`
	State    bool   `json:"state"`
	LeaderID string `json:"leaderID"`
}

type NodeInfo struct {
	Code int    `json:"code"`
	Data DPNode `json:"data"`
	Msg  string `json:"msg"`
}

func (lk *Linker) GetNodeInfo() *DPNode {
	uri := lk.Url + "/network/selfNodeInfo"
	res := sendHttpGet(uri)
	ni := NodeInfo{}
	json.Unmarshal([]byte(res), &ni)
	return &ni.Data
}

func MakeTestRecentBlock() *RecentBlock {
	block1 := BlockInfo{
		Number:    0,
		BlockID:   "block0",
		Leader:    "leader1",
		PrevBlock: "0000000000000000",
		SubNet:    "net1",
		TxCount:   1,
		TxList:    []string{"txInit"},
		TimeStamp: "2021 12-3 3:31",
		Receipt:   BlockReceipt{},
	}

	block2 := BlockInfo{
		Number:    1,
		BlockID:   "block1",
		Leader:    "leader1",
		PrevBlock: "block0",
		SubNet:    "net1",
		TxCount:   1,
		TxList:    []string{"txStoreModel1"},
		TimeStamp: "2021 12-3 3:31",
		Receipt:   BlockReceipt{},
	}

	block3 := BlockInfo{
		Number:    2,
		BlockID:   "block2",
		Leader:    "leader2",
		PrevBlock: "block1",
		SubNet:    "net2",
		TxCount:   1,
		TxList:    []string{"txStoreModel2"},
		TimeStamp: "2021 12-3 3:31",
		Receipt:   BlockReceipt{},
	}

	return &RecentBlock{
		BlockList: []BlockInfo{block1, block2, block3},
		ReqCount:  5,
		ResCount:  3,
	}

}
