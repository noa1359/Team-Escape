using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using CodeMonkey.Utils;

public class InventoryUI : MonoBehaviour
{
    public GameObject contentArea;
    public GameObject itemPrefab;
    public List<GameObject> itemList = new List<GameObject>(); 

    public Toggle skills;
    public Toggle expItems;
    public Toggle weapons;
    public Toggle evolveItems;
    public Toggle loreItems;

    void Awake()
    {        
        if (evolveItems.isOn)
        {
            for (int i = 0; i < GM.gm.collectedEvolveItems.Count; i++)
            {
                GameObject go = Instantiate(itemPrefab);
                go.transform.SetParent(contentArea.transform);
                go.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
                GridSlot GS = go.GetComponent<GridSlot>();
                GS.itemImage.sprite = GM.gm.collectedEvolveItems[i].itemType.ItemIcon;
                GS.itemAmount.text = GM.gm.collectedEvolveItems[i].itemAmount.ToString();
                GS.IU = this;
                itemList.Add(go);
            }
        }
        
        if (weapons.isOn)
        {
            for (int i = 0; i < GM.gm.collectedWeapons.Count; i++)
            {
                GameObject go = Instantiate(itemPrefab);
                go.transform.SetParent(contentArea.transform);
                go.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
                GridSlot GS = go.GetComponent<GridSlot>();
                Button button = go.GetComponent<Button>();
                button.interactable = true;
                string AttackDescription = GM.gm.collectedWeapons[i].Description + "\n Damage Amount: " + GM.gm.collectedWeapons[i].DamageAmount.ToString() + "\n Weapon Range: " + GM.gm.collectedWeapons[i].weaponRange.ToString();
                go.GetComponent<Button_UI>().MouseOverOnceFunc = () => Tooltip.ShowTooltip_Static(AttackDescription);
                go.GetComponent<Button_UI>().MouseOutOnceFunc = () => Tooltip.HideTooltip_Static();
                GS.itemImage.sprite = GM.gm.collectedWeapons[i].WeaponImage;
                GS.itemAmount.text = "1";
                GS.IU = this;
                itemList.Add(go);
            }
        }

        if (skills.isOn)
        {
            foreach (Character character in GM.gm.availableCharacters)
            {
                for (int i = 0; i < character.AttackList.Count; i++)
            {
                GameObject go = Instantiate(itemPrefab);
                go.transform.SetParent(contentArea.transform);
                go.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
                GridSlot GS = go.GetComponent<GridSlot>();
                Button button = go.GetComponent<Button>();
                string AttackDescription = character.AttackList[i].Description;
                go.GetComponent<Button_UI>().MouseOverOnceFunc = () => Tooltip.ShowTooltip_Static(AttackDescription);
                go.GetComponent<Button_UI>().MouseOutOnceFunc = () => Tooltip.HideTooltip_Static();
                button.interactable = true;
                GS.itemImage.sprite = character.characterProfile;
                GS.itemAmount.text = character.AttackList[i].attackName;
                GS.IU = this;
                itemList.Add(go);
            }
            }
        }
    }
}
