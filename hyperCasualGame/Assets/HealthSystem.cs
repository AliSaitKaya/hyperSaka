using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthSystem : MonoBehaviour
{
    //public event EventHandler OnHealthChanged;
    //public event EventHandler OnDead;
    public Slider HealthSlider;
    public Text CurrentHealth;
    public int healthMax;
    public int health;
    
    //HealthSlider=FindInActiveObjectByName("HealthSlider").GetCompenent<slider>();
    //HealthSlider = GameObject.FindGameObjectsWithTag("Respawn");
    public void Start(){
    //HealthSlider = GameObject.FindGameObjectWithTag("HealthSlider");
    
    
    
    }
    
    

    

    public HealthSystem(int healthMax) {
        this.healthMax = healthMax;
        health = healthMax;
        HealthSlider.value=health;
        CurrentHealth.text=""+HealthSlider.value;
        
    }
        
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


