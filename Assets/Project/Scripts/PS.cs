using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PS : MonoBehaviour
{
    public static PS ps;
    // Start is called before the first frame update
    void Awake()
    {
        if (ps == null)
        {
            ps = this;

            DontDestroyOnLoad(ps);
        }

        else
        {
            Destroy(this.gameObject);
        }
    }

    void OnApplicationQuit()
    {
        PlayerPrefs.Save();
        Save();
    }

    void Start()
    {
        //ES3.DeleteFile("File/SaveFile.es3");
        //PlayerPrefs.DeleteAll();
        PlayerPrefs.Save();
        if (PlayerPrefs.HasKey("maxEnergy") == false)
        {
            Save();
        }
        Load();
    }

    public void Save()
    {
        PlayerPrefs.SetInt("maxEnergy", GM.gm.maxEnergy);
        PlayerPrefs.SetInt("totalEnergy", GM.gm.totalEnergy);
        PlayerPrefs.SetString("PlayerName", GM.gm.playerName);
        PlayerPrefs.SetInt("playerLevel", GM.gm.playerLevel);
        PlayerPrefs.SetFloat("playerEXP", GM.gm.playerEXP);
        PlayerPrefs.SetFloat("playerLastLVLUp", GM.gm.playerLastLVLUp);
        PlayerPrefs.SetFloat("playerNextLVLUp", GM.gm.playerNextLVLUp);
        PlayerPrefs.SetString("LastExplorationScene", GM.gm.LastExplorationScene);
        PlayerPrefs.SetInt("gold", GM.gm.gold);
        PlayerPrefs.SetInt("gems", GM.gm.gems);
        PlayerPrefs.SetString("LastBattleScene", GM.gm.LastBattleScene);
        PlayerPrefs.SetInt("battleCharactersList", GM.gm.battleCharacters.Count);
        ES3.Save("availableCharacters", GM.gm.availableCharacters);
        ES3.Save("collectedWeapons", GM.gm.collectedWeapons);
        ES3.Save("collectedEvolveItems", GM.gm.collectedEvolveItems);
        ES3.Save("charactersInBattle", GM.gm.charactersInBattle);
    }

    void Load()
    {
        GM.gm.totalEnergy = PlayerPrefs.GetInt("totalEnergy");
        GM.gm.maxEnergy = PlayerPrefs.GetInt("maxEnergy");
        GM.gm.playerLevel = PlayerPrefs.GetInt("playerLevel");
        GM.gm.gold = PlayerPrefs.GetInt("gold");
        GM.gm.gems = PlayerPrefs.GetInt("gems");
        GM.gm.playerName = PlayerPrefs.GetString("PlayerName");
        GM.gm.LastExplorationScene = PlayerPrefs.GetString("LastExplorationScene");
        GM.gm.LastBattleScene = PlayerPrefs.GetString("LastBattleScene");
        GM.gm.playerEXP = PlayerPrefs.GetFloat("playerEXP");
        GM.gm.playerLastLVLUp = PlayerPrefs.GetFloat("playerLastLVLUp");
        GM.gm.playerNextLVLUp = PlayerPrefs.GetFloat("playerNextLVLUp");
        GM.gm.availableCharacters = ES3.Load("availableCharacters", GM.gm.availableCharacters);
        GM.gm.collectedWeapons = ES3.Load("collectedWeapons", GM.gm.collectedWeapons);
        GM.gm.collectedEvolveItems = ES3.Load("collectedEvolveItems", GM.gm.collectedEvolveItems);
        GM.gm.charactersInBattle = ES3.Load("charactersInBattle", GM.gm.charactersInBattle);
    }
}