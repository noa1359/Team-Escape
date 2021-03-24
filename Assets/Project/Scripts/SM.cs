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

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.P))
        {
            GM.gm.playerEarnedEXP = EXPearned;
            SceneManager.LoadScene("AfterBattle");
        }
    }
}
