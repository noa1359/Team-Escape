using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Advertisements;

[RequireComponent(typeof(Button))]
public class WatchAnAd : MonoBehaviour, IUnityAdsListener
{
    #if UNITY_IOS
    private string gameId = "4084440";
    #elif UNITY_ANDROID
    private string gameId = "4084441";
    #endif

    string mySurfacingId = "Rewarded_Android";
    public bool testMode = true;
    public string myAdStatus = "";
    public Button myButton;

    void Start()
    {
        myButton = GetComponent<Button>();
        myButton.interactable = Advertisement.IsReady(mySurfacingId); 

        // Map the ShowRewardedVideo function to the button’s click listener:
        if(myButton)
            myButton.onClick.AddListener(ShowRewardedVideo);

        // Initialize the Ads listener and service:
        Advertisement.AddListener(this);
        Advertisement.Initialize(gameId, true);
    }

    public void ShowRewardedVideo()
    {
        Advertisement.Show(mySurfacingId);
    }

    // Implement IUnityAdsListener interface methods:
    public void OnUnityAdsReady(string placementId)
    {
        // If the ready Placement is rewarded, activate the button: 
        if(placementId == mySurfacingId)
        {        
            myButton.interactable = true;
        }
    }

    public void OnUnityAdsDidFinish(string placementId, ShowResult showResult)
    {
        // Define conditional logic for each ad completion status:
        if(showResult == ShowResult.Finished)
        {
            GM.gm.gems += 20;
        }
        else if(showResult == ShowResult.Skipped)
        {
            // Do not reward the user for skipping the ad.
        }
        else if(showResult == ShowResult.Failed)
        {
            Debug.LogWarning("The ad did not finish due to an error.");
        }
    }

    public void OnUnityAdsDidError(string message)
    {
        myAdStatus = message;
    }

    public void OnUnityAdsDidStart(string placementId)
    {
        // Optional actions to take when the end-users triggers an ad.
    }
}