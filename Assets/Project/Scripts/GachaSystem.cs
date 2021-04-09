using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GachaSystem : MonoBehaviour
{
    private float probability;
    private int SRCount = 0;
    private int SSRCount = 0;

    public List<Character> R = new List<Character>();
    public List<Character> SR = new List<Character>();
    public List<Character> SSR = new List<Character>();

    public GameObject OneCardDraw;
    public GameObject TenCardDraw;
    public OneCard oneCard;
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

        oneCard = OneCardDraw.GetComponent<OneCard>();
    }

    public void OneDrawRegular()
    {
        if (GM.gm.gems - 100 >= 0)
        {
            GM.gm.gems -= 100;
            probability = Random.Range(0f,1f);
            bool isAvailable = true;
            if (probability >= 0.6)
            {
                int index = Random.Range(0, R.Count);
                GM.gm.selectedCharacter = R[index];
                for (int i = 0; i < GM.gm.availableCharacters.Count; i++)
                {
                    if (GM.gm.availableCharacters[i].characterName == R[index].characterName)
                    {
                        isAvailable = false;
                        break;
                    }
                }

                if (isAvailable)
                {
                    GM.gm.availableCharacters.Add(R[index]);
                    SRCount++;
                    oneCard.newCard.enabled = true;
                    oneCard.gradient.enabled = false;
                    oneCard.icon.enabled = false;
                    oneCard.toAnyfive.enabled = false;
                }
                else
                {
                    oneCard.newCard.enabled = false;
                    oneCard.gradient.enabled = true;
                    oneCard.icon.enabled = true;
                    oneCard.toAnyfive.enabled = true;
                    GM.gm.gems += 25;
                    SRCount++;
                }
                GameObject go = Instantiate(OneCardDraw);
            }

            if (probability >= 0.3 && probability < 0.6)
            {
                int index = Random.Range(0, SR.Count);
                GM.gm.selectedCharacter = SR[index];
                for (int i = 0; i < GM.gm.availableCharacters.Count; i++)
                {
                    if (GM.gm.availableCharacters[i].characterName == SR[index].characterName)
                    {
                        isAvailable = false;
                        break;
                    }
                }

                if (isAvailable)
                {
                    GM.gm.availableCharacters.Add(SR[index]);
                    SRCount = 0;
                    oneCard.newCard.enabled = true;
                    oneCard.gradient.enabled = false;
                    oneCard.icon.enabled = false;
                    oneCard.toAnyfive.enabled = false;
                }
                else
                {
                    oneCard.newCard.enabled = false;
                    oneCard.gradient.enabled = true;
                    oneCard.icon.enabled = true;
                    oneCard.toAnyfive.enabled = true;
                    GM.gm.gems += 25;
                    SRCount = 0;
                }
                GameObject go = Instantiate(OneCardDraw);
            }

            if (probability <= 0.2)
            {
                int index = Random.Range(0, SSR.Count);
                GM.gm.selectedCharacter = SSR[index];
                for (int i = 0; i < GM.gm.availableCharacters.Count; i++)
                {
                    if (GM.gm.availableCharacters[i].characterName == SSR[index].characterName)
                    {
                        isAvailable = false;
                        break;
                    }
                }

                if (isAvailable)
                {
                    GM.gm.availableCharacters.Add(SSR[index]);
                    SRCount++;
                    oneCard.newCard.enabled = true;
                    oneCard.gradient.enabled = false;
                    oneCard.icon.enabled = false;
                    oneCard.toAnyfive.enabled = false;
                    SSRCount = 0;
                }
                else
                {
                    oneCard.newCard.enabled = false;
                    oneCard.gradient.enabled = true;
                    oneCard.icon.enabled = true;
                    oneCard.toAnyfive.enabled = true;
                    GM.gm.gems += 25;
                    SRCount++;
                    SSRCount = 0;
                }
                GameObject go = Instantiate(OneCardDraw); 
            }

            else if (SRCount == 10)
            {
                foreach (Character item in SR)
                {
                    for (int i = 0; i < GM.gm.availableCharacters.Count; i++)
                    {
                        if (GM.gm.availableCharacters[i].characterName == item.characterName)
                        {
                            isAvailable = false;
                            break;
                        }
                    }
                    if (isAvailable)
                    {
                        GM.gm.selectedCharacter = item;
                        GM.gm.availableCharacters.Add(item);
                        SRCount = 0;
                        oneCard.newCard.enabled = true;
                        oneCard.gradient.enabled = false;
                        oneCard.icon.enabled = false;
                        oneCard.toAnyfive.enabled = false;
                        GameObject go = Instantiate(OneCardDraw);
                        break;
                    }
                }
            }
        }
    }

    public void TenDrawRegular()
    {
        if (GM.gm.gems - 1000 >= 0)
        {
            GM.gm.gems -= 1000;
            foreach (Character item in SR)
            {
                bool notAvailable = false;
                for (int i = 0; i < GM.gm.availableCharacters.Count; i++)
                {
                    if (GM.gm.availableCharacters[i].characterName == item.characterName)
                    {
                        notAvailable = true;
                        break;
                    }
                }
                if (notAvailable == false)
                {
                    GM.gm.selectedCharacter = item;
                    GM.gm.characterList.Add(item);
                    GM.gm.availableCharacters.Add(item);
                    SRCount = 0;
                    SSRCount++;
                    break;   
                }
            }

            for (int j = 0; j < 10; j++)
            {
                probability = Random.Range(0f,1f);
                bool isAvailable = true;
                if (probability >= 0.45)
                {
                    int index = Random.Range(0, R.Count);
                    for (int i = 0; i < GM.gm.availableCharacters.Count; i++)
                    {
                        if (GM.gm.availableCharacters[i].characterName == R[index].characterName)
                        {
                            isAvailable = false;
                            break;
                        }
                    }

                    if (isAvailable)
                    {
                        GM.gm.characterList.Add(R[index]);
                        GM.gm.availableCharacters.Add(R[index]);
                        SRCount++;
                        SSRCount++;
                    }
                    else
                    {
                        GM.gm.characterList.Add(R[index]);
                        GM.gm.dupeList.Add(R[index]);
                        GM.gm.gems += 25;
                        SRCount++;
                        SSRCount++;
                    }
                }

                if (probability > 0.25 && probability < 0.45)
                {
                    int index = Random.Range(0, SR.Count);
                    for (int i = 0; i < GM.gm.availableCharacters.Count; i++)
                    {
                        if (GM.gm.availableCharacters[i].characterName == SR[index].characterName)
                        {
                            isAvailable = false;
                            break;
                        }
                    }

                    if (isAvailable)
                    {
                        GM.gm.characterList.Add(SR[index]);
                        GM.gm.availableCharacters.Add(SR[index]);
                        SRCount = 0;
                        SSRCount++;
                    }
                    else
                    {
                        GM.gm.characterList.Add(SR[index]);
                        GM.gm.dupeList.Add(SR[index]);
                        GM.gm.gems += 25;
                        SRCount = 0;
                        SSRCount++;
                    }
                }

                if (probability <= 0.25)
                {
                    int index = Random.Range(0, SSR.Count);
                    for (int i = 0; i < GM.gm.availableCharacters.Count; i++)
                    {
                        if (GM.gm.availableCharacters[i].characterName == SSR[index].characterName)
                        {
                            isAvailable = false;
                            break;
                        }
                    }

                    if (isAvailable)
                    {
                        SSRCount = 0;
                        GM.gm.characterList.Add(SSR[index]);
                        GM.gm.availableCharacters.Add(SSR[index]);
                        SRCount++;
                    }
                    else
                    {
                        SSRCount = 0;
                        GM.gm.characterList.Add(SSR[index]);
                        GM.gm.dupeList.Add(SSR[index]);
                        GM.gm.gems += 25;
                        SRCount++;
                    }
                    
                }
            }
            GameObject go = Instantiate(TenCardDraw);
        }
    }

    public void OneDrawEvent()
    {
        bool isAvailable = true;
        if (SSRCount == 20)
        {
            foreach (Character item in SSR)
            {
                for (int i = 0; i < GM.gm.availableCharacters.Count; i++)
                {
                    if (GM.gm.availableCharacters[i].characterName == item.characterName)
                    {
                        isAvailable = false;
                        break;
                    }
                }
                if (isAvailable)
                {
                    GM.gm.selectedCharacter = item;
                    GM.gm.availableCharacters.Add(item);
                    SSRCount = 0;
                    oneCard.newCard.enabled = true;
                    oneCard.gradient.enabled = false;
                    oneCard.icon.enabled = false;
                    oneCard.toAnyfive.enabled = false;
                    GameObject go = Instantiate(OneCardDraw);
                    break;
                }
            }
        }
        else
        {
            OneDrawRegular();
            SSRCount++;
        }
    }

    public void TenDrawEvent()
    {
        TenDrawRegular();
        bool isAvailable = true;
        if (SSRCount == 20)
        {
            foreach (Character item in SSR)
            {
                for (int i = 0; i < GM.gm.availableCharacters.Count; i++)
                {
                    if (GM.gm.availableCharacters[i].characterName == item.characterName)
                    {
                        isAvailable = false;
                        break;
                    }
                }
                if (isAvailable)
                {
                    GM.gm.selectedCharacter = item;
                    GM.gm.availableCharacters.Add(item);
                    SSRCount = 0;
                    oneCard.newCard.enabled = true;
                    oneCard.gradient.enabled = false;
                    oneCard.icon.enabled = false;
                    oneCard.toAnyfive.enabled = false;
                    GameObject go = Instantiate(OneCardDraw);
                    break;
                }
            }
        }
    }
}
