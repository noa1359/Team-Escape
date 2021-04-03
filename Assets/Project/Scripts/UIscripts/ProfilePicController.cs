using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ProfilePicController : MonoBehaviour
{
    public Image ProfilePic;
    public int GMint;
    public HomeScreenUIUpdate HSU;

    public void ClickIcon()
    {
        Character thisCharacter = GM.gm.availableCharacters[GMint];
        HSU.selectedCharacter = GMint;
        HSU.profilePic.sprite = thisCharacter.profilePic;
    }
}
