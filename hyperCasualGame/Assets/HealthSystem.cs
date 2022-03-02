using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthSystem : MonoBehaviour
{
    //public event EventHandler OnHealthChanged;
    //public event EventHandler OnDead;
    Slider HealthSlider;
    Text CurrentHealth;
    Text MaxHealth;
    public int healthMax;
    public int health;
    public GameObject LevelFailedPanel;
    GameObject wizard;
    Animator animator;
    
    //HealthSlider=FindInActiveObjectByName("HealthSlider").GetCompenent<slider>();
    //HealthSlider = GameObject.FindGameObjectsWithTag("Respawn");
    public void Start(){
    //HealthSlider = GameObject.Find("HealthSlider");
    HealthSystem healthObj=new HealthSystem();
            
    HealthSlider = (Slider) FindObjectOfType(typeof (Slider)); // her zaman ilk slider'ı cagırır cok dikkatli olalım :D
    HealthSlider.value=100f;
    health=(int) HealthSlider.value;
                 
    CurrentHealth = GameObject.FindGameObjectWithTag("CurrentHealth").GetComponent<Text>();
    MaxHealth = GameObject.FindGameObjectWithTag("MaxHealth").GetComponent<Text>();
    CurrentHealth.text=""+HealthSlider.value;
    MaxHealth.text=""+HealthSlider.value;
        //healthMax=110;
    wizard = GameObject.FindWithTag("Wizard");
    animator = wizard.GetComponent<Animator>();
    }
    
   

    
/*
    public HealthSystem(int healthMax) {
        this.healthMax = healthMax;
        health = healthMax;
       // HealthSlider.value=50f;
        CurrentHealth.text="y";
        MaxHealth.text="z";
        
    }
    */
    
        
    public float GetHealthPercent() {
        return (float)health / healthMax;
    }

    public void Damage(int amount) {
        
        health -= amount;
        HealthSlider.value=health;
        CurrentHealth.text=""+HealthSlider.value;
        
        
        if (health < 0) {
            health = 0;
        }
        //if (OnHealthChanged != null) OnHealthChanged(this, EventArgs.Empty);

        if (health <= 0) {
            Die();
        }
    }

    public void Die() {
        //if (OnDead != null) OnDead(this, EventArgs.Empty);
        animator.SetBool("die",true);
        LevelFailedPanel.SetActive(true);
    }

    public bool IsDead() {
        return health <= 0;
    }

    public void Heal(int amount) {
        health += amount;
        if (health > healthMax) {
            health = healthMax;
        }
       // if (OnHealthChanged != null) OnHealthChanged(this, EventArgs.Empty); bu nedir aga ?
    }

}


