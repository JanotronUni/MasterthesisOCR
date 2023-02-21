using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class StartBildschirm : MonoBehaviour
{
    public TextMeshProUGUI idAnzeige;
    public InputField inputID;
    public InputField inputIp;
    public static string personid;
    public static string ipaddress;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void SetzeId()
    {
        idAnzeige.text= inputID.text;
        personid = inputID.text;
        SceneManager.LoadScene(1);
        //Die personid wird statisch festgelegt, damit die anderen Scripte drauf zugreifen können.
    }
    public void SetzeIp()
    {
        ipaddress = inputIp.text;
    }
}
