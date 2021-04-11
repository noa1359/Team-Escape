using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RollInfo : MonoBehaviour
{
    public static RollInfo RI;
    public GameObject contentArea;
    public GameObject table;
    public List<GameObject> characterList = new List<GameObject>();
    public GameObject header;
    Header head;
    Table tab;
    public List<Character> R = new List<Character>();
    public List<Character> SR = new List<Character>();
    public List<Character> SSR = new List<Character>();
    void Start()
    {
        foreach (Character character in GM.gm.charactersDatabase)
        {
            if (character.rarity == _rarity.R)
            {
                R.Add(character);
            }

            if (character.rarity == _rarity.SR)
            {
                SR.Add(character);
            }

            if (character.rarity == _rarity.SSR)
            {
                SSR.Add(character);
            }
        }

        InstantiateHeader("R");
        GameObject RR = Instantiate(table);
        RR.transform.SetParent(contentArea.transform);
        RR.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
        InstantiateTable(R, "60%", "45%");
        InstantiateHeader("SR");
        GameObject SRR = Instantiate(table);
        SRR.transform.SetParent(contentArea.transform);
        SRR.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
        InstantiateTable(SR, "30%", "40%");
        InstantiateHeader("SSR");
        GameObject SSRR = Instantiate(table);
        SSRR.transform.SetParent(contentArea.transform);
        SSRR.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
        InstantiateTable(SSR, "10%", "15%");
    }

    public void InstantiateTable(List<Character> list, string oneChance, string tenChances)
    {
        for (int i = 0; i < list.Count; i++)
        {
            GameObject go = Instantiate(table);
            go.transform.SetParent(contentArea.transform);
            go.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
            tab = go.GetComponent<Table>();
            go.name = list[i].characterName;
            tab.num.text = (i + 1).ToString();
            tab.name.text = list[i].characterName;
            tab.oneChance.text = oneChance;
            tab.tenChances.text = tenChances;
            tab.GMint = i;
            tab.RI = this;
            characterList.Add(go);
        }
    }

    public void InstantiateHeader(string text)
    {
        GameObject go = Instantiate(header);
        go.transform.SetParent(contentArea.transform);
        go.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
        head = go.GetComponent<Header>();
        head.rarity.text = text;
    }
}