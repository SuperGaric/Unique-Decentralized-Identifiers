package dperclient

import (
	"bytes"
	"flGUI/eles"
	"flGUI/rlp"
	"fmt"
	"io/ioutil"
	"mime/multipart"
	"net/http"
)

func PublishTx(url string, txList []*eles.Transaction) (error, string) {

	uri := url + "/dper/publishTx"

	txGroup := eles.NewTransactionGroup(txList)
	payload, err := rlp.EncodeToBytes(txGroup)
	if err != nil {
		fmt.Printf("交易集合rlp编码失败,err:%v\n", err)
		return err, ""
	}
	var buf bytes.Buffer
	buf.Write(payload)

	resp := sendHttpPost(uri, buf, nil)

	return nil, resp
}

func CallTx(url string, contractName string, functionName string, args string) string {
	uri := url + "/dper/softCall"
	// 创建一个缓冲区，用于存储multipart/form-data请求的内容
	var buf bytes.Buffer
	// 创建一个multipart.Writer实例，用于构建multipart/form-data请求的body
	writer := multipart.NewWriter(&buf)
	// 添加form-data参数
	writer.WriteField("contractName", contractName)
	writer.WriteField("functionName", functionName)
	writer.WriteField("args", args)

	writer.Close()

	return sendHttpPost(uri, buf, writer)

}

func CallTx64(url string, contractName string, functionName string, args string) string {
	uri := url + "/dper/softCall64"
	// 创建一个缓冲区，用于存储multipart/form-data请求的内容
	var buf bytes.Buffer
	// 创建一个multipart.Writer实例，用于构建multipart/form-data请求的body
	writer := multipart.NewWriter(&buf)
	// 添加form-data参数
	writer.WriteField("contractName", contractName)
	writer.WriteField("functionName", functionName)
	writer.WriteField("args", args)

	writer.Close()

	return sendHttpPost(uri, buf, writer)

}

func Signvalid(url string, message string, signature string, address string) string {
	uri := url + "/dper/signvalid"
	// 创建一个缓冲区，用于存储multipart/form-data请求的内容
	var buf bytes.Buffer
	// 创建一个multipart.Writer实例，用于构建multipart/form-data请求的body
	writer := multipart.NewWriter(&buf)
	// 添加form-data参数
	writer.WriteField("message", message)
	writer.WriteField("signature", signature)
	writer.WriteField("address", address)

	writer.Close()

	return sendHttpPost(uri, buf, writer)

}

func CallSignature(url string,message string) string {
	uri := url + "/dper/signaturereturn2"
	// 创建一个缓冲区，用于存储multipart/form-data请求的内容
	var buf bytes.Buffer
	// 创建一个multipart.Writer实例，用于构建multipart/form-data请求的body
	writer := multipart.NewWriter(&buf)
	// 添加form-data参数
	writer.WriteField("message", message)
	writer.Close()

	return sendHttpPost(uri, buf, writer)

}
func sendHttpPost(dperurl string, buf bytes.Buffer, writer *multipart.Writer) string {
	// 创建一个http请求
	req, err := http.NewRequest("POST", dperurl, &buf)
	if err != nil {
		panic(err)
	}
	// 设置请求头Content-Type为multipart/form-data
	if writer != nil {
		req.Header.Set("Content-Type", writer.FormDataContentType())
	}

	// 发送请求
	client := &http.Client{}
	resp, err := client.Do(req)
	if err != nil {
		panic(err)
	}
	defer resp.Body.Close()

	// 读取响应内容
	body, err := ioutil.ReadAll(resp.Body)
	if err != nil {
		fmt.Println(err)
		return ""
	}
	// 打印响应内容

	return string(body)
}

func sendHttpGet(dperurl string) string {
	var buf bytes.Buffer
	// 创建一个http请求
	req, err := http.NewRequest("GET", dperurl, &buf)
	if err != nil {
		panic(err)
	}

	// 发送请求
	client := &http.Client{}
	resp, err := client.Do(req)
	if err != nil {
		panic(err)
	}
	defer resp.Body.Close()

	// 读取响应内容
	body, err := ioutil.ReadAll(resp.Body)
	if err != nil {
		fmt.Println(err)
		return ""
	}

	// 打印响应内容
	//fmt.Printf("now: %s ---- %s\n", time.Now().Format("2006-01-02 15:04:05"), string(body))
	return string(body)
}
