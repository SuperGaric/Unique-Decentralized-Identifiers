package dperclient

import (
	"encoding/base64"
	"encoding/json"
	"flGUI/FLAPI"
	"flGUI/accounts"
	"flGUI/common"
	"flGUI/contract"
	"flGUI/crypto/keys"
	"flGUI/eles"
	"fmt"
	"strconv"
	"strings"
)
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

func (lk *Linker) GetSignature(message string) (string,string) {
	var data Data
	res := CallSignature(lk.Url,message)
	err := json.Unmarshal([]byte(res), &data)
    if err != nil {
        // 处理错误
        fmt.Println("Error parsing JSON:", err)
        return "", ""
    }

	return data.Address, data.Signature
}

func (lk *Linker) GetAddress(DID string) (string) {
	res := CallTx(lk.Url, "DID::SPECTRUM::TRADE", "GetAddress",DID)
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

func (lk *Linker) CallValid(message string,sigature string,address string) (string) {
	res := Signvalid(lk.Url,message,sigature,address)
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
	NodeID string `json:"nodeID"`
	Role   string `json:"role"`
	NetID  string `json:"netID"`
	State bool `json:"state"`
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
