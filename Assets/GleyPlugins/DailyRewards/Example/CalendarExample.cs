using UnityEngine;
using UnityEngine.UI;

public class CalendarExample : MonoBehaviour
{
    public Text UICoinText, UIGemText, UIHeartText;
    public int coinReward, gemReward, heartReward;

    void Start()
    {
        //uncomment this to clear your save
        //PlayerPrefs.DeleteAll();

        //You can add this listener anywhere in your code and your method will be called every time a Day Button is clicked
        GleyDailyRewards.Calendar.AddClickListener(CalendarButtonClicked);
    }

    /// <summary>
    /// Triggered every time a day button is clicked
    /// </summary>
    /// <param name="dayNumber">current clicked day</param>
    /// <param name="rewardValue">the reward value for current day</param>
    /// <param name="rewardSprite">the sprite of the reward</param>
    private void CalendarButtonClicked(int dayNumber, int rewardValue, Sprite rewardSprite)
    {
        Debug.Log("Click " + dayNumber + " " + rewardValue);
        if (dayNumber == 1 || dayNumber == 3 || dayNumber == 5 || dayNumber == 8 || dayNumber == 10 || dayNumber == 12 || dayNumber == 15 || dayNumber == 17 || dayNumber == 19 || dayNumber == 22 || dayNumber == 24 || dayNumber == 26 || dayNumber == 29)
        {
            coinReward = coinReward + rewardValue;
            UICoinText.text = coinReward.ToString();
        }
        else if (dayNumber == 7 || dayNumber == 14 || dayNumber == 21 || dayNumber == 28 || dayNumber == 30)
        {
            gemReward = gemReward + rewardValue;
            UIGemText.text = gemReward.ToString();
        }
        else if (dayNumber == 2 || dayNumber == 4 || dayNumber == 6 || dayNumber == 9 || dayNumber == 11 || dayNumber == 13 || dayNumber == 16 || dayNumber == 18 || dayNumber == 20 || dayNumber == 23 || dayNumber == 25 || dayNumber == 27)
        {
            heartReward = heartReward + rewardValue;
            UIHeartText.text = heartReward.ToString();
        }
        //reward += rewardValue;
        //UIRewardText.text = reward.ToString();
    }


    public void ShowCalendar()
    {
        //call this method anywhere in your code to open the Calendar Popup
        GleyDailyRewards.Calendar.Show();
    }

    public void ResetCalendar()
    {
        GleyDailyRewards.Calendar.Reset();
    }
}




