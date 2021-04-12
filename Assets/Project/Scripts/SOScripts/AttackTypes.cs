using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum AttackType { Attack, Support, Defence, Strategist}
public enum Curses { Curse, Poison, Paralysed, none}
public enum Status { HP, MP, ATK, DEF, SPD, INTEL}

[CreateAssetMenu(fileName = "New attack", menuName = "Fix/Attack")]
public class AttackTypes : ScriptableObject
{
    ///Straight Flush - reveals one enemy next attack. 16 MP.
    ///Four of A Kind - Reveals enemies on the same area next attack. Costs 35 MP.

    [Header("Basic Information")]
    public string attackName;
    [TextArea(3, 10)]
    public string Description;
    public AttackType attackType;
    public int MPCost;
    public int turnAmount;
    [Header("Attack")]
    public int attackDamage;
    public int enemyAmount;
    public float enemyRadius;
    public Curses curses;
    [Header("Support")]
    public int teamAmount;
    public float teamRadius;
    public float statusStrengthen;
    public Status statusName;
    [Header("Defence")]
    public int HPAmount;
}