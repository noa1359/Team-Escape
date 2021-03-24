using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New EvolveSO", menuName = "Fix/EvolveSO")]
public class EvolveSO : ScriptableObject
{
    public int evolveAtLVL;
    public List<EvolveNeeded> evolveItems = new List<EvolveNeeded>();
    public EvolveSO nextEvolve;
}
