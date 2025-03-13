using UnityEngine;
using System;
using System.Linq;
using System.Threading.Tasks;
using System.Diagnostics;
using System.IO;                  // Stream 関連の基本クラス

#if WINDOWS_UWP
using Windows.Media.Capture;
using Windows.Media.Capture.Frames;
using Windows.Media.MediaProperties;
using Windows.Graphics.Imaging;
#endif

public class CameraCapture: MonoBehaviour
{
    private Action<byte[]> onFrameReadyCallback;
    private byte[] latestFrameData = null;
    public Texture2D mockQRCode;
    private byte[] mockImageData = null;
    public byte[] GetLatestFrame()
    {
        return latestFrameData;
    }
#if WINDOWS_UWP
    private MediaCapture mediaCapture;
    private MediaFrameReader frameReader;
#endif

    public void StartCamera(Action<byte[]> onFrameReadyCallback)
    {
        this.onFrameReadyCallback = onFrameReadyCallback;

#if WINDOWS_UWP
        // 実機（HoloLens）用の初期化
        StartUWPCamera();
#else
        // Unity Editor用のモック初期化
        UnityEngine.Debug.LogWarning("CameraCapture: Running in Unity Editor with Mock Camera.");
        StartMockCamera();
#endif
    }

#if WINDOWS_UWP
    private async void StartUWPCamera()
    {
        await InitializeCameraUWP();
    }
    private async Task InitializeCameraUWP()
    {
        mediaCapture = new MediaCapture();
        var settings = new MediaCaptureInitializationSettings
        {
            SharingMode = MediaCaptureSharingMode.SharedReadOnly,
            StreamingCaptureMode = StreamingCaptureMode.Video,
            MemoryPreference = MediaCaptureMemoryPreference.Cpu
        };

        await mediaCapture.InitializeAsync(settings);

        var frameSource = mediaCapture.FrameSources
        .Where(kvp => kvp.Value.Info.MediaStreamType == MediaStreamType.VideoRecord)
        .Select(kvp => kvp.Value)
        .FirstOrDefault();

        frameReader = await mediaCapture.CreateFrameReaderAsync(frameSource, MediaEncodingSubtypes.Bgra8);
        frameReader.FrameArrived += OnFrameArrived;

        await frameReader.StartAsync();
    }

    private void OnFrameArrived(MediaFrameReader sender, MediaFrameArrivedEventArgs args)
    {
        using (var frame = sender.TryAcquireLatestFrame())
        {
            if (frame == null) return;

            using (var videoFrame = frame.VideoMediaFrame.GetVideoFrame())
            {
                var bitmap = videoFrame.SoftwareBitmap;
                if (bitmap != null)
                {
                    byte[] imageBytes = ConvertSoftwareBitmapToByteArray(bitmap);
                    latestFrameData = imageBytes;
                    onFrameReadyCallback?.Invoke(imageBytes);
                }
            }
        }
    }

    private byte[] ConvertSoftwareBitmapToByteArray(SoftwareBitmap bitmap)
    {
        byte[] byteArray = null;
        using (var stream = new Windows.Storage.Streams.InMemoryRandomAccessStream())
        {
            BitmapEncoder encoder = BitmapEncoder.CreateAsync(BitmapEncoder.JpegEncoderId, stream).AsTask().Result;
            encoder.SetSoftwareBitmap(bitmap);
            encoder.FlushAsync().AsTask().Wait();

            byteArray = new byte[stream.Size];
            stream.AsStream().Read(byteArray, 0, byteArray.Length);
        }
        return byteArray;
    }
#endif

    public void StopCamera()
    {
#if WINDOWS_UWP
        StopCameraUWPAsync();
#else
        UnityEngine.Debug.Log("CameraCapture: Camera stopped (Mock).");
#endif
    }

#if WINDOWS_UWP
    private async void StopCameraUWPAsync()
    {
        if (frameReader != null)
        {
            await frameReader.StopAsync();
            frameReader.Dispose();
            frameReader = null;
        }

        if (mediaCapture != null)
        {
            mediaCapture.Dispose();
            mediaCapture = null;
        }

        UnityEngine.Debug.Log("CameraCapture: Camera stopped (UWP).");
    }
#endif

    private void StartMockCamera()
    {
        mockImageData = mockQRCode.EncodeToPNG();
        latestFrameData = mockImageData;
        UnityEngine.Debug.Log("latestFrameData: " +  latestFrameData.Length);
        onFrameReadyCallback?.Invoke(mockImageData);
    }

    private byte[] CreateMockImage()
    {
        Texture2D texture = new Texture2D(128, 128);
        Color color = Color.red;
        for (int y = 0; y < texture.height; y++)
        {
            for (int x = 0; x < texture.width; x++)
            {
                texture.SetPixel(x, y, color);
            }
        }
        texture.Apply();
        return texture.EncodeToJPG();
    }
}
