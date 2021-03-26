using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

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

    // Start is called before the first frame update
    void Start()
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
                GS.itemImage.sprite = GM.gm.collectedWeapons[i].WeaponImage;
                GS.itemAmount.text = "";
                GS.IU = this;
                itemList.Add(go);
            }
        }
    }
}
