using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using UnityEngine;

public class FollowUserView : MonoBehaviour
{
    private Vector3 offset = new Vector3(0,-0.002f, 0.025f);
    
    void LateUpdate()
    {
        // カメラの位置を基準にオブジェクトを配置
        Transform cameraTransform = Camera.main.transform;
        // カメラの前方方向にオフセットを加えて追従
        transform.position = cameraTransform.position + cameraTransform.forward * offset.z
                                                       + cameraTransform.up * offset.y
                                                       + cameraTransform.right * offset.x;

        // カメラの回転に合わせてオブジェクトの向きを調整
        transform.rotation = Quaternion.LookRotation(transform.position - cameraTransform.position);
    }
}
