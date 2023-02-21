using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Text;
using Newtonsoft.Json;
using UnityEngine.Networking;
using System;

public class FotoScript : MonoBehaviour
{
    
    WebCamTexture webCamTexture;
    private Texture2D hilfsTextur;
    public Image bild;
    private WebCamDevice[] devices;
    private WebCamDevice device = default;
    string jsonDaten;
    Boolean fotoGemacht = false;
    
    // Start is called before the first frame update
    void Start()
    {
        devices = WebCamTexture.devices;
        WebCamDevice device = default;
        StartCamera(device);
    }
    
    private void StopCamera()
    {
        if (webCamTexture == null)
        {
            return;
        }
        webCamTexture.Stop();
        Destroy(webCamTexture);
    }
    private void StartCamera(WebCamDevice device)
    {
        
            StopCamera();
            webCamTexture = new WebCamTexture(device.name, Screen.width, Screen.height, 60);
            webCamTexture.Play();
        
    }
    // Update is called once per frame
    void Update()
    {
        if (!fotoGemacht)
        {
            //wenn ein Foto gemacht wurde, dann soll nicht mehr aktualisiert werden
            int orientierung = -webCamTexture.videoRotationAngle;
            bild.rectTransform.localEulerAngles = new Vector3(0, 0, orientierung);
            hilfsTextur = TextureToT2D(webCamTexture);
            bild.sprite = Sprite.Create(hilfsTextur, new Rect(0, 0, hilfsTextur.width, hilfsTextur.height), new Vector2());
        }
    }
    public void SzenewechselnFoto()
    {
        StopCamera();
        SceneManager.LoadScene(3);
    }
    public void SzenewechselninStart()
    {
        StopCamera();
        SceneManager.LoadScene(1);
    }
    
    public void SzeneEinzeleingabe()
    {
        StopCamera();
        SceneManager.LoadScene(2);
    }
    
   
    public void Foto()
    {
        fotoGemacht= true;
        if (webCamTexture == null)
        {
            StartCamera(device);

        }
        StartCoroutine(FotoIE());

    }
    IEnumerator FotoIE()
    {
        yield return new WaitForEndOfFrame();
        int orientierung = -webCamTexture.videoRotationAngle;
        bild.rectTransform.localEulerAngles = new Vector3(0, 0, orientierung);
        hilfsTextur = TextureToT2D(webCamTexture);
        bild.sprite = Sprite.Create(hilfsTextur, new Rect(0, 0, hilfsTextur.width, hilfsTextur.height), new Vector2());
        
    }
    public Texture2D TextureToT2D(Texture texture)
    {
        //wandelt die übergebene Textur in eine Texture2D um
        Texture2D tempT2D = new Texture2D(texture.width, texture.height, TextureFormat.RGBA32,false);      
        Graphics.CopyTexture(texture, tempT2D);
        tempT2D.Apply(true);
        return tempT2D;
    }
    
  
    public void SendeFoto()
    {
        Texture2D temp = new Texture2D(hilfsTextur.width,hilfsTextur.height);
        var pixels = bild.sprite.texture.GetPixels((int)bild.sprite.textureRect.x,
        (int)bild.sprite.textureRect.y,
        (int)bild.sprite.textureRect.width,
        (int)bild.sprite.textureRect.height);
        temp.SetPixels(pixels);
        
        int orientierung = -webCamTexture.videoRotationAngle;
        bild.rectTransform.localEulerAngles = new Vector3(0, 0, orientierung);
        //Foto wird erst in PNG umgewandelt und dann in einen Base64 String, damit dieser
        // an den Server geschickt werden kann.
        byte[] bytes = temp.EncodeToPNG();
        string fotoString = Convert.ToBase64String(bytes);

        Dictionary<string, string> JZeug = new Dictionary<string, string>()
        {
            {"name", StartBildschirm.personid },
            {"foto", fotoString },
            {"text", "" },
        };

        jsonDaten = JsonConvert.SerializeObject(JZeug);
        StartCoroutine(SendeFotoRequest());

    }

    private IEnumerator SendeFotoRequest()
    {
        string url = StartBildschirm.ipaddress+"/sendeFoto";
        using UnityWebRequest webrequest = new UnityWebRequest(url, "POST");
        webrequest.SetRequestHeader("Content-Type", "application/json");
        byte[] buffer = Encoding.UTF8.GetBytes(jsonDaten);
        webrequest.uploadHandler = new UploadHandlerRaw(buffer);
        webrequest.downloadHandler = new DownloadHandlerBuffer();
        SzeneEinzeleingabe();
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
