using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelUp : MonoBehaviour
{
    public GameObject characterPagePrefab;
    private AfterBattleController ABC;

    void Start()
    {
        // lets setup the visuals for each character
        GameObject go = Instantiate(characterPagePrefab);
        ABC = go.GetComponent<AfterBattleController>();
        // start the EXP increase
        int i = 0;
        foreach (int bcInt in GM.gm.battleCharacters)
        {
           StartCoroutine(levelUp(GM.gm.availableCharacters[bcInt], i));
            i++;
        }
        StartCoroutine(levelUpplayer());
        UpdateItems();
    }

    void Update()
    {
        List<bool> EXPfinished = new List<bool>();
        foreach (int bcInt in GM.gm.battleCharacters)
        {
            if (GM.gm.availableCharacters[bcInt].earnedEXP == 0)
            {
                EXPfinished.Add(true);
            }
            else
            {
                EXPfinished.Add(false);
            }
        }
        if (GM.gm.playerEarnedEXP == 0)
        {
            EXPfinished.Add(true);
        }
        else
        {
            EXPfinished.Add(false);
        }

        foreach (bool EXPcheck in EXPfinished)
        {
            if (EXPcheck == false)
            {
                return;
            }
        }
        ABC.playAgain.interactable = true;
        ABC.Continue.interactable = true;
    }

    IEnumerator levelUp(Character thisCharacter, int i)
    {
        yield return new WaitForSeconds(1f);
        // lets display what items we got
        //claimItems();
        //now lets do the stats
        while (thisCharacter.earnedEXP > 0 && thisCharacter.charaLVL < thisCharacter.charEvolve.evolveAtLVL)
        {
                CharacterIconController LUO = ABC.characterList[i].GetComponent<CharacterIconController>();
                thisCharacter.charaEXP++;
                if (thisCharacter.charaEXP >= thisCharacter.nextLVLUp)
                {
                    thisCharacter.charaLVL++;
                    thisCharacter.lastLVLUp = thisCharacter.nextLVLUp;
                    float increaseNextEXPBy = 10*thisCharacter.charaLVL; // <--- use whatever you need here
                    thisCharacter.nextLVLUp += increaseNextEXPBy;
                    // UPDATE ANY OTHER STAT HERE    
                    updateStats(thisCharacter);
                }
                updateVisual(LUO,thisCharacter);
            thisCharacter.earnedEXP--;
            yield return new WaitForSeconds(0.025f);
        }
        thisCharacter.earnedEXP = 0;
    }

IEnumerator levelUpplayer()
    {
        yield return new WaitForSeconds(1f);
        // lets display what items we got
        //claimItems();
        while (GM.gm.playerEarnedEXP > 0)
        {
                GM.gm.playerEXP++;
                if (GM.gm.playerEXP >= GM.gm.playerNextLVLUp)
                {
                    GM.gm.playerLevel++;
                    GM.gm.playerLastLVLUp = GM.gm.playerNextLVLUp;
                    float increaseNextEXPBy = 10*GM.gm.playerLevel; // <--- use whatever you need here
                    GM.gm.playerNextLVLUp += increaseNextEXPBy;
                }
            updateVisualPlayer();
            GM.gm.playerEarnedEXP--;
            yield return new WaitForSeconds(0.025f);
        }
    }


    void updateVisual(CharacterIconController LUO, Character thisCharacter)
    {
        LUO.level.text = thisCharacter.charaLVL.ToString();
        LUO.EXPbar.fillAmount =
                (thisCharacter.charaEXP - thisCharacter.lastLVLUp) /
                (thisCharacter.nextLVLUp - thisCharacter.lastLVLUp);
    }

    void updateVisualPlayer()
    {
        ABC.lvl.text = GM.gm.playerLevel.ToString();
        ABC.EXPBar.fillAmount =
                (GM.gm.playerEXP - GM.gm.playerLastLVLUp) /
                (GM.gm.playerNextLVLUp - GM.gm.playerLastLVLUp);
        ABC.currentEXP.text = GM.gm.playerEXP.ToString();
        ABC.EXPNextLevel.text = GM.gm.playerNextLVLUp.ToString();
    }

    void UpdateItems()
    {
        GM.gm.gold += GM.gm.earnedGold;
        GM.gm.gems += GM.gm.earnedGems;
        ABC.gold.text = GM.gm.earnedGold.ToString();
        ABC.gems.text = GM.gm.earnedGems.ToString();
        GM.gm.earnedGold = 0;
        GM.gm.earnedGems = 0;
        addEvolve();
    }

    void updateStats(Character thisChar)
    {
        thisChar.HP += thisChar.fighterClass.HPGrowth;
        thisChar.MP += thisChar.fighterClass.MPGrowth;
        thisChar.ATK += thisChar.fighterClass.ATKGrowth;
        thisChar.DEF += thisChar.fighterClass.DEFGrowth;
        thisChar.SPD += thisChar.fighterClass.SPDGrowth;
        thisChar.INTEL += thisChar.fighterClass.INTELGrowth;
    }

    void addEvolve()
    {
        foreach (CollectedEvolveItems item in GM.gm.earnedEvItems)
        {
            bool itemExist = false;
            int itemInt = 0;
            for (int i = 0; i < GM.gm.collectedEvolveItems.Count; i++)
            {
                if (GM.gm.collectedEvolveItems[i].itemType == item.itemType)
                {
                    itemInt = i;
                    itemExist = true;
                    break;
                }
            }
            if (itemExist)
            {
                GM.gm.collectedEvolveItems[itemInt].itemAmount += item.itemAmount;
            }
            else
            {
                GM.gm.collectedEvolveItems.Add(new CollectedEvolveItems(item.itemType, item.itemAmount));
            }
        }
    }
}
