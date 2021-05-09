using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AttackName : MonoBehaviour
{
    public Button attackButton;
    public Text attackName;
    public string attackDescription;
    public int MPCost;
    public int DMGAmount;
    public BattleWindow BW;

    public void onButtonClicked()
    {
        
        foreach (BattleCharacters selectedCharacter in GM.gm.charactersInBattle)
        {
            if (selectedCharacter.battleCharacter.characterName == GM.gm.activeCharacter.characterName)
            {
                foreach (AttackTypes attacks in selectedCharacter.battleCharacter.AttackList)
                {
                    if (attacks.attackName == attackName.text)
                    {
                        GM.gm.selectedAttack = attacks;
                        break;
                    }
                }
                break;
            }
        }
        BW.attackDescription.text = attackDescription;
        BW.MPCost.text = MPCost.ToString();
        BW.DMGAmount.text = DMGAmount.ToString();
    }
}
