using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using System.IO;
using System.Runtime.Versioning;
using System.Text;
using System.Diagnostics;
using TMPro;


public class CSVReader:MonoBehaviour
{
    public struct SentenceData
    {
        public string sentenceJP;
        public string sentenceEN;
        public double start_time;
        public double end_time;
    }

    public TextMeshPro protocolText;
    private Dictionary<int, SentenceData> sentenceDictionary = new Dictionary<int, SentenceData>(); // protocolの中身を入れるリスト
    public VideoPlayer vp;
    [SerializeField]
    public string fileName;
    private int currentIndex = 0;  // 現在の行のインデックス
    private bool showJapanese = true; // 日本語表示中なら true, 英語なら false

    public void Start()
    {
        LoadCSV();
        UpdateText();
    }

    public void LoadCSV()
    {
        string filePath = Path.Combine(UnityEngine.Application.streamingAssetsPath, fileName+".csv");

        if (File.Exists(filePath))
        {
            SentenceData firstData = new SentenceData
            {
                sentenceJP = "開始",
                sentenceEN = "start",
                start_time = 0,
                end_time = 0
            };
            sentenceDictionary[0] = firstData;
            string[] lines = File.ReadAllLines(filePath);
            for (int i = 1; i < lines.Length; i++) // ヘッダー行 (0 行目) をスキップ
            {
                string[] columns = lines[i].Split(',');

                if (columns.Length >= 4)
                {
                    SentenceData data = new SentenceData
                    {
                        sentenceJP = columns[0], // 日本語
                        sentenceEN = columns[1], // 英語
                        start_time = double.Parse(columns[2]), // 開始
                        end_time = double.Parse(columns[3]) // 終了
                    };
                    sentenceDictionary[i] = data; // インデックスをキーにして保存
                }
            }
            SentenceData finishData = new SentenceData
            {
                sentenceJP = "終了",
                sentenceEN = "end",
                start_time = 0,
                end_time = 0
            };
            sentenceDictionary[sentenceDictionary.Count] = finishData;
        }
        else
        {
            UnityEngine.Debug.LogError("CSV file not found: " + filePath);
        }
    }


    /// <summary>
    /// Cube のテキストを更新
    /// </summary>
    void UpdateText()
    {
        if (sentenceDictionary.Count > 0 && sentenceDictionary.ContainsKey(currentIndex))
        {
            SentenceData currentSentence = sentenceDictionary[currentIndex];

            // 日本語と英語を切り替える
            protocolText.text = showJapanese ? $"{currentIndex}:" + currentSentence.sentenceJP : $"{currentIndex + 1}:"+currentSentence.sentenceEN;
            
            if (vp != null && vp.clip != null)
            {
                vp.time = currentSentence.start_time;
                vp.Play();
            }
        }
    }

    /// <summary>
    /// 次の行へ
    /// </summary>
    public void NextText()
    {
        if (sentenceDictionary.Count > 0)
        {
            currentIndex = (currentIndex + 1) % sentenceDictionary.Count;  // ループする
            UpdateText();
        }
    }

    /// <summary>
    /// 前の行へ
    /// </summary>
    public void PrevText()
    {
        if (sentenceDictionary.Count > 0)
        {
            currentIndex = (currentIndex - 1 + sentenceDictionary.Count) % sentenceDictionary.Count;  // ループする
            UpdateText();
        }
    }

    /// <summary>
    /// 言語切り替え
    /// </summary>
    public void SwitchLanguage()
    {
        showJapanese = !showJapanese;
        UpdateText();
    }
}

