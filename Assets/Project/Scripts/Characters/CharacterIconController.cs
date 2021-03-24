using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CharacterIconController : MonoBehaviour
{
    public Image profile;
    public Image element;
    public Image rarity;
    public Text level;
    public Image EXPbar;
    public int GMint;
    public CharacterPageController CPC;
    public AfterBattleController ABC;

    public void ClickIcon()
    {
        Character thisCharacter = GM.gm.availableCharacters[GMint];
        CPC.selectedCharacter = GMint;
        CPC.lvl.text = thisCharacter.charaLVL.ToString();
        level.text = thisCharacter.charaLVL.ToString();
        CPC.cardImage.sprite = thisCharacter.CardImage;
        CPC.Name.text = thisCharacter.characterName;
        CPC.Element.text = thisCharacter.elementalType.elementalname;
        CPC.Class.text = thisCharacter.fighterClass.fightclassname;
        CPC.EXPhave.text = thisCharacter.charaEXP.ToString();
        CPC.EXPneed.text = thisCharacter.nextLVLUp.ToString();
        CPC.EXPbar.fillAmount =
                (thisCharacter.charaEXP - thisCharacter.lastLVLUp) /
                (thisCharacter.nextLVLUp - thisCharacter.lastLVLUp);
        CPC.HP.text = thisCharacter.HP.ToString();
        CPC.MP.text = thisCharacter.MP.ToString();
        CPC.ATK.text = thisCharacter.ATK.ToString();
        CPC.DEF.text = thisCharacter.DEF.ToString();
        CPC.SPD.text = thisCharacter.SPD.ToString();
        CPC.INTEL.text = thisCharacter.INTEL.ToString();
        ClearEvolve();

        List<bool> evolveNeeded = new List<bool>();
        if (thisCharacter.charEvolve != null)
        {
            for (int i = 0; i < thisCharacter.charEvolve.evolveItems.Count; i++)
            {
                CPC.ItemIcon[i].enabled = true;
                CPC.ItemIcon[i].sprite = thisCharacter.charEvolve.evolveItems[i].itemNeeded.ItemIcon;
                CPC.ItemNeed[i].text = thisCharacter.charEvolve.evolveItems[i].evolveAmount.ToString();
                CPC.ItemHave[i].text = CountEvolve(thisCharacter.charEvolve.evolveItems[i].itemNeeded).ToString();
                if (CountEvolve(thisCharacter.charEvolve.evolveItems[i].itemNeeded) >= thisCharacter.charEvolve.evolveItems[i].evolveAmount)
                {
                    evolveNeeded.Add(true);
                }
                else
                {
                    evolveNeeded.Add(false);
                }
            }

            bool allNeeded = true;
            foreach (bool item in evolveNeeded)
            {
                if (item == false)
                {
                    allNeeded = false;
                    break;
                }
            }
            if (thisCharacter.charEvolve.evolveAtLVL == thisCharacter.charaLVL && allNeeded)
            {
                CPC.evolveMessage.text = "You've reached all the requirements to evolve.";
                CPC.evolveButton.interactable = true;
            }
            else
            {
                CPC.evolveMessage.text = "You didn't reach all the requirements to evolve yet.";
                CPC.evolveButton.interactable = false;
            }
        }
        else
        {
            CPC.evolveMessage.text = "No more evolves.";
            CPC.evolveButton.interactable = false;
        }
    
    }

    void ClearEvolve()
    {
        for (int i = 0; i < 5; i++)
        {
            CPC.evolveMessage.text = "";
            CPC.ItemIcon[i].enabled = false;
            CPC.ItemNeed[i].text = "";
            CPC.ItemHave[i].text = "";
        }
    }

    int CountEvolve(EvolveItem ei)
    {
        int itemInt = 0;
        bool itemFound = false;
        for (int i = 0; i < GM.gm.collectedEvolveItems.Count; i++)
        {
            if (GM.gm.collectedEvolveItems[i].itemType.ItemName == ei.ItemName)
            {
                itemInt = i;
                itemFound = true;
                break;
            }
        }
        if (itemFound)
        {
            return GM.gm.collectedEvolveItems[itemInt].itemAmount;   
        }
        else
        {
            return 0;
        }
    }
}

