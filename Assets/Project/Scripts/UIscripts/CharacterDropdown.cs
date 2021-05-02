using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CharacterDropdown : MonoBehaviour
{
    public Dropdown dropdown;
    public Button button;
    List<string> dropOptions = new List<string>();
    int menuIndex;
    GameObject spawnObject;
    
    void Start()
    {
        dropdown.ClearOptions();

        for (int i = 0; i < GM.gm.availableCharacters.Count; i++)
        {
            dropOptions.Add(GM.gm.availableCharacters[i].characterName);
        }
        dropdown.AddOptions(dropOptions);
        SelectedCharacter();
    }

    void Update()
    {
        menuIndex = dropdown.value;
    }

    public void SelectedCharacter()
    {
        string value = dropdown.options[menuIndex].text;
        foreach (Character character in GM.gm.availableCharacters)
        {
            if (character.characterName == value)
            {
                Destroy(GameObject.Find(value));
                spawnObject = GameObject.Find("Player");
                GameObject go = Instantiate(character.characterSpriteVariant, spawnObject.transform.position, spawnObject.transform.rotation);
                go.transform.SetParent(spawnObject.transform);
                go.transform.position = new Vector3(spawnObject.transform.position.x, 865.265f, spawnObject.transform.position.z);
                go.name = character.characterName;
                PlayerController pc = spawnObject.GetComponent<PlayerController>();
                pc.anim = go.GetComponent<Animator>();
            }
            else
            {
                Destroy(GameObject.Find(character.characterName));
            }
        }
    }
}
