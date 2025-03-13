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
    private Dictionary<int, SentenceData> sentenceDictionary = new Dictionary<int, SentenceData>(); // protocol�̒��g�����郊�X�g
    public VideoPlayer vp;
    [SerializeField]
    public string fileName;
    private int currentIndex = 0;  // ���݂̍s�̃C���f�b�N�X
    private bool showJapanese = true; // ���{��\�����Ȃ� true, �p��Ȃ� false

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
                sentenceJP = "�J�n",
                sentenceEN = "start",
                start_time = 0,
                end_time = 0
            };
            sentenceDictionary[0] = firstData;
            string[] lines = File.ReadAllLines(filePath);
            for (int i = 1; i < lines.Length; i++) // �w�b�_�[�s (0 �s��) ���X�L�b�v
            {
                string[] columns = lines[i].Split(',');

                if (columns.Length >= 4)
                {
                    SentenceData data = new SentenceData
                    {
                        sentenceJP = columns[0], // ���{��
                        sentenceEN = columns[1], // �p��
                        start_time = double.Parse(columns[2]), // �J�n
                        end_time = double.Parse(columns[3]) // �I��
                    };
                    sentenceDictionary[i] = data; // �C���f�b�N�X���L�[�ɂ��ĕۑ�
                }
            }
            SentenceData finishData = new SentenceData
            {
                sentenceJP = "�I��",
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
    /// Cube �̃e�L�X�g���X�V
    /// </summary>
    void UpdateText()
    {
        if (sentenceDictionary.Count > 0 && sentenceDictionary.ContainsKey(currentIndex))
        {
            SentenceData currentSentence = sentenceDictionary[currentIndex];

            // ���{��Ɖp���؂�ւ���
            protocolText.text = showJapanese ? $"{currentIndex}:" + currentSentence.sentenceJP : $"{currentIndex + 1}:"+currentSentence.sentenceEN;
            
            if (vp != null && vp.clip != null)
            {
                vp.time = currentSentence.start_time;
                vp.Play();
            }
        }
    }

    /// <summary>
    /// ���̍s��
    /// </summary>
    public void NextText()
    {
        if (sentenceDictionary.Count > 0)
        {
            currentIndex = (currentIndex + 1) % sentenceDictionary.Count;  // ���[�v����
            UpdateText();
        }
    }

    /// <summary>
    /// �O�̍s��
    /// </summary>
    public void PrevText()
    {
        if (sentenceDictionary.Count > 0)
        {
            currentIndex = (currentIndex - 1 + sentenceDictionary.Count) % sentenceDictionary.Count;  // ���[�v����
            UpdateText();
        }
    }

    /// <summary>
    /// ����؂�ւ�
    /// </summary>
    public void SwitchLanguage()
    {
        showJapanese = !showJapanese;
        UpdateText();
    }
}

