using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationController : MonoBehaviour
{
    public Animator animator;
    public ParticleSystem walkSmoke;
    public ParticleSystem bloodingAnim;

    void Start()
    {
        walkSmoke = transform.GetChild(3).GetComponentInChildren<ParticleSystem>();
        bloodingAnim = transform.GetChild(4).GetComponentInChildren<ParticleSystem>();

        bloodingAnim.Stop();
        walkSmoke.Stop();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Attack(bool attackStatus)
    {
        animator.SetBool("attack", attackStatus);
    }

    public void Move(float horizontal, float vertical)
    {
        if (horizontal <= 0.3 && horizontal >= -0.3 && vertical <= 0.3 && vertical >= -0.3)
        {
            walkSmoke.Stop();
        }
        else if (!walkSmoke.isPlaying)
        {
            walkSmoke.Play();
        }

        animator.SetFloat("horizontal", horizontal);
        animator.SetFloat("vertical", vertical);
    }

    public void GetDamage()
    {
        if(!bloodingAnim.isPlaying)
            bloodingAnim.Play();
    }

    public void Dodge()
    {

    }

    public void Die()
    {
        animator.SetBool("die", true);
    }
}
