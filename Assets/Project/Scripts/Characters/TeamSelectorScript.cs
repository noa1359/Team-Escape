using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class TeamSelectorScript : MonoBehaviour
{
    public List<BattleCharacters> availableCharacters = new List<BattleCharacters>();
    public BattleCharacters[] charactersInBattle = new BattleCharacters[6];

    public List<GameObject> characterList = new List<GameObject>();
    public GameObject contentArea;
    public GameObject characterIconPrefab;
    public GameObject characterSelector;

    public List<Card> cards = new List<Card>();

    // Start is called before the first frame update
    void Start()
    {
        FillBattleList();
        FillAvailableCharacters();
        FillCharacterList();
    }

    public void FillAvailableCharacters()
    {
        for (int i = 0; i < GM.gm.availableCharacters.Count; i++)
        {
            bool foundInBattle = false;
            BattleCharacters bc = new BattleCharacters(i, GM.gm.availableCharacters[i]);
            foreach (BattleCharacters item in charactersInBattle)
            {
                if (item.originalCharacterInt == i && item.battleCharacter.characterName != "")
                {
                    foundInBattle = true;
                    break;
                }
            }

            if (foundInBattle)
            {
                continue;
            }
            else
            {
                availableCharacters.Add(bc);
            }
        }
    }

    public void FillCharacterList()
    {
        CharacterTeamController firstCharacter = null;
        for (int i = 0; i < availableCharacters.Count; i++)
        {
            GameObject go = Instantiate(characterIconPrefab);
            go.transform.SetParent(contentArea.transform);
            go.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
            CharacterTeamController CIC = go.GetComponent<CharacterTeamController>();
            CIC.profile.sprite = availableCharacters[i].battleCharacter.characterProfile;
            CIC.element.sprite = availableCharacters[i].battleCharacter.elementalType.icon;
            CIC.rarity.sprite = availableCharacters[i].battleCharacter.rarityIcon;
            CIC.level.text = availableCharacters[i].battleCharacter.charaLVL.ToString();
            CIC.BC = availableCharacters[i];
            CIC.TSS = this;
            characterList.Add(go);
            if (i == 0)
            {
                firstCharacter = CIC;
            }
        }
        if (!CharactersInBattle())
        {
            firstCharacter.ClickIcon();
        }
        else
        {
            for (int i = 0; i < cards.Count; i++)
            {
                if (charactersInBattle[i].battleCharacter.characterName != "")
                {
                    FillCardList(i, charactersInBattle[i]);                    
                }
            }
        }
    }
    
    bool CharactersInBattle()
    {
        foreach (BattleCharacters item in charactersInBattle)
        {
            if (item.battleCharacter.characterName != "")
            {
                return true;
            }
        }
        return false;
    }

    public void clearCharacterList()
    {
        foreach (GameObject item in characterList)
        {
            Destroy(item);
        }
        characterList.Clear();
    }

    public void FillBattleList()
    {
        for (int i = 0; i < GM.gm.charactersInBattle.Count; i++)
        {
            charactersInBattle[i] = GM.gm.charactersInBattle[i];
        }
    }

    public void ClickPlay()
    {
        GM.gm.charactersInBattle.Clear();
        foreach (BattleCharacters item in charactersInBattle)
        {
            if (item.battleCharacter.characterName == "")
            {
                continue;
            }
            GM.gm.charactersInBattle.Add(item);
        }
        SceneManager.LoadScene("Battle");
    }

    public void FillCardList(int i, BattleCharacters BC)
    {
        cards[i].misgeret.SetActive(true);
        cards[i].stats.SetActive(true);

        cards[i].cardImage.enabled = true;
        cards[i].cardImage.sprite = BC.battleCharacter.CardImage;
        
        cards[i].lvl.text = BC.battleCharacter.charaLVL.ToString();
        cards[i].hp.text = BC.battleCharacter.HP.ToString();
        cards[i].mp.text = BC.battleCharacter.MP.ToString();
        cards[i].atk.text = BC.battleCharacter.ATK.ToString();
        cards[i].def.text = BC.battleCharacter.DEF.ToString();
        cards[i].spd.text = BC.battleCharacter.SPD.ToString();
        cards[i].intel.text = BC.battleCharacter.INTEL.ToString();
    }
}