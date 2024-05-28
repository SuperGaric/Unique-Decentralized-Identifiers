package main

import (
	// "udidGUI/FLAPI"

	"encoding/json"
	"fmt"
	"io/ioutil"
	"log"
	"os"

	"net/http"
	"net/url"
	"udidGUI/dperclient"

	"fyne.io/fyne/v2"
	"fyne.io/fyne/v2/canvas"
	"fyne.io/fyne/v2/container"
	"fyne.io/fyne/v2/widget"

	"time"
)

func (im *infoManager) make3aLayout_nofront() fyne.CanvasObject {
	exePath, _ := os.Executable()
	//为了省去场景1的反复调试，直接把全局变量在这里赋值了
	globalDID2 = "DID:IMSI:a072949737f71sp2908af40e418db24285cc402b8ae63f4b95e2e9ff18636b1d61c43c80b4cce93582cb7ec54b2f89a5f11301d4e347a982f08db9037c1acd08"

	imgs := make([]fyne.Resource, 0)
	imgpaths := []string{"/imgs/Authorization0.png", "/imgs/Authorization1.png", "/imgs/Authorization2.png", "/imgs/Authorization3.png", "/imgs/Authorization4.png"}

	for i := 0; i < len(imgpaths); i++ {
		imgpath := imgpaths[i]
		_, err := os.Stat(exePath + imgpath)

		if err != nil {
			imgpath = "." + imgpath
		} else {
			imgpath = exePath + imgpath
		}

		imageResource, err := fyne.LoadResourceFromPath(imgpath)

		if err != nil {
			log.Fatal(err)
		}
		imgs = append(imgs, imageResource)
	}

	// 创建 Image 组件并设置图片
	image := canvas.NewImageFromResource(imgs[0])
	image.FillMode = canvas.ImageFillContain // 或者使用其他填充模式
	image.SetMinSize(fyne.NewSize(800, 400))

	// 创建 Entry 组件
	entry := widget.NewMultiLineEntry()

	entry.SetText("Welcome to the Authorization demo of Unique Decentralzied Identifiers System\n") // 设置要显示的文本

	// 创建带滚动条的容器
	scrollContainer := container.NewVScroll(entry)
	scrollContainer.SetMinSize(fyne.NewSize(800, 400))

	stateLabel := widget.NewLabel("Working State: Spare")
	btn0 := widget.NewButton("Run Demo", func() {
		stateLabel.SetText("Working State: Working")
		go im.init_03_nofront(entry, scrollContainer, image, imgs)
	})
	btn1 := widget.NewButton("Next Step", func() {
		select {
		case im.nextStep <- struct{}{}:
			return
		default:
			return

		}
	})

	bottom := container.NewBorder(nil, nil, nil, container.NewHBox(stateLabel, btn0, btn1), nil)

	finalLayout := container.NewVBox(image, scrollContainer, bottom)

	return finalLayout
}

func (im *infoManager) init_03_nofront(output *widget.Entry, scroll *container.Scroll, image *canvas.Image, imgs []fyne.Resource) {

	// im.Hang()

	// image.Resource = imgs[1]
	// image.Refresh()

	// im.Hang()

	// SP := "10.129.227.181"
	// SP_port := "8001"
	var totalDuration time.Duration
	start := time.Now()
	elapsed := time.Since(start)
	// totalDuration += elapsed
	EntryAppend(output, fmt.Sprintf("开始: %s\n", elapsed), scroll)

	UE := "10.129.13.177" //他格式是这样的，没错
	UE_port := "8001"
	SP := "10.129.13.177"
	SP_port := "8002"

	//构造ue 和 sp的链接
	keyStorePath := "./keystore"
	lk0 := dperclient.NewLinker("http://"+UE+":"+UE_port, keyStorePath)
	lk1 := dperclient.NewLinker("http://"+SP+":"+SP_port, keyStorePath)
	//构造sp创建的VC
	//记得一定要先预先setsp和ue的did

	start = time.Now()
	elapsed = time.Since(start)
	totalDuration += elapsed
	EntryAppend(output, fmt.Sprintf("connection complete: %s\n", elapsed), scroll)

	formData := url.Values{
		// "destinationHost": {"10.129.227.181/8001/"},
		// "destinationPort": {"8002"},
		"SubjectDID":    {"DID:IMSI:sp2985cc402b8ae63f4b95e2e9ff18636b1d61c43c80b4cce93582cb7ec54b2f89a5f11301d4e347a982f0a072949737f718db90308af40e418db2427c1acd08"},
		"IssuerDID":     {" "},
		"Validity":      {"2023/04/08~2023/04/08"},       // Valid time
		"Purpose":       {"Personalized Recommendation"}, // 用途
		"Reassign":      {"01"},                          // 是否允许二次转让
		"IssuerAddress": {" "},                           // issuer address
		// "SubjectAddress": {"cdfe12ab3456"},                // subject address

		"Signature": {" "}, // UE Signature
	}
	//更新发去vc上sp的信息

	SPaddress := lk1.GetAddress("DID:IMSI:sp2985cc402b8ae63f4b95e2e9ff18636b1d61c43c80b4cce93582cb7ec54b2f89a5f11301d4e347a982f0a072949737f718db90308af40e418db2427c1acd08")
	formData.Set("SubjectAddress", SPaddress)
	// start = time.Now()
	elapsed = time.Since(start)
	totalDuration += elapsed
	EntryAppend(output, fmt.Sprintf("construct VC template complete: %s\n", elapsed), scroll)

	EntryAppend(output, "=============================Step 1: VC generation...\n", scroll)
	// EntryAppend(output, fmt.Sprintln("VC Template: \n"), scroll)
	// for key, values := range formData {
	// 	EntryAppend(output, fmt.Sprintf("%s: %s\n", key, values[0]), scroll)
	// }

	// start = time.Now()
	elapsed = time.Since(start)
	totalDuration += elapsed
	EntryAppend(output, fmt.Sprintf("front deck show: %s\n", elapsed), scroll)

	EntryAppend(output, fmt.Sprintln("===============================SP sends VC template to User... \n"), scroll)
	// 从url0向url1发送JSON
	requesturl := "http://" + SP + ":" + SP_port + "/dper/sendvcrequest/" + UE + "/" + UE_port + "/"
	response, err := http.PostForm(requesturl, formData)

	// start = time.Now()
	elapsed = time.Since(start)
	totalDuration += elapsed
	EntryAppend(output, fmt.Sprintf("发送vc模板时间: %s\n", elapsed), scroll)

	//从dper的全局变量提取sp发给ue的vc
	requesturl = "http://" + UE + ":" + UE_port + "/dper/getvcresponse"

	response, err = http.Get(requesturl)
	EntryAppend(output, "=============================User receives the VC template...\n", scroll)

	// if err != nil {
	// 	EntryAppend(output, fmt.Sprintf("Error sending : %s\n(", err), scroll)
	// } else {
	responseBody, _ := ioutil.ReadAll(response.Body)
	var parseResponse map[string]interface{}
	err = json.Unmarshal(responseBody, &parseResponse)
	parseResponse["IssuerDID"] = globalDID2

	//填写ue的信息
	UEaddress := lk0.GetAddress(globalDID2)

	parseResponse["IssuerAddress"] = UEaddress

	// parseResponse01 := parseResponse

	// start = time.Now()
	elapsed = time.Since(start)
	totalDuration += elapsed
	EntryAppend(output, fmt.Sprintf("vc ue filling time: %s\n", elapsed), scroll)

	// if err != nil {
	// 	// 如果无法解析JSON，打印原始响应
	// 	EntryAppend(output, fmt.Sprintf("Received raw response: %s\n", string(responseBody)), scroll)
	// 	// EntryAppend(output, fmt.Sprintf("Error formatting JSON: %s\n", err), scroll)
	// 	EntryAppend(output, fmt.Sprintf("Error parsing JSON: %s\n", err), scroll)
	// 	return
	// } else {
	// 	// 使用json.MarshalIndent来格式化JSON字符串
	// 	formattedResponse, err := json.MarshalIndent(parseResponse01, "", "    ") // 使用4个空格进行缩进

	// 	if err != nil {
	// 		// 如果无法格式化，打印原始响应
	// 		EntryAppend(output, fmt.Sprintf("Received raw response: %s\n", string(responseBody)), scroll)
	// 		// EntryAppend(output, fmt.Sprintf("Error formatting JSON: %s\n", err), scroll)

	// 	} else {
	// 		// 打印格式化后的响应
	// 		EntryAppend(output, fmt.Sprintf("Received VC template from SP:\n%s\n", string(formattedResponse)), scroll)
	// 	}
	// }

	// // start = time.Now()
	// elapsed = time.Since(start)
	// totalDuration += elapsed
	// EntryAppend(output, fmt.Sprintf("except sig, vc front deck show: %s\n", elapsed), scroll)

	// responseString := string(responseBody)
	// EntryAppend(output, fmt.Sprintf("Received response: %s\n ", responseString), scroll)

	// im.Hang()
	EntryAppend(output, "=============================User signature VC and return to SP...\n", scroll)

	// 使用 json.MarshalIndent 转换为 JSON 字符串
	// 参数: 数据源, 每行前缀, 缩进字符（通常用四个空格）
	formattedJSON, err := json.MarshalIndent(parseResponse, "", "    ")
	if err != nil {
		fmt.Printf("Error marshaling JSON: %s\n", err)
		return
	}

	message := formattedJSON

	_, signature := lk0.GetSignature(string(message))

	//修改vc中的signature为新的signature
	parseResponse["Signature"] = signature

	formattedResponse, err := json.MarshalIndent(parseResponse, "", "    ") // 使用4个空格进行缩进

	// start = time.Now()
	elapsed = time.Since(start)
	totalDuration += elapsed
	EntryAppend(output, fmt.Sprintf("sig complet vc: %s\n", elapsed), scroll)

	// if err != nil {
	// 	// 如果无法格式化，打印原始签名后的vc
	// 	EntryAppend(output, fmt.Sprintf("err: %s\n", err), scroll)
	// 	// EntryAppend(output, fmt.Sprintf("Error formatting JSON: %s\n", err), scroll)

	// } else {
	// 	// 打印格式化后的签名后的vc
	// 	EntryAppend(output, fmt.Sprintf("Sign the VC with private Key:\n%s\n", string(formattedResponse)), scroll)
	// }

	// start = time.Now()
	// elapsed = time.Since(start)
	// totalDuration += elapsed
	// EntryAppend(output, fmt.Sprintf("full version vc time : %s\n", elapsed), scroll)

	var data map[string]string
	err = json.Unmarshal([]byte(formattedResponse), &data)
	if err != nil {
		fmt.Println("解析 JSON 数据失败:", err)
		return
	}

	formData = url.Values{}
	for key, value := range data {
		formData.Set(key, value)
	}

	requesturl = "http://" + SP + ":" + SP_port + "/dper/vcreceive"

	_, err = http.PostForm(requesturl, formData)

	// start = time.Now()
	elapsed = time.Since(start)
	totalDuration += elapsed
	EntryAppend(output, fmt.Sprintf("send SP sucess: %s\n", elapsed), scroll)

	//SP收到签名的vc
	EntryAppend(output, "=============================Step 2: SP receive full version VC from UE...\n", scroll)
	requesturl = "http://" + SP + ":" + SP_port + "/dper/getvcresponse"

	response, err = http.Get(requesturl)

	responseBody, _ = ioutil.ReadAll(response.Body)

	// var parseResponse map[string]interface{}
	err = json.Unmarshal(responseBody, &parseResponse)

	// if err != nil {
	// 	// 如果无法解析JSON，打印原始响应
	// 	EntryAppend(output, fmt.Sprintf("Received raw response: %s\n", string(responseBody)), scroll)
	// 	// EntryAppend(output, fmt.Sprintf("Error formatting JSON: %s\n", err), scroll)
	// 	EntryAppend(output, fmt.Sprintf("Error parsing JSON: %s\n", err), scroll)
	// 	return
	// } else {
	// 	// 使用json.MarshalIndent来格式化JSON字符串
	// 	formattedResponse, err := json.MarshalIndent(parseResponse, "", "    ") // 使用4个空格进行缩进

	// 	if err != nil {
	// 		// 如果无法格式化，打印原始响应
	// 		EntryAppend(output, fmt.Sprintf("Received raw response: %s\n", string(responseBody)), scroll)
	// 		// EntryAppend(output, fmt.Sprintf("Error formatting JSON: %s\n", err), scroll)

	// 	} else {
	// 		// 打印格式化后的响应
	// 		EntryAppend(output, fmt.Sprintf("Received full version VC from UE:\n%s\n", string(formattedResponse)), scroll)
	// 	}
	// }

	// start = time.Now()
	elapsed = time.Since(start)
	totalDuration += elapsed
	EntryAppend(output, fmt.Sprintf("SP extract the VC : %s\n", elapsed), scroll)

	// im.Hang()

	EntryAppend(output, "=============================Step 2: SP invokes smart contract...\n", scroll)
	// var data map[string]string
	err = json.Unmarshal([]byte(formattedResponse), &data)
	if err != nil {
		fmt.Println("解析 JSON 数据失败:", err)
		return
	}

	formData = url.Values{}
	for key, value := range data {
		formData.Set(key, value)
	}

	requesturl = "http://" + SP + ":" + SP_port + "/dper/sendvc/" + SP + "/" + SP_port + "/"
	response, err = http.PostForm(requesturl, formData)

	// start = time.Now()
	elapsed = time.Since(start)
	totalDuration += elapsed
	EntryAppend(output, fmt.Sprintf("send consensus time: %s\n", elapsed), scroll)

	// EntryAppend(output, "=============================Step 4: Consensus for VC...\n", scroll)
	// responseBody, _ = ioutil.ReadAll(response.Body)

	// // start = time.Now()
	// elapsed = time.Since(start)
	// totalDuration += elapsed
	// EntryAppend(output, fmt.Sprintf("consensus suceed time: %s\n", elapsed), scroll)

	// // var parseResponse map[string]interface{}
	// err = json.Unmarshal(responseBody, &parseResponse)
	// formattedResponse, err = json.MarshalIndent(parseResponse, "", "    ") // 使用4个空格进行缩进
	// EntryAppend(output, fmt.Sprintf("Consensus response: \n%s\n", string(formattedResponse)), scroll)

	// // start = time.Now()
	// elapsed = time.Since(start)
	// totalDuration += elapsed
	// EntryAppend(output, fmt.Sprintf("consensus suceed and shown in front: %s\n", elapsed), scroll)
	// EntryAppend(output, "============================Consensus succeed...\n", scroll)

}
