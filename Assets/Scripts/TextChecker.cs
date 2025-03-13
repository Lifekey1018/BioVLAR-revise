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
    // APIManager�I�u�W�F�N�g���擾
    APIManager apiManager;

    public void Initialize()
    { // DictationText�I�u�W�F�N�g����e�L�X�g���擾
        dictationText = GameObject.Find("DictationText").GetComponent<TextMeshPro>();
        CurrentText = dictationText.text;
        UnityEngine.Debug.Log("�m�F�pdeath:" + CurrentText);

        // Video�I�u�W�F�N�g���擾���AVideoPlayer�R���|�[�l���g���擾
        video = GameObject.Find("Video");
        videoPlayer = video.GetComponent<VideoPlayer>();

        // VideoPlayer�̏����������̃C�x���g��o�^
        videoPlayer.prepareCompleted += OnVideoPlayerPrepared;

        // VideoPlayer�̏������J�n
        videoPlayer.Prepare();

        apiManager = GameObject.Find("APIManager").GetComponent<APIManager>();

        // �����e�L�X�g�̐ݒ�
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
        // �O�̃t���[������e�L�X�g���ω��������ǂ���
        if (previousText != CurrentText && !isTextNull) 
        //if (CurrentText == "Dictation recognizer has failed!")
        { 
            try
            {
                OnTextChanged(); // �e�L�X�g���ς�������̏����̌Ăяo��
            }
            finally
            {
                // ���̏����̂��߂ɕύX���ꂽ�e�L�X�g���o���Ă���
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
