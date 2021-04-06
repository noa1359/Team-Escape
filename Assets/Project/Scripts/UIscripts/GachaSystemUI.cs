using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GachaSystemUI : MonoBehaviour
{
    public Animator transitionAnim;

    public void loadGachaScene()
    {
        StartCoroutine(LoadingGachaScene());
    }

    public void QuitGachaScene()
    {
        StartCoroutine(LoadingExplorationScene());
    }

    IEnumerator LoadingExplorationScene()
    {
        transitionAnim.SetTrigger("hide");
        yield return new WaitForSeconds(1.5f);
        SceneManager.LoadScene(GM.gm.LastExplorationScene);
    }

    IEnumerator LoadingGachaScene()
    {
        transitionAnim.SetTrigger("end");
        yield return new WaitForSeconds(1.5f);
        SceneManager.LoadScene("Gacha");
    }
}