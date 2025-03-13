using System.Diagnostics;
using System.Collections;
using UnityEngine;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Runtime.Remoting.Metadata.W3cXsd2001;


public class MainFrameSendController : MonoBehaviour
{
    private CameraCapture cameraCapture;
    private VideoStreamer videoStreamer;
    private QRCodeManager qrCodeManager;
    public bool isStreaming = false;       // ストリーミング状態の管理
    private float sendInterval = 1.5f;  // フレームの送信間隔

    void Start()
    {
        // カメラキャプチャとビデオストリーマーを初期化
        cameraCapture = GameObject.Find("FrameSender").GetComponent<CameraCapture>();
        videoStreamer = GameObject.Find("FrameSender").GetComponent<VideoStreamer>();
        qrCodeManager = GameObject.Find("QRCodeManager").GetComponent<QRCodeManager>();

        videoStreamer.OnResponseReceived += qrCodeManager.HandleResponse;

        // カメラの初期化を開始
        cameraCapture.StartCamera(null);
    }

    /// <summary>
    /// フレームの自動送信を開始
    /// </summary>
    public void StartStreaming()
    {
        isStreaming = true;

        // StartCoroutine(SendFrames());

        UnityEngine.Debug.Log("Streaming started.");

        // フレーム送信を非同期で実行
        StartCoroutine(SendFrames());
    }

    /// <summary>
    /// フレームの自動送信を停止
    /// </summary>
    public void StopStreaming()
    {
        isStreaming = false;
        // StopCoroutine(SendFrames());
        UnityEngine.Debug.Log("Streaming stopped.");
    }

    private IEnumerator SendFrames()
    {
        while (isStreaming)
        {
            byte[] frameData = cameraCapture.GetLatestFrame();
            if (frameData != null)
            {
                UnityEngine.Debug.Log("Sending frameData");
                try
                {
                    videoStreamer.SendFrame(frameData);
                }
                catch (System.Exception e)
                {
                    UnityEngine.Debug.LogError($"Failed to send frames: {e.Message}");
                }
                yield return new WaitForSeconds(sendInterval);
            }
            else
            {
                yield return new WaitForSeconds(sendInterval);
            }
        }
    }

    void OnDestroy()
    {
        // カメラリソースのクリーンアップ
        cameraCapture.StopCamera();
    }
}