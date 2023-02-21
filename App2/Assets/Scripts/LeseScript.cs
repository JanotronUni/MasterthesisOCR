using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Text;
using Newtonsoft.Json;
using TMPro;
using UnityEngine.Networking;



public class LeseScript : MonoBehaviour
{
    public TextMeshProUGUI text;
    string jsonDaten;
    WebCamTexture webCamTexture;
    public RawImage hintergrund;
    private WebCamDevice[] devices;
    private int deviceIndex;
    public TextMeshProUGUI idAnzeige;
    
    // Start is called before the first frame update
    void Start()
    {
        idAnzeige.text = StartBildschirm.personid;
        devices = WebCamTexture.devices;
        WebCamDevice device = default;
        StartCamera(device);
        InvokeRepeating("Aktualisiere", 0f, 10f);
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
        int orientation = -webCamTexture.videoRotationAngle;
        hintergrund.rectTransform.localEulerAngles = new Vector3(0, 0, orientation);
        hintergrund.texture= webCamTexture;
        
    }
    // Update is called once per frame
    void Update()
    {
        
    }
    public void SzeneWechselnInFoto()
    {
        StopCamera();
        SceneManager.LoadScene(3);       
    }
    public void Groeﬂer()
    {
        text.fontSize = text.fontSize + 5;
    }
    public void Kleiner()
    {
        text.fontSize = text.fontSize - 5;
    }
    public void Aktualisiere()
    {
        Dictionary<string, string> TextJson = new Dictionary<string, string>()
        {
            {"name", StartBildschirm.personid },
        };
        jsonDaten = JsonConvert.SerializeObject(TextJson);
    
        StartCoroutine(AktualisierenRequest("http://192.168.0.220:8000/text"));
        
    }
   
    private IEnumerator AktualisierenRequest(string url)
    {
        using UnityWebRequest webrequest = new UnityWebRequest(url, "POST");
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
                text.text = webrequest.downloadHandler.text;               
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
                Debug.Log("UnbekannterFehler");
                break;
        }
    } 
}
