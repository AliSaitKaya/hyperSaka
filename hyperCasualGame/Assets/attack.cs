using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class attack : MonoBehaviour
{

    public Animator animator;

    public Button attackButton;
    private bool attackStatus = false ;

    // Start is called before the first frame update
    void Start()
    {
        attackButton.onClick.AddListener(Attack);
    }


    // Update is called once per frame
    void Update()
    {
        animator.SetBool("attack", attackStatus);
        attackStatus = false;

    }

    public void Attack()
    {
        attackStatus = true; 

    }
}
