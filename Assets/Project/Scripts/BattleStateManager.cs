using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum BattleStates { Setup, PlayerSelect, PlayerAction, EnemySelect, EnemyAction, End}
public enum BattleSide { Player, Enemy}

public class BattleStateManager : MonoBehaviour
{
    public BattleStates currentState;
    public BattleSide currentSide;

    int frontPosition = 1;
    int midPosition = 1;
    int backPosition = 1;

    public GameObject playerGameObject;
    public GameObject enemyGameObject;

    int playerSPD;
    int enemySPD;

    // Start is called before the first frame update
    void Start()
    {
        WhoStarts();
        currentState = BattleStates.Setup;
    }

    // Update is called once per frame
    void Update()
    {
        switch (currentState)
        {
            case BattleStates.Setup:
            SetupBattle();
            break;

            case BattleStates.PlayerSelect:
            break;

            case BattleStates.PlayerAction:
            break;

            case BattleStates.EnemySelect:
            break;

            case BattleStates.EnemyAction:
            break;

            case BattleStates.End:
            break;
        }
    }

    void SetupBattle()
    {
        foreach (BattleCharacters players in GM.gm.charactersInBattle)
        {
            string playerPosition = "";
            if (players.battleCharacter.fighterClass.fightclassname == "Tank")
            {
                playerPosition = "PlayerFront" + frontPosition;
                frontPosition++;
            }
            else if (players.battleCharacter.fighterClass.fightclassname == "Support" || players.battleCharacter.fighterClass.fightclassname == "Strategist")
            {
                playerPosition = "PlayerMid" + midPosition;
                midPosition++;
            }
            else if (players.battleCharacter.fighterClass.fightclassname == "Long Range")
            {
                playerPosition = "PlayerBack" + backPosition;
                backPosition++;
            }

            GameObject spawnObject = GameObject.Find(playerPosition);
            GameObject po = Instantiate(playerGameObject, spawnObject.transform.position, Quaternion.identity);
            GameObject characterSprite = Instantiate(players.battleCharacter.characterSpriteVariant, spawnObject.transform.position, Quaternion.identity);
            characterSprite.transform.SetParent(po.transform);
            po.name = players.battleCharacter.characterName;
            PlayerStateManager psm = po.GetComponent<PlayerStateManager>();
            psm.elementIcon.sprite = players.battleCharacter.elementalType.icon;
            psm.GMint = players.originalCharacterInt;
            psm.HP = new Vector2 (players.battleCharacter.HP, players.battleCharacter.HP);
            psm.MP = new Vector2 (players.battleCharacter.MP, players.battleCharacter.MP);
            psm.HPbar.fillAmount = psm.HP.x / psm.HP.y;
            psm.MPbar.fillAmount = psm.MP.x / psm.MP.y;
        }

        foreach (Enemy enemies in GM.gm.enemiesInBattle)
        {
            string enemyPosition = "";
            if (enemies.fighterClass.fightclassname == "Tank")
            {
                enemyPosition = "EnemyFront" + frontPosition;
                frontPosition++;
            }
            else if (enemies.fighterClass.fightclassname == "Support" || enemies.fighterClass.fightclassname == "Strategist")
            {
                enemyPosition = "EnemyMid" + midPosition;
                midPosition++;
            }
            else if (enemies.fighterClass.fightclassname == "Long Range")
            {
                enemyPosition = "EnemyBack" + backPosition;
                backPosition++;
            }

            GameObject spawnObject = GameObject.Find(enemyPosition);
            GameObject eo = Instantiate(enemyGameObject, spawnObject.transform.position, Quaternion.identity);
            GameObject characterSprite = Instantiate(enemies.characterSpriteVariant, spawnObject.transform.position, Quaternion.identity);
            characterSprite.transform.SetParent(eo.transform);
            characterSprite.transform.Rotate(0,-180f,0);
            eo.name = enemies.enemyName;
            EnemyStateManager esm = eo.GetComponent<EnemyStateManager>();
            esm.elementIcon.sprite = enemies.elementalType.icon;
            esm.HP = new Vector2 (enemies.HP, enemies.HP);
            esm.MP = new Vector2 (enemies.MP, enemies.MP);
            esm.HPbar.fillAmount = esm.HP.x / esm.HP.y;
            esm.MPbar.fillAmount = esm.MP.x / esm.MP.y;
        }

        if (currentSide == BattleSide.Player)
        {
            currentState = BattleStates.PlayerSelect;
        }
        else
        {
            currentState = BattleStates.EnemySelect;
        }
    }

    void WhoStarts()
    {
        foreach (BattleCharacters players in GM.gm.charactersInBattle)
        {
            playerSPD += players.battleCharacter.SPD;
        }

        foreach (Enemy enemies in GM.gm.enemiesInBattle)
        {
            enemySPD += enemies.SPD;
        }

        playerSPD = playerSPD / GM.gm.charactersInBattle.Count;
        enemySPD = enemySPD / GM.gm.enemiesInBattle.Count;

        if (playerSPD > enemySPD)
        {
            currentSide = BattleSide.Player;
        }
        else
        {
            currentSide = BattleSide.Enemy;
        }
    }
}
