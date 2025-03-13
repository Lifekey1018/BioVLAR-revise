using UnityEngine;
using TMPro;
using Newtonsoft.Json.Linq;
using System.Collections.Generic;
using System.Diagnostics;

public class QRCodeManager : MonoBehaviour
{
    public GameObject qrPrefab; // QR コードを表示するプレハブ
    private Dictionary<string, GameObject> qrObjects = new Dictionary<string, GameObject>();

    public void HandleResponse(string jsonResponse)
    {
        JObject response = JObject.Parse(jsonResponse);
        JArray qrCodes = (JArray)response["qr_codes"];

        HashSet<string> activeQrCodes = new HashSet<string>();

        if (qrCodes != null)
        {
            foreach (var qrCode in qrCodes)
            {
                string data = qrCode["data"].ToString();
                float x = float.Parse(qrCode["x"].ToString());
                float y = float.Parse(qrCode["y"].ToString());

                // オブジェクトを生成または更新
                if (!qrObjects.ContainsKey(data))
                {
                    GameObject qrObject = Instantiate(qrPrefab);
                    qrObject.name = data;
                    Vector3 worldPos = ConvertScreenToWorldWithRaycast(new Vector2(x, y), 1.0f);
                    qrObject.transform.position = worldPos;

                    qrObject.transform.LookAt(Camera.main.transform);
                    qrObject.transform.Rotate(0, 180, 0);

                    UpdateText(qrObject, data);
                    qrObjects.Add(data, qrObject);
                }
                else
                {
                    // 既存オブジェクトの位置を更新
                    GameObject qrObject = qrObjects[data];
                    qrObject.transform.position = ConvertScreenToWorldWithRaycast(new Vector2(x, y), 1.0f);
                    qrObject.transform.LookAt(Camera.main.transform);
                    qrObject.transform.Rotate(0, 180, 0);

                }
            }
            
            List<string> toRemove = new List<string>();

            /*
            foreach (var key in qrObjects.Keys)
            {
                if (!activeQrCodes.Contains(key))
                {
                    qrObjects[key].SetActive(false); // 非表示にする
                }
            }
            */
        }
    }

    /// <summary>
    /// カメラの向きを考慮して、QR コードの 2D 座標を 3D ワールド座標に変換
    /// </summary>
    private Vector3 ConvertScreenToWorldWithRaycast(Vector2 screenPos, float depth)
    {
        Camera cam = Camera.main;
        Ray ray = cam.ScreenPointToRay(new Vector3(screenPos.x, screenPos.y, 0));

        RaycastHit hit;
        if (Physics.Raycast(ray, out hit, 10.0f)) // 10メートル以内のヒットを探す
        {
            return hit.point;
        }

        // 何もヒットしなかった場合、カメラの向きに応じて前方の適当な位置に配置
        return cam.transform.position + cam.transform.forward * depth;
    }

    private void UpdateText(GameObject qrObject, string qrData)
    {
        TextMeshPro textComponent = qrObject.GetComponentInChildren<TextMeshPro>();
        if (textComponent != null )
        {
            textComponent.text = qrData;
        }
        else
        {
            UnityEngine.Debug.Log("TextMeshPro component not found in QRObject prefab!");
        }
    }
}
