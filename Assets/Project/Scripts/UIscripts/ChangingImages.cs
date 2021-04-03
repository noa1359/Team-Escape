using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChangingImages : MonoBehaviour
{
    public Text Instruction;
    public Image RightArrow;
    public Image LeftArrow;
    public Image UpArrow;
    public Image Shift;

    void Start()
    {
        RightArrow.enabled = false;
        LeftArrow.enabled = false;
        UpArrow.enabled = false;
        Shift.enabled = false;
    }

    void Update()
    {
        if (Instruction.text == "Press the arrow keys to move.")
        {
            RightArrow.enabled = true;
            LeftArrow.enabled = true;
            UpArrow.enabled = false;
            Shift.enabled = false;
        }

        if (Instruction.text == "Press shift to run.")
        {
            RightArrow.enabled = false;
            LeftArrow.enabled = false;
            UpArrow.enabled = false;
            Shift.enabled = true;
        }

        if (Instruction.text == "Press the up arrow to jump.")
        {
            RightArrow.enabled = false;
            LeftArrow.enabled = false;
            UpArrow.enabled = true;
            Shift.enabled = false;
        }
    }
}
