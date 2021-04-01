using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CharacterTeamController : MonoBehaviour
{
    public Image profile;
    public Image element;
    public Image rarity;
    public Text level;
    public Image EXPbar;
    public int GMint;
    public TeamSelectorScript TSS;

    public void ClickIcon()
    {
        Character thisCharacter = GM.gm.availableCharacters[GMint];
        for (int i = 0; i < TSS.cards.Count; i++)
        {   
            if (TSS.cards[i].toggle.isOn)
            {
                TSS.cards[i].misgeret.SetActive(true);
                TSS.cards[i].stats.SetActive(true);

                TSS.cards[i].cardImage.enabled = true;
                TSS.cards[i].cardImage.sprite = thisCharacter.CardImage;
                
                TSS.cards[i].lvl.text = thisCharacter.charaLVL.ToString();
                TSS.cards[i].hp.text = thisCharacter.HP.ToString();
                TSS.cards[i].mp.text = thisCharacter.MP.ToString();
                TSS.cards[i].atk.text = thisCharacter.ATK.ToString();
                TSS.cards[i].def.text = thisCharacter.DEF.ToString();
                TSS.cards[i].spd.text = thisCharacter.SPD.ToString();
                TSS.cards[i].intel.text = thisCharacter.INTEL.ToString();

                GM.gm.charactersInBattle.Add(thisCharacter);
                GM.gm.battleCharacters.Add(i);
            }

            ///if character is put on the team already, you can't put it again.
            ///if character is replaced by another character,
            ///then you remove her from battleCharacters and characters in battle and you can put it on the team again.
        }
    }
}
