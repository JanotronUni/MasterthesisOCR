using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class StartBildschirm : MonoBehaviour
{
    public TextMeshProUGUI idAnzeige;
    public InputField input;
    public static string personid;
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
        idAnzeige.text= input.text;
        personid = input.text;
        SceneManager.LoadScene(1);
    }
}
