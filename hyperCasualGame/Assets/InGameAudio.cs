using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InGameAudio : MonoBehaviour
{
    // Start is called before the first frame update
    private AudioSource ingameaudio;
    void Start()
    {
         Destroy(GameObject.FindGameObjectWithTag("mainmenumusic"));
         ingameaudio = GetComponent<AudioSource>();
         ingameaudio.Play();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
