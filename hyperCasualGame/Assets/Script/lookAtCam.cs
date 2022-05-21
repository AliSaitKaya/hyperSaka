using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class lookAtCam : MonoBehaviour
{
    public Transform cam;

    void Update() 
    {
        /*
        Vector3 v = cameraToLookAt.transform.position - transform.position;
        v.x = v.z = 0.0f;
        transform.LookAt(cameraToLookAt.transform.position );
        transform.Rotate(0, 180, 0);
        */

        transform.LookAt(transform.position + cam.forward);
    }
}