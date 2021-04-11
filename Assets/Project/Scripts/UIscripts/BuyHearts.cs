using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BuyHearts : MonoBehaviour
{
    public Text message;

    public void OnClicked()
    {
        if (GM.gm.gems >= 30)
        {
            GM.gm.gems -= 30;
            GM.gm.totalEnergy += 100;
            message.text = "You officially bought some gems.";
        }
        else
        {
            message.text = "You don't have enough gems to buy hearts.";
        }
        StartCoroutine(clearMessage());
    }

    IEnumerator clearMessage()
    {
        yield return new WaitForSeconds(1.0f);
        message.text = "";
    }
}
