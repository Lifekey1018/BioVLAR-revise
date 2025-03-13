using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Security.Permissions;
using UnityEngine;
using UnityEngine.Video;
using TMPro;

public class TextChecker : MonoBehaviour
{
    public string previousText;
    public string CurrentText;
    public bool isTextNull;
    public TextMeshPro dictationText;
    GameObject video;
    VideoPlayer videoPlayer;
    // APIManagerオブジェクトを取得
    APIManager apiManager;

    public void Initialize()
    { // DictationTextオブジェクトからテキストを取得
        dictationText = GameObject.Find("DictationText").GetComponent<TextMeshPro>();
        CurrentText = dictationText.text;
        UnityEngine.Debug.Log("確認用death:" + CurrentText);

        // Videoオブジェクトを取得し、VideoPlayerコンポーネントを取得
        video = GameObject.Find("Video");
        videoPlayer = video.GetComponent<VideoPlayer>();

        // VideoPlayerの準備完了時のイベントを登録
        videoPlayer.prepareCompleted += OnVideoPlayerPrepared;

        // VideoPlayerの準備を開始
        videoPlayer.Prepare();

        apiManager = GameObject.Find("APIManager").GetComponent<APIManager>();

        // 初期テキストの設定
        previousText = CurrentText;
        isTextNull = true;
    }

    public void Check()
    {
        CurrentText = dictationText.text ;
        if (CurrentText == "")
        {
            isTextNull = true;
        }
        // 前のフレームからテキストが変化したかどうか
        if (previousText != CurrentText && !isTextNull) 
        //if (CurrentText == "Dictation recognizer has failed!")
        { 
            try
            {
                OnTextChanged(); // テキストが変わった時の処理の呼び出し
            }
            finally
            {
                // 次の処理のために変更されたテキストを覚えておく
                previousText = CurrentText;
                isTextNull=false;
            }
        }
    }

    void OnTextChanged()
    {
        apiManager.FetchPostRequest("dummy_text");
        UnityEngine.Debug.Log("TextChanged. current text:" + CurrentText);
        if (video != null)
        {
            UnityEngine.Debug.Log(videoPlayer);
        }

        TimeTest(50.5);
        // UnityEngine.Debug.Log("Current Time After: " + videoPlayer.time);
    }

    void OnVideoPlayerPrepared(VideoPlayer vp)
    {
        UnityEngine.Debug.Log("VideoPlayer is prepared.");
    }

    public void TimeTest(double time)
    {
        StartCoroutine(SetVideoTime(time));
    }

    private IEnumerator SetVideoTime(double time)
    {
        double new_time = time;
        // Pause the video
        videoPlayer.Pause();

        // Wait until the video player is prepared
        yield return new WaitUntil(() => videoPlayer.isPrepared);

        UnityEngine.Debug.Log("Setting video time to: " + time);
        // Set the video time
        videoPlayer.time = new_time;

        // Wait for a frame to ensure the time is set
        yield return new WaitForSeconds(0.8f);

        // Play the video
        videoPlayer.Play();

        // Log the current time after setting
        UnityEngine.Debug.Log("Current Time After setting: " + videoPlayer.time);
    }
}
