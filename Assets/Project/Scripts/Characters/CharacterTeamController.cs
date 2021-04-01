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
    public BattleCharacters BC;
    public TeamSelectorScript TSS;

    public void ClickIcon()
    {
        //Character thisCharacter = TSS.availableCharacters[GMint];
        for (int i = 0; i < TSS.cards.Count; i++)
        {   
            if (TSS.cards[i].toggle.isOn)
            {
                if (TSS.charactersInBattle[i].battleCharacter.characterName != "")
                {
                    TSS.availableCharacters.Add(TSS.charactersInBattle[i]);
                }

                TSS.cards[i].misgeret.SetActive(true);
                TSS.cards[i].stats.SetActive(true);

                TSS.cards[i].cardImage.enabled = true;
                TSS.cards[i].cardImage.sprite = BC.battleCharacter.CardImage;
                
                TSS.cards[i].lvl.text = BC.battleCharacter.charaLVL.ToString();
                TSS.cards[i].hp.text = BC.battleCharacter.HP.ToString();
                TSS.cards[i].mp.text = BC.battleCharacter.MP.ToString();
                TSS.cards[i].atk.text = BC.battleCharacter.ATK.ToString();
                TSS.cards[i].def.text = BC.battleCharacter.DEF.ToString();
                TSS.cards[i].spd.text = BC.battleCharacter.SPD.ToString();
                TSS.cards[i].intel.text = BC.battleCharacter.INTEL.ToString();

                TSS.availableCharacters.Remove(BC);
                TSS.charactersInBattle[i] = BC;
                break;
            }
        }
        TSS.clearCharacterList();
        TSS.FillCharacterList();
    }
}