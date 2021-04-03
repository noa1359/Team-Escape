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

    public Animator transitionAnim;

    // Start is called before the first frame update
    void Start()
    {
        transitionAnim = GameObject.Find("Panel").GetComponent<Animator>();
        playAgain.interactable = false;
        Continue.interactable = false;
        foreach (BattleCharacters bcInt in GM.gm.charactersInBattle)
        {
            GameObject go = Instantiate(characterIconPrefab);
            go.transform.SetParent(contentArea.transform);
            go.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
            CharacterIconController CIC = go.GetComponent<CharacterIconController>();
            CIC.profile.sprite = GM.gm.availableCharacters[bcInt.originalCharacterInt].characterProfile;
            CIC.element.sprite = GM.gm.availableCharacters[bcInt.originalCharacterInt].elementalType.icon;
            CIC.rarity.sprite = GM.gm.availableCharacters[bcInt.originalCharacterInt].rarityIcon;
            CIC.EXPbar.fillAmount =
                (GM.gm.availableCharacters[bcInt.originalCharacterInt].charaEXP - GM.gm.availableCharacters[bcInt.originalCharacterInt].lastLVLUp) /
                (GM.gm.availableCharacters[bcInt.originalCharacterInt].nextLVLUp - GM.gm.availableCharacters[bcInt.originalCharacterInt].lastLVLUp);
            CIC.level.text = GM.gm.availableCharacters[bcInt.originalCharacterInt].charaLVL.ToString();
            CIC.GMint = bcInt.originalCharacterInt;
            CIC.ABC = this;
            characterList.Add(go);
        }
    }

    public void PlayAgain()
    {
        StartCoroutine(LoadingBattleScene());
    }

    public void ContinueExploring()
    {
        StartCoroutine(LoadingScene());
    }

    IEnumerator LoadingBattleScene()
    {
        transitionAnim.SetTrigger("end");
        yield return new WaitForSeconds(1.5f);
        SceneManager.LoadScene(GM.gm.LastBattleScene);
    }

    IEnumerator LoadingScene()
    {
        transitionAnim.SetTrigger("end");
        yield return new WaitForSeconds(1.5f);
        SceneManager.LoadScene(GM.gm.LastExplorationScene);
    }
}
