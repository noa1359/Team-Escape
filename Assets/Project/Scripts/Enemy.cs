using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public float expKill;
    public float expHit;
    public int gold;
    public int gems;
    public List<EvolveItem> gainedItems = new List<EvolveItem>();
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnCollisionEnter2D(Collision2D col)
    {
        if(col.gameObject.CompareTag("Player"))
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
            Destroy(this.gameObject);
        }
    }
}
