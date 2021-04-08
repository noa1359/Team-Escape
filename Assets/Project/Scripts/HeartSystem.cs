using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HeartSystem : MonoBehaviour
{
    [SerializeField]
    private Text textEnergy;

    [SerializeField]
    private Text textMaxEnergy;

    [SerializeField]
    private Text textTimer;

    [SerializeField]
    int restoreDuration = 30;

    DateTime nextEnergyTime;
    DateTime lastAddedTime;
    // Start is called before the first frame update
    void Start()
    {
        PlayerPrefs.DeleteAll();
        Load();
        StartCoroutine(RestoreRoutine());
    }

    IEnumerator RestoreRoutine()
    {
        UpdateTimer();
        UpdateEnergy();

        while (GM.gm.totalEnergy < GM.gm.maxEnergy)
        {
            DateTime currentTime = DateTime.Now;
            DateTime counter = nextEnergyTime;
            bool isAdding = false;
            while (currentTime > counter)
            {
                if (GM.gm.totalEnergy < GM.gm.maxEnergy)
                {
                    isAdding = true;
                    GM.gm.totalEnergy++;
                    DateTime TimeToAdd = lastAddedTime > counter ? lastAddedTime : counter;
                    counter = AddDuration(TimeToAdd, restoreDuration);
                }
                else
                {
                    break;
                }
            }
            if (isAdding)
            {
                lastAddedTime = DateTime.Now;
                nextEnergyTime = counter;
            }
            UpdateTimer();
            UpdateEnergy();
            Save();
            yield return null;
        }
    }

    void UpdateTimer()
    {
        if (GM.gm.totalEnergy >= GM.gm.maxEnergy)
        {
            textTimer.enabled = false;
            return;
        }
        textTimer.enabled = true;
        TimeSpan t = nextEnergyTime - DateTime.Now;
        string value = String.Format("{0}:{1:D2}:{2:D2}", (int) t.TotalHours, t.Minutes, t.Seconds);
        textTimer.text = value;
    }

    void UpdateEnergy()
    {
        textMaxEnergy.text = GM.gm.maxEnergy.ToString();
        textEnergy.text = GM.gm.totalEnergy.ToString();
    }

    DateTime AddDuration(DateTime time, int duration)
    {
        //return time.AddSeconds(duration);
        return time.AddMinutes(duration);
    }

    void Load()
    {
        nextEnergyTime = StringToDate(PlayerPrefs.GetString("NextEnergyTime"));
        lastAddedTime = StringToDate(PlayerPrefs.GetString("LastAddedTime"));
    }

    void Save()
    {
        PlayerPrefs.SetString("NextEnergyTime", nextEnergyTime.ToString());
        PlayerPrefs.SetString("LastAddedTime", lastAddedTime.ToString());
    }

    DateTime StringToDate(string date)
    {
        if (String.IsNullOrEmpty(date))
        {
            return DateTime.Now.AddMinutes(restoreDuration);
        }
        return DateTime.Parse(date);
    }
}
