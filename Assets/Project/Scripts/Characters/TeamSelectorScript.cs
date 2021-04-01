using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TeamSelectorScript : MonoBehaviour
{
    public List<GameObject> characterList = new List<GameObject>();
    public GameObject contentArea;
    public GameObject characterIconPrefab;
    public GameObject characterSelector;

    public List<Card> cards = new List<Card>();


    // Start is called before the first frame update
    void Start()
    {
        CharacterTeamController firstCharacter = null;
        for (int i = 0; i < GM.gm.availableCharacters.Count; i++)
        {
            GameObject go = Instantiate(characterIconPrefab);
            go.transform.SetParent(contentArea.transform);
            go.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
            CharacterTeamController CIC = go.GetComponent<CharacterTeamController>();
            CIC.profile.sprite = GM.gm.availableCharacters[i].characterProfile;
            CIC.element.sprite = GM.gm.availableCharacters[i].elementalType.icon;
            CIC.rarity.sprite = GM.gm.availableCharacters[i].rarityIcon;
            CIC.level.text = GM.gm.availableCharacters[i].charaLVL.ToString();
            CIC.GMint = i;
            CIC.TSS = this;
            characterList.Add(go);
            if (i == 0)
            {
                firstCharacter = CIC;
            }
        }
        firstCharacter.ClickIcon();
    }

}
