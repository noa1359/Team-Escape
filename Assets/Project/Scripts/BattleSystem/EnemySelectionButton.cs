using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EnemySelectionButton : MonoBehaviour
{
    public Button button;
    public Image characterSprite;
    public int GMint;
    public string enemyName;
    public BattleStateManager BSM;

    public void ClickIcon()
    {
        for (int i = 0; i < GM.gm.enemiesInBattle.Count; i++)
        {
            if (GM.gm.enemiesInBattle[i].enemyName == enemyName && GMint == i)
            {
                GameObject go = GameObject.Find(enemyName + "Enemy" + GMint);
                EnemyStateManager esm = go.GetComponent<EnemyStateManager>();
                GM.gm.activeEnemy = GM.gm.enemiesInBattle[i];
                esm.activeCharacter.SetActive(true);
                BSM.selectedEnemyPosition = go.transform.position;
            }
            else
            {
                GameObject go = GameObject.Find(GM.gm.enemiesInBattle[i].enemyName + "Enemy" + i.ToString());
                EnemyStateManager esm = go.GetComponent<EnemyStateManager>();
                esm.activeCharacter.SetActive(false);
            }
        }
    }
}
