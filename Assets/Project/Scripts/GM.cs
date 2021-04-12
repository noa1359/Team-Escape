using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum _rarity { R, SR, SSR}

[System.Serializable]
public class EvolveNeeded
{
    public EvolveItem itemNeeded;
    public int evolveAmount;
}

[System.Serializable]
public class CollectedEvolveItems
{
    public EvolveItem itemType;
    public int itemAmount;
    public CollectedEvolveItems(EvolveItem it, int ia)
    {
        this.itemType = it;
        this.itemAmount = ia;
    }
}

[System.Serializable]
public class Card
{
    public Toggle toggle;
    public Image cardImage;

    public Text lvl;
    public Text hp;
    public Text mp;
    public Text atk;
    public Text def;
    public Text spd;
    public Text intel;

    public GameObject misgeret;
    public GameObject stats;
}

[System.Serializable]
public class BattleCharacters
{
    public int originalCharacterInt;
    public Character battleCharacter;
    public BattleCharacters(int oc, Character bc)
    {
        this.originalCharacterInt = oc;
        this.battleCharacter = bc;
    }
}

[System.Serializable]
public class Character
{
    public string characterName;
    public Elements elementalType;
    public FighterClass fighterClass;
    public _rarity rarity;

    public Sprite characterProfile;
    public Sprite pic;
    public Sprite CardImage;
    public Sprite rarityIcon;
    public Sprite profilePic;

    public int charaLVL = 1;
    public float charaEXP = 0f;
    public float lastLVLUp = 0f;
    public float nextLVLUp = 110f;

    public int HP;
    public int MP;
    public int ATK;
    public int DEF;
    public int SPD;
    public int INTEL;
    [Header("Evolve System")]
    [Space(20)]
    public EvolveSO charEvolve;

    [Header("Character Equipment")]
    [Space(20)]
    public weapons EquippedWeapon;
    public List<AttackTypes> AttackList = new List<AttackTypes>();
    
    [Header("Charater Earning")]
    [Space(20)]
    public float earnedEXP;

}

public class GM : MonoBehaviour
{
    public static GM gm;
    public string playerName;
    public int playerLevel;
    public float playerEXP;
    public int maxEnergy = 10;
    public int totalEnergy = 10;
    public float playerLastLVLUp = 0f;
    public float playerNextLVLUp = 100f;
    public List<Enemy> enemyDatabase = new List<Enemy>();
    public List<Character> charactersDatabase = new List<Character>();
    public List<Character> availableCharacters = new List<Character>();
    public Character selectedCharacter;
    public List<Character> characterList = new List<Character>();
    public List<Character> dupeList = new List<Character>();
    public string LastExplorationScene;
    [Header("Inventory")]
    [Space(20)]
    public int gold;
    public int gems;
    public List<weapons> collectedWeapons = new List<weapons>();
    public List<CollectedEvolveItems> collectedEvolveItems = new List<CollectedEvolveItems>();
    [Header("Battle Info")]
    [Space(20)]
    public string LastBattleScene;
    public List<BattleCharacters> charactersInBattle = new List<BattleCharacters>(); //save
    public List<int> battleCharacters = new List<int>();
    public int currectCharacterInt = 0;
    public int playerEarnedEXP;
    public List<weapons> earnedWeapons;
    public List<CollectedEvolveItems> earnedEvItems;
    public int earnedGold;
    public int earnedGems;


    private void Awake()
    {
        if (gm == null)
        {
            gm = this;

            DontDestroyOnLoad(gm);
        }

        else
        {
            Destroy(this.gameObject);
        }
    }
}
