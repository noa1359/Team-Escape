using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerSelectionButton : MonoBehaviour
{
    public Image characterSprite;
    public Image gainedEXPBar;
    public string characterName;
    public BattleStateManager BSM;

    public void ClickIcon()
    {
        GM.gm.chosenCharacter.Clear();
        foreach (BattleCharacters players in GM.gm.charactersInBattle)
        {
            if (players.battleCharacter.characterName == characterName)
            {
                GameObject go = GameObject.Find(characterName + "Player");
                PlayerStateManager psm = go.GetComponent<PlayerStateManager>();
                psm.activeCharacter.SetActive(true);
                if (GM.gm.selectedAttack != null && GM.gm.selectedAttack.attackType != AttackType.Attack)
                {
                    if (GM.gm.selectedAttack.teamAmount == 6)
                    {
                        for (int i = 0; i < GM.gm.charactersInBattle.Count; i++)
                        {
                            GM.gm.chosenCharacter.Add(GM.gm.charactersInBattle[i].battleCharacter);
                            GameObject eo = GameObject.Find(GM.gm.charactersInBattle[i].battleCharacter.characterName + "Player");
                            PlayerStateManager PSM = eo.GetComponent<PlayerStateManager>();
                            PSM.activeCharacter.SetActive(true);
                        }
                        BSM.selectedEnemyPosition = go.transform.position;
                        break;
                    }
                    else if (GM.gm.selectedAttack.teamAmount == 1)
                    {
                        GM.gm.chosenCharacter.Add(players.battleCharacter);
                        BSM.selectedEnemyPosition = go.transform.position;
                    }
                    else if (GM.gm.selectedAttack.teamAmount > 1 && GM.gm.selectedAttack.teamAmount < 6)
                    {
                        BSM.selectedEnemyPosition = go.transform.position;
                        BSM.hitColliders = Physics2D.OverlapCircleAll(BSM.selectedEnemyPosition, GM.gm.selectedAttack.teamRadius, 1 << LayerMask.NameToLayer("BattleTeam"));
                        for (int i = 0; i < GM.gm.charactersInBattle.Count; i++)
                        {
                            GameObject eo = GameObject.Find(GM.gm.charactersInBattle[i].battleCharacter.characterName + "Player");
                            Collider2D collider2D = eo.GetComponent<CircleCollider2D>();
                            foreach (Collider2D item in BSM.hitColliders)
                            {
                                if (collider2D == item)
                                {
                                    PlayerStateManager PSM = eo.GetComponent<PlayerStateManager>();
                                    GM.gm.chosenCharacter.Add(GM.gm.charactersInBattle[i].battleCharacter);
                                    PSM.activeCharacter.SetActive(true);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    GM.gm.activeCharacter = players.battleCharacter;
                    BSM.selectedCharacterPosition = go.transform.position;
                }
            }
            else
            {
                GameObject go = GameObject.Find(players.battleCharacter.characterName + "Player");
                PlayerStateManager psm = go.GetComponent<PlayerStateManager>();
                psm.activeCharacter.SetActive(false);
            }
        }
    }
}
