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
        GM.gm.activeEnemy.Clear();
        for (int g = 0; g < GM.gm.enemiesInBattle.Count; g++)
        {
            GameObject go = GameObject.Find(GM.gm.enemiesInBattle[g].enemyName + "Enemy" + g.ToString());
            EnemyStateManager enemyStateManager = go.GetComponent<EnemyStateManager>();
            enemyStateManager.activeCharacter.SetActive(false);
        }

        for (int i = 0; i < GM.gm.enemiesInBattle.Count; i++)
        {
            if (GM.gm.enemiesInBattle[i].enemyName == enemyName && GMint == i)
            {
                GameObject go = GameObject.Find(enemyName + "Enemy" + GMint);
                EnemyStateManager esm = go.GetComponent<EnemyStateManager>();
                BSM.selectedEnemyPosition = go.transform.position;
                if (GM.gm.selectedAttack.enemyAmount == 18)
                {
                    for (int j = 0; j < GM.gm.enemiesInBattle.Count; j++)
                    {
                        GM.gm.activeEnemy.Add(GM.gm.enemiesInBattle[j]);
                        GameObject eo = GameObject.Find(GM.gm.enemiesInBattle[j].enemyName + "Enemy" + j.ToString());
                        EnemyStateManager ESM = eo.GetComponent<EnemyStateManager>();
                        ESM.activeCharacter.SetActive(true);
                    }
                    break;
                }
                else if (GM.gm.selectedAttack.enemyAmount > 1 && GM.gm.selectedAttack.enemyAmount < 18)
                {
                    BSM.hitColliders = Physics2D.OverlapCircleAll(BSM.selectedEnemyPosition, GM.gm.selectedAttack.enemyRadius, 1 << LayerMask.NameToLayer("BattleTeam"));
                    for (int j = 0; j < GM.gm.enemiesInBattle.Count; j++)
                    {
                        GameObject eo = GameObject.Find(GM.gm.enemiesInBattle[j].enemyName + "Enemy" + j.ToString());
                        Collider2D collider2D = eo.GetComponent<CircleCollider2D>();
                        foreach (Collider2D item in BSM.hitColliders)
                        {
                            if (collider2D == item)
                            {
                                EnemyStateManager ESM = eo.GetComponent<EnemyStateManager>();
                                GM.gm.activeEnemy.Add(GM.gm.enemiesInBattle[j]);
                                ESM.activeCharacter.SetActive(true);
                            }
                        }
                    }
                    break;
                }
                GM.gm.activeEnemy.Add(GM.gm.enemiesInBattle[i]);
                esm.activeCharacter.SetActive(true);
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
