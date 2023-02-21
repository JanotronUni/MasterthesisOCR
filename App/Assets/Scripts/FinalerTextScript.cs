using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class FinalerTextScript : MonoBehaviour
{
    //In diesem Script wird der gesamte Text angezeigt und kann verändert werden,
    //bevor dieser zum Server geschickt wird.
    public InputField input;
    string jsonDaten;
    // Start is called before the first frame update
    void Start()
    {
        Invoke("getFinalText", 2);
    }

    // Update is called once per frame
    void Update()
    {
       
    }
    public void wechselZuStart()
    {
        SceneManager.LoadScene(1);
    }
    private void getFinalText()
    {
        StartCoroutine(getFinalTextRequest());
    }
    IEnumerator getFinalTextRequest()
    {
        using (UnityWebRequest request = UnityWebRequest.Get(StartBildschirm.ipaddress+"/getFinalText")) 
        {
            yield return request.SendWebRequest();
            Debug.Log(request.result);
            Debug.Log(request.downloadHandler.text);
            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                Debug.Log("Error");
            }
            else
            {
                input.text = request.downloadHandler.text;
            }            
        }
    }
    public void setFinalText()
    {
        var tempText = input.text;
        Dictionary<string, string> JZeug = new Dictionary<string, string>()
        {
            {"text", tempText },
        };
        jsonDaten = JsonConvert.SerializeObject(JZeug);
        StartCoroutine(setFinalTextRequest());
        Invoke("wechselZuStart", 2);
    }
    IEnumerator setFinalTextRequest()
    {
        using UnityWebRequest webrequest = new UnityWebRequest(StartBildschirm.ipaddress+"/setFinalText", "POST");
        webrequest.SetRequestHeader("Content-Type", "application/json");
        byte[] buffer = Encoding.UTF8.GetBytes(jsonDaten);
        webrequest.uploadHandler = new UploadHandlerRaw(buffer);
        webrequest.downloadHandler = new DownloadHandlerBuffer();
        yield return webrequest.SendWebRequest();
        switch (webrequest.result)
        {
            case UnityWebRequest.Result.InProgress:
                Debug.Log("InProgress");
                break;
            case UnityWebRequest.Result.Success:
                break;
            case UnityWebRequest.Result.ConnectionError:
                Debug.Log("ConnectionError");
                break;
            case UnityWebRequest.Result.ProtocolError:
                Debug.Log("ProtocolError");
                break;
            case UnityWebRequest.Result.DataProcessingError:
                Debug.Log("DataProcessingError");
                break;
            default:
                Debug.Log("FehlerUnbekannt");
                break;
        }
    }
}
