using UnityEngine;
using TMPro;

public class DynamicTextBackground : MonoBehaviour
{
    public TextMeshPro textComponent;  // テキストの参照
    public Transform backgroundCube;   // 背景のキューブの参照

    private float paddingX = 0.02f; // 横方向の余白
    private float paddingY = 0.003f; // 縦方向の余白

    void Start()
    {
        UpdateBackgroundSize();
    }
    
    void Update()
    {
        UpdateBackgroundSize();
    }


    public void SetText(string newText)
    {
        textComponent.text = newText;
        UpdateBackgroundSize();
    }

    private void UpdateBackgroundSize()
    {
        // まず、TextMeshPro のレイアウトを更新
        textComponent.ForceMeshUpdate();

        // `preferredWidth` / `preferredHeight` でテキストのサイズを取得
        float textWidth = textComponent.rectTransform.rect.width;
        float textHeight = textComponent.preferredHeight;

        // 背景キューブのサイズを更新（余白を考慮）
        backgroundCube.localScale = new Vector3((textWidth*0.01f + paddingX), (textHeight + paddingY) * 0.02f, backgroundCube.localScale.z);

        // 背景キューブをテキストの中央に配置
        backgroundCube.localPosition = new Vector3(0, 0, 0);
    }
}
