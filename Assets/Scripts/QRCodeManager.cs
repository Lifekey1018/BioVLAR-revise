using UnityEngine;
using TMPro;
using Newtonsoft.Json.Linq;
using System.Collections.Generic;
using System.Diagnostics;

public class QRCodeManager : MonoBehaviour
{
    public GameObject qrPrefab; // QR �R�[�h��\������v���n�u
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

                // �I�u�W�F�N�g�𐶐��܂��͍X�V
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
                    // �����I�u�W�F�N�g�̈ʒu���X�V
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
                    qrObjects[key].SetActive(false); // ��\���ɂ���
                }
            }
            */
        }
    }

    /// <summary>
    /// �J�����̌������l�����āAQR �R�[�h�� 2D ���W�� 3D ���[���h���W�ɕϊ�
    /// </summary>
    private Vector3 ConvertScreenToWorldWithRaycast(Vector2 screenPos, float depth)
    {
        Camera cam = Camera.main;
        Ray ray = cam.ScreenPointToRay(new Vector3(screenPos.x, screenPos.y, 0));

        RaycastHit hit;
        if (Physics.Raycast(ray, out hit, 10.0f)) // 10���[�g���ȓ��̃q�b�g��T��
        {
            return hit.point;
        }

        // �����q�b�g���Ȃ������ꍇ�A�J�����̌����ɉ����đO���̓K���Ȉʒu�ɔz�u
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
