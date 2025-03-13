using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Security.Policy;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using Microsoft.MixedReality.Toolkit.Input;

public class APIManager : MonoBehaviour
{
    // DictationHandler dictationHandler = GameObject.Find("DictationHandler").GetComponent<DictationHandler>();
    public TextChecker textChecker;
    public static string APIURL;
    [Serializable]
    private sealed class Data
    {
        public string category = "cardboard";
        public string search = "dummy_text";
    }
    [Serializable]
    private sealed class Response
    {
        public double time;
    }
    // Start is called before the first frame update
    void Start()
    {
        textChecker = GameObject.Find("").GetComponent<TextChecker>();
        textChecker.Initialize();
        APIURL = "biovl.lsta.media.kyoto-u.ac.jp:8080";
        //Fetch();
    }
    void Update()
    {
        textChecker.isTextNull = false;
        textChecker.Check();
        if (textChecker.CurrentText == "")
        {
            textChecker.isTextNull = true;
        }
        // 前のフレームからテキストが変化したかどうか。発話が終了している、かつすべて文字起こしされているか
        if (textChecker.previousText != textChecker.CurrentText && !textChecker.isTextNull) 
        {
            try
            {
                StartCoroutine(PostRequestCoroutine(textChecker.CurrentText));
            }
            finally
            {
                // 次の処理のために変更されたテキストを覚えておく
                textChecker.previousText = textChecker.CurrentText;
                textChecker.isTextNull = false;
            }
        }
        //  UnityEngine.Debug.Log(videoPlayer.frame);
    }
    public void FetchGetRequest()
    {
        StartCoroutine("GetRequestCoroutine");
    }
    public void FetchPostRequest(string text)
    {
        StartCoroutine(PostRequestCoroutine(text));
    } 
    public IEnumerator GetRequestCoroutine()
    {
        var request = UnityWebRequest.Get(APIURL);
        yield return request.SendWebRequest();

        if (request.result == UnityWebRequest.Result.ProtocolError || request.result == UnityWebRequest.Result.ConnectionError)
        {
            UnityEngine.Debug.Log("failure.");
            UnityEngine.Debug.Log(request.error);
        }
        else
        {
            //　リクエストが正常に処理された場合に行う処理
            UnityEngine.Debug.Log(request.downloadHandler.text);
        }
    }

    private IEnumerator PostRequestCoroutine(string text)
    {
        string serchText = text; 
        var data = new Data();
        data.search = serchText;
        data.category = "ion";
        string json = JsonUtility.ToJson(data);
        var postData = System.Text.Encoding.UTF8.GetBytes( json );
        var request = new UnityWebRequest(APIURL + "/text", "POST");
        request.uploadHandler = new UploadHandlerRaw(postData);
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");
        yield return request.SendWebRequest();

        if (request.result == UnityWebRequest.Result.ProtocolError || request.result == UnityWebRequest.Result.ConnectionError)
        {
            UnityEngine.Debug.Log("failure");
            UnityEngine.Debug.Log(request.error);
        }
        else
        {
            UnityEngine.Debug.Log(request.downloadHandler.text);
            var response = new Response();
            response = JsonUtility.FromJson<Response>(request.downloadHandler.text);
            UnityEngine.Debug.Log("response.time = " + response.time);
            textChecker.TimeTest(response.time);
        }
    }
}
