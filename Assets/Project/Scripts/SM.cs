using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SM : MonoBehaviour
{
    public int EXPearned;

    void Start()
    {
        GM.gm.LastBattleScene = SceneManager.GetActiveScene().name;
    }

    public void LoadAfterScene()
    {
        GM.gm.playerEarnedEXP = EXPearned;
        SceneManager.LoadScene("AfterBattle");
    }
}
