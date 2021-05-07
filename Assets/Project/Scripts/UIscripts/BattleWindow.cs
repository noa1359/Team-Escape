using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BattleWindow : MonoBehaviour
{
    public GameObject Attacks;
    public GameObject buttonList;
    public GameObject contentArea;
    public Text attackDescription;
    public GameObject attackName;

    public AttackName AN;

    public List<GameObject> attacksList = new List<GameObject>();
    public List<AttackTypes> attack = new List<AttackTypes>();
    public List<AttackTypes> support = new List<AttackTypes>();
    public List<AttackTypes> defence = new List<AttackTypes>();

    public void onAttackClicked()
    {
        attackDescription.text = "";
        destroyList();
        attack.Clear();
        for (int i = 0; i < GM.gm.charactersInBattle.Count; i++)
        {
            if (GM.gm.charactersInBattle[i].battleCharacter.characterName == GM.gm.activeCharacter)
            {
                foreach (AttackTypes attacks in GM.gm.charactersInBattle[i].battleCharacter.AttackList)
                {
                    if (attacks.attackType == AttackType.Attack || attacks.attackType == AttackType.Strategist)
                    {
                        attack.Add(attacks);
                    }
                }
                break;
            }
        }
        for (int i = 0; i < attack.Count; i++)
        {
            GameObject go = Instantiate(attackName);
            go.transform.SetParent(contentArea.transform);
            go.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
            AttackName AN = go.GetComponent<AttackName>();
            AN.attackName.text = attack[i].attackName;
            AN.attackDescription = attack[i].Description;
            AN.BW = this;
            attacksList.Add(go);
        }
        buttonList.SetActive(false);
        Attacks.SetActive(true);
    }

    public void onSupportClicked()
    {
        attackDescription.text = "";
        destroyList();
        support.Clear();
        for (int i = 0; i < GM.gm.charactersInBattle.Count; i++)
        {
            if (GM.gm.charactersInBattle[i].battleCharacter.characterName == GM.gm.activeCharacter)
            {
                foreach (AttackTypes attacks in GM.gm.charactersInBattle[i].battleCharacter.AttackList)
                {
                    if (attacks.attackType == AttackType.Support)
                    {
                        support.Add(attacks);
                    }
                }
                break;
            }
        }
        for (int i = 0; i < support.Count; i++)
        {
            GameObject go = Instantiate(attackName);
            go.transform.SetParent(contentArea.transform);
            go.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
            AttackName AN = go.GetComponent<AttackName>();
            AN.attackName.text = support[i].attackName;
            AN.attackDescription = support[i].Description;
            AN.BW = this;
            attacksList.Add(go);
        }
        buttonList.SetActive(false);
        Attacks.SetActive(true);
    }

    public void onDefenceClicked()
    {
        attackDescription.text = "";
        destroyList();
        defence.Clear();
        for (int i = 0; i < GM.gm.charactersInBattle.Count; i++)
        {
            if (GM.gm.charactersInBattle[i].battleCharacter.characterName == GM.gm.activeCharacter)
            {
                foreach (AttackTypes attacks in GM.gm.charactersInBattle[i].battleCharacter.AttackList)
                {
                    if (attacks.attackType == AttackType.Defence)
                    {
                        defence.Add(attacks);
                    }
                }
                break;
            }
        }
        for (int i = 0; i < defence.Count; i++)
        {
            GameObject go = Instantiate(attackName);
            go.transform.SetParent(contentArea.transform);
            go.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
            AttackName AN = go.GetComponent<AttackName>();
            AN.attackName.text = defence[i].attackName;
            AN.attackDescription = defence[i].Description;
            AN.BW = this;
            attacksList.Add(go);
        }
        buttonList.SetActive(false);
        Attacks.SetActive(true);
    }

    public void destroyList()
    {
        foreach (GameObject item in attacksList)
        {
            Destroy(item);
        }
    }
}
