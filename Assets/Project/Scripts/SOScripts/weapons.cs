using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[CreateAssetMenu(fileName = "New Weapon", menuName = "Fix/Weapons")]
public class weapons : ScriptableObject
{
    public string WeaponName;
    [TextArea(3, 10)]
    public string Description;
    [Header("Stats")]
    public int DamageAmount;
    public float weaponRange;
}
