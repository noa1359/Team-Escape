using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new Fighter Class", menuName = "Fix/FighterClass")]
public class FighterClass : ScriptableObject
{
    public string fightclassname;
    public int HPGrowth;
    public int MPGrowth;
    public int ATKGrowth;
    public int DEFGrowth;
    public int SPDGrowth;
    public int INTELGrowth;
}
