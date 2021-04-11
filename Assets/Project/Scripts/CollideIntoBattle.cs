using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CollideIntoBattle : MonoBehaviour
{
    public Animator transitionAnim;

    // Start is called before the first frame update
    void Start()
    {
        GM.gm.LastExplorationScene = SceneManager.GetActiveScene().name;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnCollisionEnter2D(Collision2D col)
    {
        if(col.gameObject.CompareTag("Player"))
        {
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
