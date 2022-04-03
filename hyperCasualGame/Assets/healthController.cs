using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthController : MonoBehaviour
{

    private int healthMax ;
    private int healthCurrent;
    private bool die = false;

    public HealthController(int healthMax , int healthCurrent)
    {
        this.healthMax = healthMax;
        this.healthCurrent = healthCurrent;
        this.die = false;
    }

    public float GetHealthMax()
    {
        return healthMax;
    }

    public void SetHealthMax(int healthMax)
    {
        this.healthMax = healthMax;
    }

    public int GetHealthCurrent()
    {
        return healthCurrent;
    }

    public void SetHealthCurrent(int healthCurrent)
    {
        this.healthCurrent = healthCurrent;
    }

    public bool IsDead()
    {
        return die;
    }

    public void SetDie(bool die)
    {
        this.die = die;
    }

    public float GetHealthPercent()
    {
        return (float) healthCurrent / healthMax;
    }

    public void Heal(int amount)
    {
        healthCurrent += amount;
        if (healthCurrent >= healthMax)
        {
            healthCurrent = healthMax;
        }
    }

    public void Damage(int amount)
    {
        healthCurrent -= amount;
        if (healthCurrent <= 0)
        {
            healthCurrent = 0;
            SetDie(true);
        }
            
    }
}
