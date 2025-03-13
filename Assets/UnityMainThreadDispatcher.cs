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
                // 新しいGameObjectを作成し、それにこのスクリプトをアタッチ
                var obj = new GameObject("UnityMainThreadDispatcher");
                _instance = obj.AddComponent<UnityMainThreadDispatcher>();
                DontDestroyOnLoad(obj); // シーンをまたいで保持
            }
            return _instance;
        }
    }

    private void Update()
    {
        // キューにあるすべてのアクションを実行
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
        // アクションをキューに追加
        lock (actionQueue)
        {
            actionQueue.Enqueue(action);
        }
    }

    public Coroutine EnqueueCoroutine(IEnumerator coroutine)
    {
        // コルーチンを開始
        return StartCoroutine(coroutine);
    }
}
