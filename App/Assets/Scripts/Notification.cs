using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Notifications.Android;
using UnityEngine.Android;

public class Notification : MonoBehaviour
{
    //Dieses Script kann genutzt werden, um Benachrichtigungen erscheinen zu lassen. Die Icons müssen noch festgelegt werden.
    // Start is called before the first frame update
    void Start()
    {
        if (!Permission.HasUserAuthorizedPermission("android.permission.POST_NOTIFICATIONS"))
        {
            Permission.RequestUserPermission("android.permission.POST_NOTIFICATIONS");
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
   
    public void ShowNotification2()
    {
        AndroidNotificationChannel channel = new AndroidNotificationChannel()
        {
            Id = "channel_id",
            Name = "Default Channel",
            Importance = Importance.High,
            Description = "Generic notifications",
        };
        AndroidNotificationCenter.RegisterNotificationChannel(channel);
        AndroidNotification notification = new AndroidNotification();
        notification.Title = "Your Title";
        notification.Text = "yuhu";
        notification.SmallIcon = "icon_0";
        notification.LargeIcon = "icon_1";
        notification.FireTime = System.DateTime.Now.AddSeconds(1);
        notification.ShowTimestamp = true;
        Debug.Log("Jo");
        var identifier = AndroidNotificationCenter.SendNotification(notification, "channel_id");
        if (AndroidNotificationCenter.CheckScheduledNotificationStatus(identifier) == NotificationStatus.Scheduled)
        {
            AndroidNotificationCenter.CancelAllNotifications();
            AndroidNotificationCenter.SendNotification(notification, "channel_id");
        }
    }
}
