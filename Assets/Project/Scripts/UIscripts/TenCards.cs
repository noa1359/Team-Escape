using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TenCards : MonoBehaviour
{
    public GameObject contentArea;
    public GameObject characterIconPrefab;
    public List<GameObject> characterList = new List<GameObject>();
    public GachaSystem GS;
    int dupeCount = 0;

    // Start is called before the first frame update
    void Start()
    {
        for (int i = 0; i < GM.gm.characterList.Count; i++)
        {
            GameObject go = Instantiate(characterIconPrefab);
            go.transform.SetParent(contentArea.transform);
            go.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
            CharacterIconController CIC = go.GetComponent<CharacterIconController>();
            CIC.profile.sprite = GM.gm.characterList[i].characterProfile;
            CIC.element.sprite = GM.gm.characterList[i].elementalType.icon;
            CIC.rarity.sprite = GM.gm.characterList[i].rarityIcon;
            CIC.level.text = GM.gm.characterList[i].charaLVL.ToString();
            for (int j = 0; j < GM.gm.dupeList.Count; j++)
            {
                if (GM.gm.dupeList[j] == GM.gm.characterList[i])
                {
                    CIC.toAnyfive.enabled = true;
                    CIC.gachaIcon.enabled = true;
                    CIC.level.enabled = false;
                    CIC.num.enabled = false;
                    GM.gm.dupeList.Remove(GM.gm.dupeList[j]);
                    break;
                }
            }
            CIC.GMint = i;
            CIC.TC = this;
            characterList.Add(go);
        }
    }

    public void clearList()
    {
        GM.gm.characterList.Clear();
    }
}
