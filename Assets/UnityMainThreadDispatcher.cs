using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnityMainThreadDispatcher : MonoBehaviour
{
    private static readonly Queue<Action> actionQueue = new Queue<Action>();
    private static UnityMainThreadDispatcher _instance;

    public static UnityMainThreadDispatcher Instance
    {
        get
        {
            if (_instance == null)
            {
                // �V����GameObject���쐬���A����ɂ��̃X�N���v�g���A�^�b�`
                var obj = new GameObject("UnityMainThreadDispatcher");
                _instance = obj.AddComponent<UnityMainThreadDispatcher>();
                DontDestroyOnLoad(obj); // �V�[�����܂����ŕێ�
            }
            return _instance;
        }
    }

    private void Update()
    {
        // �L���[�ɂ��邷�ׂẴA�N�V���������s
        lock (actionQueue)
        {
            while (actionQueue.Count > 0)
            {
                var action = actionQueue.Dequeue();
                action?.Invoke();
            }
        }
    }

    public void Enqueue(Action action)
    {
        // �A�N�V�������L���[�ɒǉ�
        lock (actionQueue)
        {
            actionQueue.Enqueue(action);
        }
    }

    public Coroutine EnqueueCoroutine(IEnumerator coroutine)
    {
        // �R���[�`�����J�n
        return StartCoroutine(coroutine);
    }
}
