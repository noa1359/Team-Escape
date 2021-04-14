using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum AttackType { Attack, Support, Defence, Strategist}
public enum Curses { Curse, Poison, Paralysed, none, Bind, Charm, Stun, Evade, NegateEvade}
public enum Status { HP, MP, ATK, DEF, SPD, INTEL}

[CreateAssetMenu(fileName = "New attack", menuName = "Fix/Attack")]
public class AttackTypes : ScriptableObject
{
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
    public float statusWeaken;
    public Status status;
    public float secondStatusWeaken;
    public Status secondStatus;
    public float chance = 1f;
    public Curses effects;
    [Header("Support")]
    public int teamAmount;
    public float teamRadius;
    public float statusStrengthen;
    public Status statusName;
    public float secondStatusStrengthen;
    public Status secondStatusName;
    public float chances = 1f;
    [Header("Defence")]
    public int HPAmount;
}