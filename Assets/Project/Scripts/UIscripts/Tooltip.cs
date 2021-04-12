using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using CodeMonkey.Utils;

public class Tooltip : MonoBehaviour
{
    Touch touch;
    private static Tooltip instance;
    public Text tooltipText;
    public RectTransform backgroundRectTransform;
    float textPaddingSize = 4f;

    void Awake()
    {
        instance = this;
    }
    
    void Update()
    {
        if (Input.touchCount > 0)
        {
            Vector2 localPoint;
            RectTransformUtility.ScreenPointToLocalPointInRectangle(transform.parent.GetComponent<RectTransform>(), Input.mousePosition, null, out localPoint);
            transform.localPosition = localPoint;
        }
    }

    private void ShowTooltip(string tooltipString)
    {
       gameObject.SetActive(true);
       tooltipText.text = tooltipString;
       Vector2 backgroundSize = new Vector2(210, tooltipText.preferredHeight + textPaddingSize * 2f);
       backgroundRectTransform.sizeDelta = backgroundSize;
    }

    private void HideTooltip()
    {
       gameObject.SetActive(false);
    }

    public static void ShowTooltip_Static(string tooltipString)
    {
       instance.ShowTooltip(tooltipString);
    }

    public static void HideTooltip_Static()
    {
       instance.HideTooltip();
    }
}
