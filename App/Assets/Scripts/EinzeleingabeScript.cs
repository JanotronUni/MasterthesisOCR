using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Text;
using Newtonsoft.Json;
using UnityEngine.Networking;
using System;

public class EinzeleingabeScript : MonoBehaviour
{
    public InputField input;
    string jsonDaten;
    public Image bild;
    private Boolean serverBusy = true;
    
    // Start is called before the first frame update
    void Start()
    {
        input.text = "Wait for Server";
        InvokeRepeating("CheckServer", 1, 5);
        
    }
    public void CheckServer()
    {
        StartCoroutine(CheckIfServerBusy());
    }
    IEnumerator CheckIfServerBusy()
    {
        using (UnityWebRequest request = UnityWebRequest.Get("http://192.168.0.220:8000/checkServerStatus"))
        {
            yield return request.SendWebRequest();         
            if (request.downloadHandler.text == "Server beschaeftigt")
            {
                serverBusy= true;
            }
            if (request.downloadHandler.text == "Server frei" & serverBusy == true)
            {
                serverBusy = false;
                FotoAnzeigen();
                input.text = "Click to enter text";
            }
        }
    }
    // Update is called once per frame
    void Update()
    {
     
    }
    public void SzenewechselnFoto()
    {
        
        SceneManager.LoadScene(2);
    }
    public void SzenewechselninStart()
    {
        
        SceneManager.LoadScene(1);
    }
    public void SzenewechselScreen()
    {
        
        SceneManager.LoadScene(3);



    }
   
   public void SzenewechselninFinaleTexteingabe()
    {
        SceneManager.LoadScene(4);
    }
    
    
   
    public void TextSenden()
    {
        var tempText = input.text;
        Dictionary<string, string> JZeug = new Dictionary<string, string>()
        {
            {"text", tempText },
        };
        jsonDaten = JsonConvert.SerializeObject(JZeug);
        StartCoroutine(TextSendenRequest("http://192.168.0.220:8000/sendeText"));
        Invoke("FotoAnzeigen", 1);
    }
   

    private IEnumerator TextSendenRequest(string url)
    {
        
        using UnityWebRequest webrequest = new UnityWebRequest(url, "POST");
        webrequest.SetRequestHeader("Content-Type", "application/json");

        byte[] buffer = Encoding.UTF8.GetBytes(jsonDaten);
        webrequest.uploadHandler = new UploadHandlerRaw(buffer);
        webrequest.downloadHandler = new DownloadHandlerBuffer();
        yield return webrequest.SendWebRequest();
        input.text = "";
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
    public void FotoAnzeigen()
    {
        
        StartCoroutine(FotoAnzeigenRequest("http://192.168.0.220:8000/fotoAnzeigen"));
    }
    IEnumerator FotoAnzeigenRequest(string uri)
    {
        using (UnityWebRequest request = UnityWebRequest.Get(uri))
        {
            yield return request.SendWebRequest();
            var a = JsonConvert.ToString(request.result);
            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                Debug.Log("Connection Error");
            }
            if(request.downloadHandler.text == "Alle Bilder verarbeitet")
            {
                SzenewechselninFinaleTexteingabe();
            }
            else
            {
                byte[] k = Convert.FromBase64String(request.downloadHandler.text);
                Texture2D neu = new Texture2D(2, 2);
                neu.LoadImage(k); 
                bild.sprite = Sprite.Create(neu, new Rect(0, 0, neu.width, neu.height), new Vector2());
            }
        }
    }
    
    
}
