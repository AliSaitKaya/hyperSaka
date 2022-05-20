using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SettingsControl : MonoBehaviour
{
    // Start is called before the first frame update
    public  GameObject SettingsPanel;
    public AudioPlayerManager AudioSC;
    public  Button SettingsButton;
    public Button MusicOnButton;
    public Button MusicOffButton;
    public Button SoundOnButton;
    public Button SoundOffButton;
     public Image MusicOnImage;
    public Image MusicOffImage;
    public Image SoundOnImage;
    public Image SoundOffImage;

    public static bool MusicState=true;
    public static bool SoundState=true;
   
    void Start()
    {
        SettingsButton.gameObject.SetActive(true);
        SettingsPanel.SetActive(false);
        MusicOnImage.enabled=false;
        MusicOffImage.enabled=false;
        SoundOnImage.enabled=false;
        SoundOffImage.enabled=false;

        MusicOnButton.gameObject.SetActive(false);
        MusicOffButton.gameObject.SetActive(false);
        SoundOnButton.gameObject.SetActive(false);
        SoundOffButton.gameObject.SetActive(false);

         SettingsButton.onClick.AddListener(SettingsPanelFunc);

         MusicOnButton.onClick.AddListener(MusicOnButtonFunc);
         MusicOffButton.onClick.AddListener(MusicOffButtonFunc);

         SoundOnButton.onClick.AddListener(SoundOnButtonFunc);
         SoundOffButton.onClick.AddListener(SoundOffButtonFunc);
    }

     private void SettingsPanelFunc()
    {
        
        if (!SettingsPanel.activeSelf)
        {
            SettingsPanel.SetActive(true);
            if (MusicState==true & SoundState==true )
            {
                MusicOnImage.enabled=true;
                MusicOffImage.enabled=false;
                SoundOnImage.enabled=true;
                SoundOffImage.enabled=false;

                MusicOnButton.gameObject.SetActive(true);
                MusicOffButton.gameObject.SetActive(false);
                SoundOnButton.gameObject.SetActive(true);
                SoundOffButton.gameObject.SetActive(false);

                
            }
            else if (MusicState==true & SoundState==false )
            {
                MusicOnImage.enabled=true;
                MusicOffImage.enabled=false;
                SoundOnImage.enabled=false;
                SoundOffImage.enabled=true;

                MusicOnButton.gameObject.SetActive(true);
                MusicOffButton.gameObject.SetActive(false);
                SoundOnButton.gameObject.SetActive(false);
                SoundOffButton.gameObject.SetActive(true);
            }
            else if (MusicState==false & SoundState==true )
            {
                MusicOnImage.enabled=false;
                MusicOffImage.enabled=true;
                SoundOnImage.enabled=true;
                SoundOffImage.enabled=false;

                MusicOnButton.gameObject.SetActive(false);
                MusicOffButton.gameObject.SetActive(true);
                SoundOnButton.gameObject.SetActive(true);
                SoundOffButton.gameObject.SetActive(false);
            }
            else if (MusicState==false & SoundState==false )
            {
                MusicOnImage.enabled=false;
                MusicOffImage.enabled=true;
                SoundOnImage.enabled=false;
                SoundOffImage.enabled=true;

                MusicOnButton.gameObject.SetActive(false);
                MusicOffButton.gameObject.SetActive(true);
                SoundOnButton.gameObject.SetActive(false);
                SoundOffButton.gameObject.SetActive(true);
            }
            
        }
        else {
            SettingsPanel.SetActive(false);
        }
        
        
    }

    private void MusicOnButtonFunc()
    {
        MusicState=false;

        MusicOnImage.enabled=false;
        MusicOffImage.enabled=true;

        MusicOnButton.gameObject.SetActive(false);
        MusicOffButton.gameObject.SetActive(true);

        AudioSC.MusicOffAudioController();
    
        
        
    }

    private void MusicOffButtonFunc()
    {
        MusicState=true;

        MusicOnImage.enabled=true;
        MusicOffImage.enabled=false;

        MusicOnButton.gameObject.SetActive(true);
        MusicOffButton.gameObject.SetActive(false);

        AudioSC.MusicOnAudioController();
    }
    private void SoundOnButtonFunc()
    {
        SoundState=false;

        SoundOnImage.enabled=false;
        SoundOffImage.enabled=true;

        SoundOnButton.gameObject.SetActive(false);
        SoundOffButton.gameObject.SetActive(true);
    }
    private void SoundOffButtonFunc()
    {
        SoundState=true;

        SoundOnImage.enabled=true;
        SoundOffImage.enabled=false;

        SoundOnButton.gameObject.SetActive(true);
        SoundOffButton.gameObject.SetActive(false);
    }
    // Update is called once per frame
    
}
