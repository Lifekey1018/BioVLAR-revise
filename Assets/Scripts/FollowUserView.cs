using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using UnityEngine;

public class FollowUserView : MonoBehaviour
{
    private Vector3 offset = new Vector3(0,-0.002f, 0.025f);
    
    void LateUpdate()
    {
        // �J�����̈ʒu����ɃI�u�W�F�N�g��z�u
        Transform cameraTransform = Camera.main.transform;
        // �J�����̑O�������ɃI�t�Z�b�g�������ĒǏ]
        transform.position = cameraTransform.position + cameraTransform.forward * offset.z
                                                       + cameraTransform.up * offset.y
                                                       + cameraTransform.right * offset.x;

        // �J�����̉�]�ɍ��킹�ăI�u�W�F�N�g�̌����𒲐�
        transform.rotation = Quaternion.LookRotation(transform.position - cameraTransform.position);
    }
}
