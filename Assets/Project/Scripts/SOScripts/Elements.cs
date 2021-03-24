using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new element", menuName = "Fix/element")]
public class Elements : ScriptableObject
{
    public string elementalname;
    public Sprite icon;
    public Elements Strongerthan;
    public Elements Weakerthan;
}
