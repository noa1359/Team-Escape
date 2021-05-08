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
        foreach (BattleCharacters players in GM.gm.charactersInBattle)
        {
            if (players.battleCharacter.characterName == characterName)
            {
                GameObject go = GameObject.Find(characterName + "Player");
                PlayerStateManager psm = go.GetComponent<PlayerStateManager>();
                if (GM.gm.selectedAttack != null)
                {
                    if (GM.gm.selectedAttack.teamAmount > 0)
                    {
                        GM.gm.chosenCharacter = players.battleCharacter;
                        BSM.selectedEnemyPosition = go.transform.position;
                    }
                }
                else
                {
                    GM.gm.activeCharacter = players.battleCharacter;
                    BSM.selectedCharacterPosition = go.transform.position;
                }
                psm.activeCharacter.SetActive(true);
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
