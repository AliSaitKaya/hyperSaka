using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class heartRotation : MonoBehaviour
{
    private Rigidbody rb;
    private ParticleSystem healAnim;
    private void Start()
    {
        healAnim = GetComponentInChildren<ParticleSystem>();
        healAnim.Stop();
    }

    private void Update()
    {
        transform.Rotate(0, 1, 0);
    }

    void OnTriggerEnter(Collider other)
    {

        if (other.CompareTag("enemyWizard") ){
            other.GetComponent<enemyHealthSystem1>().Heal(30);
            healAnim.Play();
            Destroy(gameObject,0.4f);

        }

        if (other.CompareTag("Wizard") ){
            other.GetComponent<HeroHealthSystem>().Heal(30);
            healAnim.Play();
            Destroy(gameObject,0.4f);
        }
    
    }

}
