using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Enemy
{
    public string enemyName;
    public Elements elementalType;
    public FighterClass fighterClass;

    public Sprite enemyProfile;

    public int enemyLVL = 1;
    public float enemyEXP = 0f;
    public float lastLVLUp = 0f;
    public float nextLVLUp = 110f;

    public int HP;
    public int MP;
    public int ATK;
    public int DEF;
    public int SPD;
    public int INTEL;

    public weapons EquippedWeapon;
    public List<AttackTypes> AttackList = new List<AttackTypes>();

    public float expKill;
    public float expHit;
    public int gold;
    public int gems;
    public List<EvolveItem> gainedItems = new List<EvolveItem>();

    public void KillingEnemy()
    {
        GM.gm.availableCharacters[GM.gm.currectCharacterInt].earnedEXP += expKill;
        GM.gm.earnedGold += gold;
        GM.gm.earnedGems += gems;
        foreach (EvolveItem item in gainedItems)
        {
            bool itemExist = false;
            int itemInt = 0;
            for (int i = 0; i < GM.gm.earnedEvItems.Count; i++)
            {
                if (GM.gm.earnedEvItems[i].itemType == item)
                {
                    itemInt = i;
                    itemExist = true;
                    break;
                }
            }
            if (itemExist)
            {
                GM.gm.earnedEvItems[itemInt].itemAmount++;
            }
            else
            {
                GM.gm.earnedEvItems.Add(new CollectedEvolveItems(item, 1));
            }
        }
    }
}
