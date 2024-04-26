package main

import (
	// "udidGUI/FLAPI"

	"encoding/json"
	"fmt"
	"io/ioutil"
	"log"
	"os"
	"time"

	"net/http"
	"net/url"
	"udidGUI/dperclient"

	"fyne.io/fyne/v2"
	"fyne.io/fyne/v2/canvas"
	"fyne.io/fyne/v2/container"
	"fyne.io/fyne/v2/widget"
)

func (im *infoManager) make3aLayout() fyne.CanvasObject {
	exePath, _ := os.Executable()

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
		go im.init_03(entry, scrollContainer, image, imgs)
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

func (im *infoManager) init_03(output *widget.Entry, scroll *container.Scroll, image *canvas.Image, imgs []fyne.Resource) {

	// // 创建要发送的JSON数据
	// jsonData := map[string]interface{}{
	// 	"message": "Hello from url0",
	// }

	// // 将jsonData转换为JSON字符串
	// jsonBytes, err := json.Marshal(jsonData)
	// if err != nil {
	// 	fmt.Println("Error marshaling jsonData:", err)
	// 	return
	// }

	// jsonString := string(jsonBytes)

	// EntryAppend(output, fmt.Sprintf("JSON data: \n%s\n", jsonString), scroll)

	im.Hang()

	image.Resource = imgs[1]
	image.Refresh()

	im.Hang()

	// SP := "10.129.227.181"
	// SP_port := "8001"
	UE := "192.168.1.2" //他格式是这样的，没错
	UE_port := "8004"
	SP := "192.168.1.5"
	SP_port := "8005"

	keyStorePath := "./keystore"
	lk0 := dperclient.NewLinker("http://"+UE+":"+UE_port, keyStorePath)
	// requesturl := "http://" + SP + ":" + SP_port + "/dper/sendvcrequest/" + UE + "/" + UE_port + "/"

	// formData := url.Values{
	// 	// "destinationHost": {"10.129.227.181/8001/"},
	// 	// "destinationPort": {"8002"},
	// 	"SubjectDID":     {"DID:IMSI:123456"},
	// 	"IssuerDID":      {"DID:IMSI:654321"},
	// 	"Validity":       {"2023/04/08~2023/04/08"},       // Valid time
	// 	"Purpose":        {"Personalized Recommendation"}, // 用途
	// 	"Reassign":       {"01"},                          // 是否允许二次转让
	// 	"IssuerAddress":  {"fdace123456"},                 // issuer address
	// 	"SubjectAddress": {"cdfe12ab3456"},                // subject address

	// 	"Signature": {" "}, // UE Signature
	// }
	// output.SetText("=============================Step 1: VC generation...\n")
	// EntryAppend(output, fmt.Sprintln("VC Template: \n"), scroll)
	// for key, values := range formData {
	// 	EntryAppend(output, fmt.Sprintf("%s: %s\n", key, values[0]), scroll)
	// }

	// im.Hang()
	// EntryAppend(output, fmt.Sprintln("===============================SP sends VC template to User... \n"), scroll)
	// // 从url0向url1发送JSON
	// response, err := http.PostForm(requesturl, formData)

	// if err != nil {
	// 	EntryAppend(output, fmt.Sprintf("Error sending : %s\n", err), scroll)
	// } else {
	// 	responseBody, _ := ioutil.ReadAll(response.Body)
	// 	var parseResponse interface{}
	// 	err := json.Unmarshal(responseBody, &parseResponse)
	// 	// if err == nil {
	// 	// 	formattedResponse, _ := json.MarshalIndent(parseResponse, "", " ")
	// 	// 	EntryAppend(output, fmt.Sprintf("Received VC template: %s\n", string(formattedResponse)), scroll)
	// 	// }
	// 	if err != nil {
	// 		// 如果无法解析JSON，打印原始响应
	// 		EntryAppend(output, fmt.Sprintf("Received raw response: %s\n", string(responseBody)), scroll)
	// 		// EntryAppend(output, fmt.Sprintf("Error formatting JSON: %s\n", err), scroll)
	// 		EntryAppend(output, fmt.Sprintf("Error parsing JSON: %s\n", err), scroll)
	// 		return
	// 	} else {
	// 		// 使用json.MarshalIndent来格式化JSON字符串
	// 		formattedResponse, err := json.MarshalIndent(parseResponse, "", "    ") // 使用4个空格进行缩进
	// 		if err != nil {
	// 			// 如果无法格式化，打印原始响应
	// 			EntryAppend(output, fmt.Sprintf("Received raw response: %s\n", string(responseBody)), scroll)
	// 			// EntryAppend(output, fmt.Sprintf("Error formatting JSON: %s\n", err), scroll)

	// 		} else {
	// 			// 打印格式化后的响应
	// 			EntryAppend(output, fmt.Sprintf("Received formatted response:\n%s\n", string(formattedResponse)), scroll)
	// 		}
	// 	}

	// 	// responseString := string(responseBody)
	// 	// EntryAppend(output, fmt.Sprintf("Received response: %s\n ", responseString), scroll)
	// }

	// im.Hang()

	// EntryAppend(output, "=============================User receives succeed...\n", scroll)
	// responseBody, err := ioutil.ReadAll(response.Body)

	requesturl := "http://" + UE + ":" + UE_port + "/dper/getvcresponse"

	response, err := http.Get(requesturl)
	EntryAppend(output, "=============================User receives the VC template...\n", scroll)

	// if err != nil {
	// 	EntryAppend(output, fmt.Sprintf("Error sending : %s\n(", err), scroll)
	// } else {
	responseBody, _ := ioutil.ReadAll(response.Body)
	var parseResponse map[string]interface{}
	err = json.Unmarshal(responseBody, &parseResponse)
	parseResponse["IssuerDID"] = globalDID2

	UEaddress := lk0.GetAddress(globalDID2)

	parseResponse["IssuerAddress"] = UEaddress

	parseResponse01 := parseResponse

	if err != nil {
		// 如果无法解析JSON，打印原始响应
		EntryAppend(output, fmt.Sprintf("Received raw response: %s\n", string(responseBody)), scroll)
		// EntryAppend(output, fmt.Sprintf("Error formatting JSON: %s\n", err), scroll)
		EntryAppend(output, fmt.Sprintf("Error parsing JSON: %s\n", err), scroll)
		return
	} else {
		// 使用json.MarshalIndent来格式化JSON字符串
		formattedResponse, err := json.MarshalIndent(parseResponse01, "", "    ") // 使用4个空格进行缩进

		if err != nil {
			// 如果无法格式化，打印原始响应
			EntryAppend(output, fmt.Sprintf("Received raw response: %s\n", string(responseBody)), scroll)
			// EntryAppend(output, fmt.Sprintf("Error formatting JSON: %s\n", err), scroll)

		} else {
			// 打印格式化后的响应
			EntryAppend(output, fmt.Sprintf("Received VC template from SP:\n%s\n", string(formattedResponse)), scroll)
		}
	}

	// responseString := string(responseBody)
	// EntryAppend(output, fmt.Sprintf("Received response: %s\n ", responseString), scroll)

	im.Hang()
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

	if err != nil {
		// 如果无法格式化，打印原始签名后的vc
		EntryAppend(output, fmt.Sprintf("err: %s\n", err), scroll)
		// EntryAppend(output, fmt.Sprintf("Error formatting JSON: %s\n", err), scroll)

	} else {
		// 打印格式化后的签名后的vc
		EntryAppend(output, fmt.Sprintf("Sign the VC with private Key:\n%s\n", string(formattedResponse)), scroll)
	}

	var data map[string]string
	err = json.Unmarshal([]byte(formattedResponse), &data)
	if err != nil {
		fmt.Println("解析 JSON 数据失败:", err)
		return
	}

	formData := url.Values{}
	for key, value := range data {
		formData.Set(key, value)
	}

	requesturl = "http://" + SP + ":" + SP_port + "/dper/vcreceive"

	_, err = http.PostForm(requesturl, formData)

	// }

	// im.Hang()
	// EntryAppend(output, "=============================User signature VC and return to SP...\n", scroll)

	// //将vc转化为string字符用来加密
	// // message := string(formattedResponse)
	// message := parseResponse

	// keyStorePath := "./keystore"
	// lk0 := dperclient.NewLinker("http://"+UE+":"+UE_port, keyStorePath)
	// _, signature := lk0.GetSignature(message)

	// //修改vc中的signature为新的signature
	// parseResponse.Signature - signature

	// formattedResponse, err := json.MarshalIndent(parseResponse, "", "    ") // 使用4个空格进行缩进

	// if err != nil {
	// 	// 如果无法格式化，打印原始响应
	// 	EntryAppend(output, fmt.Sprintf("Received raw response: %s\n", string(paraResponse)), scroll)
	// 	// EntryAppend(output, fmt.Sprintf("Error formatting JSON: %s\n", err), scroll)

	// } else {
	// 	// 打印格式化后的响应
	// 	EntryAppend(output, fmt.Sprintf("Received VC template from SP:\n%s\n", string(formattedResponse)), scroll)
	// }

	// responseString := string(responseBody)
	// EntryAppend(output, fmt.Sprintf("Received response: %s\n ", responseString), scroll)

	//未完待续

	// // 将响应体转换为字符串
	// responseString := string(response)

	// // 打印响应体
	// EntryAppend(output, fmt.Sprintln("Response:%s\n", responseString), scroll)

	im.Hang()
	output.SetText("=============================Step 2: SP invokes smart contract...\n")

	image.Resource = imgs[2]
	image.Refresh()

	im.Hang()

	output.SetText("=============================Step 3: Consensus for VC...\n")

	image.Resource = imgs[3]
	image.Refresh()
	im.Hang()
	EntryAppend(output, "============================Consensus succeed...\n", scroll)

	im.Hang()

	image.Resource = imgs[4]
	image.Refresh()
	output.SetText("=============================Step 4: SP obtain the User data...\n")

	time.Sleep(1 * time.Second)

	EntryAppend(output, "Authorization done!", scroll)
	// image.Resource = imgs[1]
	// image.Refresh()

}
