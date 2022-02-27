using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class move : MonoBehaviour
{
    protected Joystick joystick;
    float horizontal, vertical = 0;
    Vector3 FirstPoint;
    Vector3 SecondPoint;
    float xAngle;

    public ParticleSystem walkSmoke;
    public Animator animator;
    GameObject wizard;
    public static Vector3 forward, right ,heading;
    float moveSpeed = 6f;
    // Start is called before the first frame update
    
    void Start()
    {
        joystick = FindObjectOfType<Joystick>();
        wizard = GameObject.FindWithTag("Wizard");
        animator = wizard.GetComponent<Animator>();
        walkSmoke.Stop();

          forward = Camera.main.transform.forward;
        forward.y = 0;
        forward = Vector3.Normalize(forward);
        right = Camera.main.transform.right;
        right.y = 0;
        right = Vector3.Normalize(right);
        
       // right = Quaternion.Euler(new Vector3(0, 90, 0)) * forward;
    }

    private void FixedUpdate()
    {
        movement();
    }
    // Update is called once per frame
    void movement()
    {
       

        horizontal = joystick.Horizontal;
        vertical = joystick.Vertical;

        if (horizontal <= 0.3 && horizontal >= -0.3 && vertical <= 0.3 && vertical >= -0.3)
        {
            horizontal = 0;
            vertical = 0;
            walkSmoke.Stop();
        }
        else if(!walkSmoke.isPlaying)
        {
            walkSmoke.Play();
        }
        Vector3 direction = new Vector3(horizontal, 0, vertical);
        Vector3 rightMovement = right * moveSpeed * Time.deltaTime * horizontal;
        Vector3 upMovement = forward * moveSpeed *Time.deltaTime * vertical;

        heading = Vector3.Normalize(rightMovement + upMovement);

        transform.forward += heading;
        transform.position += rightMovement;
        transform.position += upMovement;

        Camera.main.transform.position = new Vector3(transform.position.x-10, transform.position.y+7, transform.position.z-8);

        animator.SetFloat("horizontal", horizontal);
        animator.SetFloat("vertical", vertical);

    }
}
