using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CollideIntoBattle : MonoBehaviour
{
    public Animator transitionAnim;
    float probability;
    int maxEnemyNumber = 18;
    int tankCount = 0;
    int supportCount = 0;
    int longRangeCount = 0;
    int strategistCount = 0;
    public Elements randomElement1;
    public Elements randomElement2;
    public List<Enemy> enemiesInBattle = new List<Enemy>();
    public List<Enemy> elementalList = new List<Enemy>(); 
    

    // Start is called before the first frame update
    void Start()
    {
        GM.gm.LastExplorationScene = SceneManager.GetActiveScene().name;
        for (int i = 0; i < GM.gm.enemyDatabase.Count; i++)
        {
            if (GM.gm.enemyDatabase[i].elementalType == randomElement1 || GM.gm.enemyDatabase[i].elementalType == randomElement2)
            {
                elementalList.Add(GM.gm.enemyDatabase[i]);
            }
        }
        probability = Random.Range(1, maxEnemyNumber);
        for (int i = 0; i < probability; i++)
        {
            if (tankCount == 6 || supportCount == 6 || longRangeCount == 6 || strategistCount == 6)
            {
                continue;
            }
            int randomNum = Random.Range(0, elementalList.Count);
            enemiesInBattle.Add(elementalList[randomNum]);
            if (elementalList[randomNum].fighterClass.fightclassname == "Tank")
            {
                tankCount++;
            }
            else if (elementalList[randomNum].fighterClass.fightclassname == "Support")
            {
                supportCount++;
            }
            else if (elementalList[randomNum].fighterClass.fightclassname == "Strategist")
            {
                strategistCount++;
            }
            else if (elementalList[randomNum].fighterClass.fightclassname == "Long Range")
            {
                longRangeCount++;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnCollisionEnter2D(Collision2D col)
    {
        if(col.gameObject.CompareTag("Player"))
        {
            GM.gm.enemiesInBattle.Clear();
            foreach (Enemy enemy in enemiesInBattle)
            {
                GM.gm.enemiesInBattle.Add(enemy);
            }
            StartCoroutine(LoadingScene());
        }
    }

    IEnumerator LoadingScene()
    {
        transitionAnim.SetTrigger("end");
        yield return new WaitForSeconds(1.0f);
        SceneManager.LoadScene("Team Select");
    }
}
