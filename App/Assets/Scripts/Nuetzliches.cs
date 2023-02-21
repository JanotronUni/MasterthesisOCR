using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Net;
using UnityEngine;
using Newtonsoft.Json;
using System;
using UnityEngine.Networking;
//Hier gibt es nuetzliche Methoden, die in diesem Projekt nicht genutzt wurden.
public class Datenbank
{
  
    public string ID { get; set; }
    public string Name { get; set; }
    public string Foto { get; set; }
    public string Text { get; set; }
    public Datenbank(string id, string name, string foto, string text)
    {
        ID = id;
        Name = name;
        Foto = foto;
        Text = text;
    }
}
public class Nuetzliches : MonoBehaviour
{
    private WebCamDevice[] devices;
    private WebCamDevice device = default;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public string GetIP()
    {
        //gibt die die Ip Adresse des Nutzers zurück.
        IPHostEntry host;
        string localIP = "0.0.0.0";
        host = Dns.GetHostEntry(Dns.GetHostName());
        foreach (IPAddress ip in host.AddressList)
        {
            if (ip.AddressFamily == AddressFamily.InterNetwork)
            {
                localIP = ip.ToString();
                break;
            }
        }
        return localIP;
    }
    //Die Coroutine verbindet die Klasse Datenbank (die vom Server ebenfalls genutzt wird) mit der App. Deserialize kann somit genutzt werden.
    IEnumerator GetRequest2(string uri)
    {
        using (UnityWebRequest request = UnityWebRequest.Get(uri))
        {
            yield return request.SendWebRequest();
            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                Debug.Log("Fehler: " + request.error);
            }
            else
            {

                var results = JsonConvert.DeserializeObject<Datenbank>(request.downloadHandler.text);

                byte[] k = Convert.FromBase64String(results.Foto);


               
            }
        }
    }
    public void switchCam()
    {
        //deviceIndex = (deviceIndex + 1) % devices.Length;
        //StartCamera(devices[deviceIndex]);
    }

}
