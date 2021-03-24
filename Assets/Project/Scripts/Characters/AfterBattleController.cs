using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class AfterBattleController : MonoBehaviour
{
    public GameObject contentArea;
    public GameObject characterIconPrefab;
    public List<GameObject> characterList = new List<GameObject>();

    public Text lvl;
    public Text currentEXP;
    public Text EXPNextLevel;
    public Image EXPBar;
    public Text gold;
    public Text gems;
    public Button playAgain;
    public Button Continue;

    // Start is called before the first frame update
    void Start()
    {
        playAgain.interactable = false;
        Continue.interactable = false;
        CharacterIconController firstCharacter = null;
        foreach (int bcInt in GM.gm.battleCharacters)
        {
            GameObject go = Instantiate(characterIconPrefab);
            go.transform.SetParent(contentArea.transform);
            go.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
            CharacterIconController CIC = go.GetComponent<CharacterIconController>();
            CIC.profile.sprite = GM.gm.availableCharacters[bcInt].characterProfile;
            CIC.element.sprite = GM.gm.availableCharacters[bcInt].elementalType.icon;
            CIC.rarity.sprite = GM.gm.availableCharacters[bcInt].rarityIcon;
            CIC.EXPbar.fillAmount =
                (GM.gm.availableCharacters[bcInt].charaEXP - GM.gm.availableCharacters[bcInt].lastLVLUp) /
                (GM.gm.availableCharacters[bcInt].nextLVLUp - GM.gm.availableCharacters[bcInt].lastLVLUp);
            CIC.level.text = GM.gm.availableCharacters[bcInt].charaLVL.ToString();
            CIC.GMint = bcInt;
            CIC.ABC = this;
            characterList.Add(go);
        }
    }

    public void PlayAgain()
    {
        SceneManager.LoadScene(GM.gm.LastBattleScene);
    }
}
