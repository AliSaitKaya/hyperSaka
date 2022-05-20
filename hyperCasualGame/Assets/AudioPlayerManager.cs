using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioPlayerManager : MonoBehaviour
{
    private static AudioPlayerManager instance = null;
      private AudioSource mainmenuaudio;
       public static float MusicLevelFromAudioPlayer=0.2f;
     // public static float mainmenuaudiolevel;

      private void Awake()
      {
          if (instance == null)
          { 
               instance = this;
               DontDestroyOnLoad(gameObject);
               return;
          }
          if (instance == this) return; 
          Destroy(gameObject);
      }

      void Start()
      {
         mainmenuaudio = GetComponent<AudioSource>();
         mainmenuaudio.Play();
      }
    
      public void MusicOffAudioController()
      {
          mainmenuaudio.volume=0;
          MusicLevelFromAudioPlayer=mainmenuaudio.volume;
          
          //mainmenuaudiolevel=mainmenuaudio.volume;
      }
      public void MusicOnAudioController()
      {
          mainmenuaudio.volume=0.2f;
          MusicLevelFromAudioPlayer=mainmenuaudio.volume;
          
      }
}
