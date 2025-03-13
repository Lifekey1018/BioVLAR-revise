using UnityEngine;
using UnityEngine.Networking;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;
using System.Diagnostics;
using System.Collections;
using System;

public class VideoStreamer: MonoBehaviour
{
    public string serverUrl = "http://biovl.lsta.media.kyoto-u.ac.jp:8080/upload";

    public event Action<string> OnResponseReceived;

    /// <summary>
    /// ÉtÉåÅ[ÉÄÇHTTP POSTÇ≈ëóêM
    /// </summary>
    public void SendFrame(byte[] frameData)
    {
        string base64Frame = System.Convert.ToBase64String(frameData);
        string jsonData = $"{{\"base64Image\": \"{base64Frame}\"}}";

        StartCoroutine(PostRequest(jsonData));
    }

    private IEnumerator PostRequest(string jsonData)
    {
        var request = new UnityWebRequest(serverUrl, "POST");
        byte[] jsonToSend = System.Text.Encoding.UTF8.GetBytes(jsonData);

        request.uploadHandler = new UploadHandlerRaw(jsonToSend);
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");

        yield return request.SendWebRequest();

        if (request.result == UnityWebRequest.Result.Success)
        {
            OnResponseReceived?.Invoke(request.downloadHandler.text);
            UnityEngine.Debug.Log("Success to send frame: "+ request.downloadHandler.text);
        }
        else
        {
            UnityEngine.Debug.LogError("Failed to send frame: " + request.error);
        }
    }
}
