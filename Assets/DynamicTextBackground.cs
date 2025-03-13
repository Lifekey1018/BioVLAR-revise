using UnityEngine;
using TMPro;

public class DynamicTextBackground : MonoBehaviour
{
    public TextMeshPro textComponent;  // �e�L�X�g�̎Q��
    public Transform backgroundCube;   // �w�i�̃L���[�u�̎Q��

    private float paddingX = 0.02f; // �������̗]��
    private float paddingY = 0.003f; // �c�����̗]��

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
        // �܂��ATextMeshPro �̃��C�A�E�g���X�V
        textComponent.ForceMeshUpdate();

        // `preferredWidth` / `preferredHeight` �Ńe�L�X�g�̃T�C�Y���擾
        float textWidth = textComponent.rectTransform.rect.width;
        float textHeight = textComponent.preferredHeight;

        // �w�i�L���[�u�̃T�C�Y���X�V�i�]�����l���j
        backgroundCube.localScale = new Vector3((textWidth*0.01f + paddingX), (textHeight + paddingY) * 0.02f, backgroundCube.localScale.z);

        // �w�i�L���[�u���e�L�X�g�̒����ɔz�u
        backgroundCube.localPosition = new Vector3(0, 0, 0);
    }
}
