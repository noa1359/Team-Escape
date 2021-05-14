using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class EnemyStateManager : MonoBehaviour
{
    public int GMint;
    public Image elementIcon;
    public Image HPbar;
    public Image MPbar;
    public GameObject activeCharacter;
    public TMP_Text damageTaken;
    public GameObject Damage;
    public Vector2 HP;
    public Vector2 MP;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        HPbar.fillAmount = HP.x / HP.y;
        MPbar.fillAmount = MP.x / MP.y;
    }
}
