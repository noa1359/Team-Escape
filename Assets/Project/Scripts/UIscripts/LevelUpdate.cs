using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelUpdate : MonoBehaviour
{
    [Space(20)]
    [Header("Player Info")]
    public Text level;
    public Text coins;
    public Text gems;
    public Image profilePic;

    // Update is called once per frame
    void Update()
    {
        level.text = GM.gm.playerLevel.ToString();
        coins.text = GM.gm.gold.ToString();
        gems.text = GM.gm.gems.ToString();
    }
}
