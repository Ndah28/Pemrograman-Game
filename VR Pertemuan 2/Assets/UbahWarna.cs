using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UbahWarna : MonoBehaviour
{
    // Start is called before the first frame update
    public void Merah(){
        GetComponent<Renderer>().material.color = Color.red;
    }

    public void Biru(){
        GetComponent<Renderer>().material.color = Color.blue;
    }

    public void Hitam(){
        GetComponent<Renderer>().material.color = Color.black;
    }

    // public void Oren(){
    //     GetComponent<Renderer>().material.color = Color.orange;
    // }

    public void Hijau(){
        GetComponent<Renderer>().material.color = Color.green;
    }

    public void Kuning(){
        GetComponent<Renderer>().material.color = Color.yellow;
    }

    // public void Pink(){
    //     GetComponent<Renderer>().material.color = Color.pink;
    // }

    public void Putih(){
        GetComponent<Renderer>().material.color = Color.white;
    }

    // public void Ungu(){
    //     GetComponent<Renderer>().material.color = Color.purple;
    // }

    // public void Emas(){
    //     GetComponent<Renderer>().material.color = Color.gold;
    // }

    // public void Perak(){
    //     GetComponent<Renderer>().material.color = Color.silver;
    // }

    public void Abu(){
        GetComponent<Renderer>().material.color = Color.grey;
    }

    // public void Coklat(){
    //     GetComponent<Renderer>().material.color = Color.brown;
    // }

    public void Cyan(){
        GetComponent<Renderer>().material.color = Color.cyan;
    }

    public void Magenta(){
        GetComponent<Renderer>().material.color = Color.magenta;
    }
}