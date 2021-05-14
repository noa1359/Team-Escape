using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using CodeMonkey.Utils;

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

    public GameObject contentAreaPlayer;
    public GameObject contentAreaEnemy;

    public GameObject attackSystem;
    public GameObject playerSelectionButton;
    public GameObject enemySelectionButton;
    public Button Selected;
    public Button EndTurn;

    public List<GameObject> characterList = new List<GameObject>();
    public List<GameObject> enemyList = new List<GameObject>();

    public Vector2 selectedEnemyPosition;
    public Vector2 selectedCharacterPosition;
    public GameObject Line;
    public LineRenderer lineRenderer;
    public Color strongerColor;
    public Color weakerColor;
    public Color neutralColor;

    public Collider2D[] hitColliders;

    int playerSPD;
    int enemySPD;

    public PlayerSelectionButton PSB;
    public EnemySelectionButton ESB;
    public BattleWindow BW;

    // Start is called before the first frame update
    void Start()
    {
        currentSide = BattleSide.Player;
        //WhoStarts();
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
            PlayerSelectAction();
            break;

            case BattleStates.PlayerAction:
            showActions();
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
        PlayerSelectionButton firstCharacter = null;
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
            po.name = players.battleCharacter.characterName + "Player";
            PlayerStateManager psm = po.GetComponent<PlayerStateManager>();
            psm.elementIcon.sprite = players.battleCharacter.elementalType.icon;
            psm.GMint = players.originalCharacterInt;
            psm.HP = new Vector2 (players.battleCharacter.HP, players.battleCharacter.HP);
            psm.MP = new Vector2 (players.battleCharacter.MP, players.battleCharacter.MP);
            psm.HPbar.fillAmount = psm.HP.x / psm.HP.y;
            psm.MPbar.fillAmount = psm.MP.x / psm.MP.y;

            GameObject pb = Instantiate(playerSelectionButton);
            pb.transform.SetParent(contentAreaPlayer.transform);
            pb.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
            PlayerSelectionButton PSB = pb.GetComponent<PlayerSelectionButton>();
            PSB.characterSprite.sprite = players.battleCharacter.profilePic;
            PSB.gainedEXPBar.fillAmount = 0;
            PSB.characterName = players.battleCharacter.characterName;
            PSB.BSM = this;
            characterList.Add(pb);
            if (players.originalCharacterInt == 0)
            {
                firstCharacter = PSB;
            }
        }
        firstCharacter.ClickIcon();

        for (int i = 0; i < GM.gm.enemiesInBattle.Count; i++)
        {
            string enemyPosition = "";
            if (GM.gm.enemiesInBattle[i].fighterClass.fightclassname == "Tank")
            {
                enemyPosition = "EnemyFront" + frontPosition;
                frontPosition++;
            }
            else if (GM.gm.enemiesInBattle[i].fighterClass.fightclassname == "Support" || GM.gm.enemiesInBattle[i].fighterClass.fightclassname == "Strategist")
            {
                enemyPosition = "EnemyMid" + midPosition;
                midPosition++;
            }
            else if (GM.gm.enemiesInBattle[i].fighterClass.fightclassname == "Long Range")
            {
                enemyPosition = "EnemyBack" + backPosition;
                backPosition++;
            }

            GameObject spawnObject = GameObject.Find(enemyPosition);
            GameObject eo = Instantiate(enemyGameObject, spawnObject.transform.position, Quaternion.identity);
            GameObject characterSprite = Instantiate(GM.gm.enemiesInBattle[i].characterSpriteVariant, spawnObject.transform.position, Quaternion.identity);
            characterSprite.transform.SetParent(eo.transform);
            characterSprite.transform.Rotate(0,-180f,0);
            eo.name = GM.gm.enemiesInBattle[i].enemyName + "Enemy" + i.ToString();
            EnemyStateManager esm = eo.GetComponent<EnemyStateManager>();
            esm.GMint = i;
            esm.elementIcon.sprite = GM.gm.enemiesInBattle[i].elementalType.icon;
            esm.HP = new Vector2 (GM.gm.enemiesInBattle[i].HP, GM.gm.enemiesInBattle[i].HP);
            esm.MP = new Vector2 (GM.gm.enemiesInBattle[i].MP, GM.gm.enemiesInBattle[i].MP);
            esm.HPbar.fillAmount = esm.HP.x / esm.HP.y;
            esm.MPbar.fillAmount = esm.MP.x / esm.MP.y;

            GameObject eb = Instantiate(enemySelectionButton);
            eb.transform.SetParent(contentAreaEnemy.transform);
            eb.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
            EnemySelectionButton ESB = eb.GetComponent<EnemySelectionButton>();
            ESB.characterSprite.sprite = GM.gm.enemiesInBattle[i].profilePic;
            ESB.enemyName = GM.gm.enemiesInBattle[i].enemyName;
            ESB.GMint = i;
            ESB.BSM = this;
            enemyList.Add(eb);
            
        }

        if (currentSide == BattleSide.Player)
        {
            InstantiateBattleWindow();
            currentState = BattleStates.PlayerSelect;
        }
        else
        {
            currentState = BattleStates.EnemySelect;
        }
    }

    void PlayerSelectAction()
    {
        EndTurn.interactable = true;
        if (GM.gm.selectedAttack != null)
        {
            if (GM.gm.selectedAttack.enemyAmount > 0 && GM.gm.selectedAttack.teamAmount <= 0)
            {
                GM.gm.chosenCharacter.Clear();
                foreach (GameObject item in enemyList)
                {
                    EnemySelectionButton ESB = item.GetComponent<EnemySelectionButton>();
                    ESB.button.interactable = true;
                }
                
                if (GM.gm.selectedAttack.enemyAmount == 1 && GM.gm.activeEnemy.Count != 0)
                {
                    if (GM.gm.activeCharacter.elementalType.Strongerthan == GM.gm.activeEnemy[GM.gm.activeEnemy.Count-1].elementalType)
                    {
                        this.lineRenderer.SetColors(strongerColor, strongerColor);
                    }
                    else if (GM.gm.activeCharacter.elementalType.Weakerthan == GM.gm.activeEnemy[GM.gm.activeEnemy.Count-1].elementalType)
                    {
                        this.lineRenderer.SetColors(weakerColor, weakerColor);
                    }
                    else
                    {
                        this.lineRenderer.SetColors(neutralColor, neutralColor);
                    }
                }
                else
                {
                    this.lineRenderer.SetColors(neutralColor, neutralColor);
                }
                
                if (GM.gm.activeEnemy.Count != 0)
                {
                    Selected.interactable = true;
                    this.DrawLine(selectedCharacterPosition, selectedEnemyPosition);
                }
            }
            else if (GM.gm.selectedAttack.teamAmount > 0 && GM.gm.selectedAttack.enemyAmount <= 0)
            {
                GM.gm.activeEnemy.Clear();
                foreach (GameObject item in enemyList)
                {
                    EnemySelectionButton ESB = item.GetComponent<EnemySelectionButton>();
                    ESB.button.interactable = false;
                }

                this.lineRenderer.SetColors(neutralColor, neutralColor);
                if (GM.gm.chosenCharacter.Count != 0)
                {
                    Selected.interactable = true;
                    this.DrawLine(selectedCharacterPosition, selectedEnemyPosition);
                }
                for (int i = 0; i < GM.gm.enemiesInBattle.Count; i++)
                {
                    GameObject go = GameObject.Find(GM.gm.enemiesInBattle[i].enemyName + "Enemy" + i.ToString());
                    EnemyStateManager esm = go.GetComponent<EnemyStateManager>();
                    esm.activeCharacter.SetActive(false);
                }
            }
            else if (GM.gm.selectedAttack.teamAmount > 0 && GM.gm.selectedAttack.enemyAmount > 0)
            {
                 foreach (GameObject item in enemyList)
                {
                    EnemySelectionButton ESB = item.GetComponent<EnemySelectionButton>();
                    ESB.button.interactable = true;
                }

                GM.gm.chosenCharacter.Add(GM.gm.activeCharacter);

                if (GM.gm.selectedAttack.enemyAmount == 1 && GM.gm.activeEnemy.Count != 0) 
                {
                    if (GM.gm.activeCharacter.elementalType.Strongerthan == GM.gm.activeEnemy[GM.gm.activeEnemy.Count-1].elementalType)
                    {
                        this.lineRenderer.SetColors(strongerColor, strongerColor);
                    }
                    else if (GM.gm.activeCharacter.elementalType.Weakerthan == GM.gm.activeEnemy[GM.gm.activeEnemy.Count-1].elementalType)
                    {
                        this.lineRenderer.SetColors(weakerColor, weakerColor);
                    }
                    else
                    {
                        this.lineRenderer.SetColors(neutralColor, neutralColor);
                    }
                }
                else
                {
                    this.lineRenderer.SetColors(neutralColor, neutralColor);
                }
                
                if (GM.gm.activeEnemy.Count != 0)
                {
                    Selected.interactable = true;
                    this.DrawLine(selectedCharacterPosition, selectedEnemyPosition);
                }
            }
            else
            {
                foreach (GameObject item in enemyList)
                {
                    EnemySelectionButton ESB = item.GetComponent<EnemySelectionButton>();
                    ESB.button.interactable = false;
                }
            }
        }
    }

    public void doneChoosing()
    {
        for (int i = 0; i < GM.gm.activeEnemy.Count; i++)
        {
            BattleEnemy battleEnemy = new BattleEnemy(GM.gm.enemyInt[i], GM.gm.activeEnemy[i]);
            GM.gm.battleEnemy.Add(battleEnemy);
        }
        GM.gm.playerStrategy.Add(new playerStrategy(GM.gm.activeCharacter, GM.gm.selectedAttack, GM.gm.battleEnemy, GM.gm.chosenCharacter));
        GameObject go = Instantiate(Line);
        go.name = GM.gm.selectedAttack.attackName;
        GM.gm.selectedAttack = null;
        for (int i = 0; i < GM.gm.charactersInBattle.Count; i++)
        {
            int count = 0;
            foreach (playerStrategy player in GM.gm.playerStrategy)
            {
                if (player.activeCharacter == GM.gm.charactersInBattle[i].battleCharacter)
                {
                    count++;
                }
            }

            if (count > 1)
            {
                count--;
                for (int j = 0; j < GM.gm.playerStrategy.Count; j++)
                {
                    if (GM.gm.playerStrategy[j].activeCharacter == GM.gm.charactersInBattle[i].battleCharacter)
                    {
                        Destroy(GameObject.Find(GM.gm.playerStrategy[j].selectedAttack.attackName));
                        GM.gm.playerStrategy.Remove(GM.gm.playerStrategy[j]);
                        count--;
                    }

                    if (count == 0)
                    {
                        break;
                    }
                }
            }
        }
        Selected.interactable = false;
    }

    public void endTurn()
    {
        for (int i = 0; i < GM.gm.charactersInBattle.Count; i++)
        {
            foreach (playerStrategy player in GM.gm.playerStrategy)
            {
                if (player.activeCharacter == GM.gm.charactersInBattle[i].battleCharacter)
                {
                    GameObject go = GameObject.Find(player.activeCharacter.characterName + "Player");
                    PlayerStateManager psm = go.GetComponent<PlayerStateManager>();
                    psm.MP.x = psm.MP.x - player.selectedAttack.MPCost;
                    break;
                }
            }
        }
        currentState = BattleStates.PlayerAction;
    }

    void DrawLine(Vector2 Starter, Vector2 Target)
    {
        Vector3[] pointsArray = new Vector3[2];
        pointsArray[0] = (Vector3)Starter;
        pointsArray[1] = (Vector3)Target;
        this.lineRenderer.SetPositions(pointsArray);
    }

    void showActions()
    {
        for (int g = 0; g < GM.gm.enemiesInBattle.Count; g++)
        {
            GameObject go = GameObject.Find(GM.gm.enemiesInBattle[g].enemyName + "Enemy" + g.ToString());
            EnemyStateManager enemyStateManager = go.GetComponent<EnemyStateManager>();
            enemyStateManager.activeCharacter.SetActive(false);
        }
        EndTurn.interactable = false;
        DestroyBattleWindow();

        foreach (playerStrategy strategy in GM.gm.playerStrategy)
        {
            if (strategy.selectedAttack.attackType == AttackType.Attack)
            {
                for (int i = 0; i < strategy.activeEnemy.Count; i++)
                {
                    StartCoroutine(Attack(strategy.selectedAttack.turnAmount, strategy.selectedAttack.attackDamage, strategy.activeEnemy[i].originalEnemyInt, strategy.activeEnemy[i].battleEnemy, strategy.activeCharacter));
                }
            }

            if (strategy.selectedAttack.attackType == AttackType.Support)
            {
                
            }

            if (strategy.selectedAttack.attackType == AttackType.Defence)
            {
                
            }

            if (strategy.selectedAttack.attackType == AttackType.Strategist)
            {
                
            }
        }
        currentState = BattleStates.EnemySelect;
    }

    IEnumerator Attack(int turnAmount, int attackDamage, int enemyInt, Enemy enemy, Character character)
    {
        GameObject go = GameObject.Find(enemy.enemyName + "Enemy" + enemyInt.ToString());
        EnemyStateManager ESM = go.GetComponent<EnemyStateManager>();
        ESM.HP.x -= attackDamage;
        if (character.elementalType.Strongerthan == enemy.elementalType)
        {
            ESM.HP.x -= attackDamage * 0.4f;
            ESM.damageTaken.text = (attackDamage + (int)(attackDamage * 0.4f)).ToString();
            ESM.Damage.SetActive(true);
            yield return new WaitForSeconds(6f);
            ESM.Damage.SetActive(false);
        }
        else if (character.elementalType.Weakerthan == enemy.elementalType)
        {
            ESM.HP.x += attackDamage * 0.4f;
            ESM.damageTaken.text = (attackDamage - (int)(attackDamage * 0.4f)).ToString();
            ESM.Damage.SetActive(true);
            yield return new WaitForSeconds(6f);
            ESM.Damage.SetActive(false);
        }
        else
        {
            ESM.damageTaken.text = (attackDamage).ToString();
            ESM.Damage.SetActive(true);
            yield return new WaitForSeconds(6f);
            ESM.Damage.SetActive(false);
        }
        
        if (turnAmount > 1)
        {
            ///We'll think later.
        }

        if (ESM.HP.x == 0)
        {
            Destroy(go);
            GM.gm.enemiesInBattle.Remove(enemy);
            enemyListUpdate();
        }
        yield return new WaitForSeconds(1f);
    }

    void enemyListUpdate()
    {
        enemyList.Clear();
        for (int i = 0; i < GM.gm.enemiesInBattle.Count; i++)
        {
            GameObject eb = Instantiate(enemySelectionButton);
            eb.transform.SetParent(contentAreaEnemy.transform);
            eb.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
            EnemySelectionButton ESB = eb.GetComponent<EnemySelectionButton>();
            ESB.characterSprite.sprite = GM.gm.enemiesInBattle[i].profilePic;
            ESB.enemyName = GM.gm.enemiesInBattle[i].enemyName;
            ESB.GMint = i;
            ESB.BSM = this;
            enemyList.Add(eb);
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

    void InstantiateBattleWindow()
    {
        contentAreaEnemy.SetActive(true);
        contentAreaPlayer.SetActive(true);
        GameObject go = Instantiate(attackSystem);
        BattleWindow BW = go.GetComponent<BattleWindow>();
    }

    void DestroyBattleWindow()
    {
        contentAreaEnemy.SetActive(false);
        contentAreaPlayer.SetActive(false);
        Destroy(GameObject.Find(attackSystem.name + "(Clone)"));
    }
}
