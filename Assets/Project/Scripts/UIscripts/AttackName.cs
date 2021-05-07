using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AttackName : MonoBehaviour
{
    public Button attackButton;
    public Text attackName;
    public string attackDescription;
    public BattleWindow BW;

    public void onButtonClicked()
    {
        BW.attackDescription.text = attackDescription;
    }
}
