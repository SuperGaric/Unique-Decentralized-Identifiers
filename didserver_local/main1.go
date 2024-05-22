// package main

// import (
// 	"didserver/core"
// 	"didserver/httpclient"
// 	"encoding/json"
// 	"fmt"
// 	"io/ioutil"
// 	"net/http"

// 	"bytes"
// 	"mime/multipart"

// 	"github.com/gin-gonic/gin"
// )

// const KEY_STORE_PATH = "./keystore"

// type DiDQuery struct {
// 	DID string `json:"did"`
// }

// type TransTemp struct {
// 	// head
// 	TxID      string
// 	Sender    string
// 	Nonce     uint64
// 	Version   string
// 	LifeTime  uint8 // the max lagging versions after the current one
// 	Signature []byte

// 	//body
// 	Contract string
// 	Function string
// 	Args     []string // function argument
// }

// type AccountResponse struct {
// 	Code int `json:"code"`
// 	Data struct {
// 		Accounts []string `json:"accounts"`
// 	} `json:"data"`
// 	Msg string `json:"msg"`
// }

// var dq DiDQuery

// func sendFormDataRequest2(url, address, key1Value string) {
// 	body := &bytes.Buffer{}
// 	writer := multipart.NewWriter(body)

// 	// Add fields to the form
// 	_ = writer.WriteField("account", address)
// 	_ = writer.WriteField("password", key1Value)
// 	_ = writer.Close()

// 	req, err := http.NewRequest("POST", url, body)
// 	if err != nil {
// 		fmt.Println("Error:", err)
// 		return
// 	}
// 	req.Header.Set("Content-Type", writer.FormDataContentType())

// 	client := &http.Client{}
// 	resp, err := client.Do(req)
// 	if err != nil {
// 		fmt.Println("Error:", err)
// 		return
// 	}
// 	defer resp.Body.Close()

// 	// Read and print the response
// 	respBody, _ := ioutil.ReadAll(resp.Body)
// 	fmt.Println("POST Response:", string(respBody))
// }

// func sendFormDataRequest3(url, key1, value1, key2, value2, key3, value3 string) {
// 	body := &bytes.Buffer{}
// 	writer := multipart.NewWriter(body)

// 	// Add fields to the form
// 	_ = writer.WriteField(key1, value1)
// 	_ = writer.WriteField(key2, value2) // Corrected here
// 	_ = writer.WriteField(key3, value3) // Corrected here
// 	_ = writer.Close()

// 	req, err := http.NewRequest("POST", url, body)
// 	if err != nil {
// 		fmt.Println("Error:", err)
// 		return
// 	}
// 	req.Header.Set("Content-Type", writer.FormDataContentType())

// 	client := &http.Client{}
// 	resp, err := client.Do(req)
// 	if err != nil {
// 		fmt.Println("Error:", err)
// 		return
// 	}
// 	defer resp.Body.Close()

// 	// Read and print the response
// 	respBody, _ := ioutil.ReadAll(resp.Body)
// 	fmt.Println("POST Response:", string(respBody))
// }

// func main() {
// 	ds := core.NewDIDService(KEY_STORE_PATH)
// 	r := gin.Default()

// 	r.POST("/hello", func(c *gin.Context) {
// 		byteArray, err := ioutil.ReadAll(c.Request.Body)
// 		if err != nil {
// 			c.String(http.StatusBadRequest, "Error reading request body")
// 			return
// 		}

// 		err = json.Unmarshal(byteArray, &dq)
// 		if err != nil {
// 			c.String(http.StatusBadRequest, "Error parsing request body")
// 			return
// 		}

// 		fmt.Println(dq.DID)
// 		newArgs := "did:" + dq.DID
// 		// var args [][]byte

// 		// for i := 0; i < len(dq.DID); i++ {
// 		// 	b, _ := strconv.Atoi(string(dq.DID[i]))
// 		// 	args = append(args, []byte{byte(b)})
// 		// }
// 		args := [][]byte{[]byte(newArgs)}

// 		fmt.Println(args)

// 		tempUser := ds.CreateLocalUser("")
// 		tx := ds.BuildTransaction(tempUser, "SampleContract", "SampleFunction", args)

// 		// print(tx)
// 		// c.String(http.StatusOK, string(tx))

// 		// bitCurrent := ds.CompressTransaction(tx)

// 		// tempTx := &TransTemp{
// 		// 	TxID:      hexutil.Encode(tx.TxID[:]),
// 		// 	Sender:    hexutil.Encode(tx.Sender[:]),
// 		// 	Nonce:     tx.Nonce,
// 		// 	Version:   hexutil.Encode(tx.Version[:]),
// 		// 	LifeTime:  tx.LifeTime,
// 		// 	Signature: tx.Signature,
// 		// 	Contract:  hexutil.Encode(tx.Contract[:]),
// 		// 	Function:  hexutil.Encode(tx.Function[:]),
// 		// 	Args:      []string{dq.DID},
// 		// }

// 		byteTx, err := json.Marshal(tx)
// 		if err != nil {
// 			fmt.Printf("fail in marshal tx.")
// 			panic(err)
// 		}
// 		// fmt.Println(byteTx)

// 		strTx := string(byteTx)

// 		print(strTx)
// 		c.String(http.StatusOK, strTx)

// 		// sendGet to get the address
// 		fmt.Println("Going to get the address")
// 		accountResponse, err := httpclient.SendGET("http://127.0.0.1:8002/dper/accountsList")
// 		if err != nil {
// 			fmt.Println("Error:", err)
// 			return
// 		}
// 		fmt.Println("GET Response:", accountResponse)

// 		var respData AccountResponse
// 		err = json.Unmarshal([]byte(accountResponse), &respData)
// 		if err != nil {
// 			panic(err)
// 		}
// 		var accountValue string
// 		if len(respData.Data.Accounts) > 0 {
// 			accountValue = respData.Data.Accounts[0]
// 			accountValue = accountValue[1 : len(accountValue)-1]
// 			fmt.Println("Account Value:", accountValue)
// 		} else {
// 			fmt.Println("No account value found")
// 		}

// 		// Send the first request
// 		sendFormDataRequest2("http://127.0.0.1:8002/dper/useAccount", accountValue, " ")

// 		// Send the second request
// 		didArgs := "DID:IMSI:" + dq.DID
// 		sendFormDataRequest3("http://127.0.0.1:8002/dper/softInvoke", "contractName", "DID::SPECTRUM::TRADE", "functionName", "GetDataList", "args", didArgs)

// 		// the first post
// 		// fmt.Println("Going to send the first request")
// 		// data := []byte(fmt.Sprintf(`{"account": "%s", "password": ""}`, accountValue))

// 		// response, err := httpclient.SendPOST("http://127.0.0.1:8002/dper/useAccount", "application/json", data)
// 		// if err != nil {
// 		// 	fmt.Println("Error:", err)
// 		// 	return
// 		// }
// 		// fmt.Println("POST Response:", response)

// 		// // the second post
// 		// fmt.Println("Going to send the second request")
// 		// data2 := []byte(fmt.Sprintf(`{"contractName": "DID::SPECTRUM::TRADE", "functionName": "GetDataList", "args": "value3 DID:%s"}`, dq.DID))

// 		// response, err = httpclient.SendPOST("http://127.0.0.1:8002/dper/softInvoke", "application/json", data2)
// 		// if err != nil {
// 		// 	fmt.Println("Error:", err)
// 		// 	return
// 		// }
// 		// fmt.Println("POST Response:", response)

// 	})
// 	// go func() {
// 	//     if err := r.Run(":8080"); err != nil {
// 	//         panic(err)
// 	//     }
// 	// }()

// 	if err := r.Run(":8080"); err != nil {
// 		panic(err)
// 	}

// 	// time.Sleep(5 * time.Second)
// 	// http test

// 	// test post and get func

// 	// response, err := httpclient.SendGET("http://example.com")
// 	// if err != nil {
// 	// 	fmt.Println("Error:", err)
// 	// 	return
// 	// }
// 	// fmt.Println("GET Response:", response)

// 	// waitIndefinitely := make(chan struct{})
// 	// <-waitIndefinitely
// }

// // func SetArgs(args [][]byte, didArgs string){
// // 	args = append([]byte(didArgs), args)
// // 	return &args
// // }
