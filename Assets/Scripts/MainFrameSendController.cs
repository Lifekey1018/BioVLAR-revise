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
    public bool isStreaming = false;       // �X�g���[�~���O��Ԃ̊Ǘ�
    private float sendInterval = 1.5f;  // �t���[���̑��M�Ԋu

    void Start()
    {
        // �J�����L���v�`���ƃr�f�I�X�g���[�}�[��������
        cameraCapture = GameObject.Find("FrameSender").GetComponent<CameraCapture>();
        videoStreamer = GameObject.Find("FrameSender").GetComponent<VideoStreamer>();
        qrCodeManager = GameObject.Find("QRCodeManager").GetComponent<QRCodeManager>();

        videoStreamer.OnResponseReceived += qrCodeManager.HandleResponse;

        // �J�����̏��������J�n
        cameraCapture.StartCamera(null);
    }

    /// <summary>
    /// �t���[���̎������M���J�n
    /// </summary>
    public void StartStreaming()
    {
        isStreaming = true;

        // StartCoroutine(SendFrames());

        UnityEngine.Debug.Log("Streaming started.");

        // �t���[�����M��񓯊��Ŏ��s
        StartCoroutine(SendFrames());
    }

    /// <summary>
    /// �t���[���̎������M���~
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
        // �J�������\�[�X�̃N���[���A�b�v
        cameraCapture.StopCamera();
    }
}