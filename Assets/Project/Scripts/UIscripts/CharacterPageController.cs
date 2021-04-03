using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CharacterPageController : MonoBehaviour
{
    public GameObject contentArea;
    public GameObject characterIconPrefab;
    public List<GameObject> characterList = new List<GameObject>();

    [Space(20)]
    [Header("Chara Info")]
    public Image cardImage;
    public Text Name;
    public Text Element;
    public Text Class;

    [Space(20)]
    [Header("Level System")]
    public Text lvl;
    public Text EXPhave;
    public Text EXPneed;
    public Image EXPbar;

    [Space(20)]
    [Header("Stats")]
    public Text HP;
    public Text MP;
    public Text ATK;
    public Text DEF;
    public Text SPD;
    public Text INTEL;

    [Space(20)]
    [Header("Evolve System")]
    public int selectedCharacter;
    public Text evolveMessage;
    public List<Text> ItemHave = new List<Text>();
    public List<Text> ItemNeed = new List<Text>();
    public List<Image> ItemIcon = new List<Image>();
    public Button evolveButton;

    // Start is called before the first frame update
    void Start()
    {
        CharacterIconController firstCharacter = null;
        for (int i = 0; i < GM.gm.availableCharacters.Count; i++)
        {
            GameObject go = Instantiate(characterIconPrefab);
            go.transform.SetParent(contentArea.transform);
            go.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
            CharacterIconController CIC = go.GetComponent<CharacterIconController>();
            CIC.profile.sprite = GM.gm.availableCharacters[i].characterProfile;
            CIC.element.sprite = GM.gm.availableCharacters[i].elementalType.icon;
            CIC.rarity.sprite = GM.gm.availableCharacters[i].rarityIcon;
            EXPbar.fillAmount =
                (GM.gm.availableCharacters[i].charaEXP - GM.gm.availableCharacters[i].lastLVLUp) /
                (GM.gm.availableCharacters[i].nextLVLUp - GM.gm.availableCharacters[i].lastLVLUp);
            CIC.level.text = GM.gm.availableCharacters[i].charaLVL.ToString();
            CIC.GMint = i;
            CIC.CPC = this;
            characterList.Add(go);
            if (i == 0)
            {
                firstCharacter = CIC;
            }
        }
        firstCharacter.ClickIcon();
    }

    public void Evolve()
    {
        Character thisCharacter = GM.gm.availableCharacters[selectedCharacter];
        if (thisCharacter.charEvolve.nextEvolve == null)
        {
            thisCharacter.charEvolve = null;
        }
        else
        {
            for (int i = 0; i < thisCharacter.charEvolve.evolveItems.Count; i++)
            {
                EvolveItem ei = thisCharacter.charEvolve.evolveItems[i].itemNeeded;
                int inventoryInt = 0;
                bool inventoryFound = false;
                for (int j = 0; j < GM.gm.collectedEvolveItems.Count; j++)
                {
                    if (GM.gm.collectedEvolveItems[j].itemType == ei)
                    {
                        inventoryInt = j;
                        inventoryFound = true;
                        break;
                    }
                }
                if (inventoryFound)
                {
                    GM.gm.collectedEvolveItems[inventoryInt].itemAmount -= thisCharacter.charEvolve.evolveItems[i].evolveAmount;
                }
            }
            thisCharacter.charEvolve = thisCharacter.charEvolve.nextEvolve;
            characterList[selectedCharacter].GetComponent<CharacterIconController>().ClickIcon();
        }
    }
}
