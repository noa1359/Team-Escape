using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InstantiateGameObject : MonoBehaviour
{
    public GameObject prefab;
    public Animator animator;

    public void instatiatePrefab()
    {
        GameObject go = Instantiate(prefab);
    }

    public void DestroyYou()
    {
        StartCoroutine(AnimationGoBrr());
    }

    IEnumerator AnimationGoBrr()
    {
        animator.SetTrigger("hide");
        yield return new WaitForSeconds(1.5f);
        Destroy(prefab);
    }
}
