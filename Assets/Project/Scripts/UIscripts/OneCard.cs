using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class OneCard : MonoBehaviour
{
    public Image SSRPic;
    public Image SRPic;
    public Image Rarity;
    public Image Element;
    public Image gradient;
    public Image icon;
    public TMP_Text characterName;
    public TMP_Text newCard;
    public TMP_Text toAnyfive;

    public Character character;
    // Start is called before the first frame update
    void Start()
    {
        character = GM.gm.selectedCharacter;
        if (character.rarity == _rarity.SSR)
        {
            SSRPic.enabled = true;
            SSRPic.sprite = character.pic;
        }
        else
        {
            SRPic.enabled = true;
            SRPic.sprite = character.pic;
        }
        Rarity.sprite = character.rarityIcon;
        Element.sprite = character.elementalType.icon;
        characterName.text = character.characterName;
    }
}
