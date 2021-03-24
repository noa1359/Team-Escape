using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HomeScreenUIUpdate : MonoBehaviour
{
    public GameObject contentArea;
    public GameObject characterProfilePicPrefab;
    public List<GameObject> characterList = new List<GameObject>();
    public int selectedCharacter;

    [Space(20)]
    [Header("Player Info")]
    public Text level;
    public Text coins;
    public Text gems;
    public Image profilePic;

    // Start is called before the first frame update
    void Start()
    {
        ProfilePicController firstCharacter = null;
        for (int i = 0; i < GM.gm.availableCharacters.Count; i++)
        {
            GameObject go = Instantiate(characterProfilePicPrefab);
            go.transform.SetParent(contentArea.transform);
            go.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
            ProfilePicController PPC = go.GetComponent<ProfilePicController>();
            PPC.ProfilePic.sprite = GM.gm.availableCharacters[i].profilePic;
            PPC.GMint = i;
            PPC.HSU = this;
            characterList.Add(go);
            if (i == 0)
            {
                firstCharacter = PPC;
            }
        }
        firstCharacter.ClickIcon();
    }

    // Update is called once per frame
    void Update()
    {
        level.text = GM.gm.playerLevel.ToString();
        coins.text = GM.gm.gold.ToString();
        gems.text = GM.gm.gems.ToString();
    }
}
