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
                }
                else
                {
                    GM.gm.gems += 25;
                    SRCount++;
                }
            }

            if (probability >= 0.3 && probability < 0.6)
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
                    GM.gm.availableCharacters.Add(SR[index]);
                    SRCount = 0;
                }
                else
                {
                    GM.gm.gems += 25;
                    SRCount = 0;
                }
            }

            if (probability <= 0.2)
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
                    GM.gm.availableCharacters.Add(SSR[index]);
                    SRCount++;
                }
                else
                {
                    GM.gm.gems += 25;
                    SRCount++;
                }
                
            }

            else if (SRCount == 10)
            {
                int index = Random.Range(0, SR.Count);
                //For now I'll do the same thing but I want to make it that it'll bring one that's available
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
                }
                else
                {
                    GM.gm.gems += 25;
                    SRCount = 0;
                }
            }
        }
    }

    public void TenDrawRegular()
    {
        if (GM.gm.gems - 1000 >= 0)
        {
            GM.gm.gems -= 1000;
            int sumn = Random.Range(0, SR.Count);
            ///It should choose an SR character I don't have but IDK how to do it yet so this it what we're going for for now
            GM.gm.availableCharacters.Add(SR[sumn]);

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
                        GM.gm.availableCharacters.Add(R[index]);
                        SRCount++;
                    }
                    else
                    {
                        GM.gm.gems += 25;
                        SRCount++;
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
                        GM.gm.availableCharacters.Add(SR[index]);
                        SRCount = 0;
                    }
                    else
                    {
                        GM.gm.gems += 25;
                        SRCount = 0;
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
                        GM.gm.availableCharacters.Add(SSR[index]);
                        SRCount++;
                    }
                    else
                    {
                        GM.gm.gems += 25;
                        SRCount++;
                    }
                    
                }
            }
        }
    }

    public void OneDrawEvent()
    {
        bool isAvailable = true;
        if (SSRCount == 20)
        {
            int index = Random.Range(0, SSR.Count);
            //For now I'll do the same thing but I want to make it that it'll bring one that's available
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
                SSRCount = 0;
            }
            else
            {
                GM.gm.gems += 25;
                SSRCount = 0;
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
        SSRCount += 10;
        bool isAvailable = true;
        if (SSRCount == 20)
        {
            int index = Random.Range(0, SSR.Count);
            //For now I'll do the same thing but I want to make it that it'll bring one that's available
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
                SSRCount = 0;
            }
            else
            {
                GM.gm.gems += 25;
                SSRCount = 0;
            }
        }
    }
}
