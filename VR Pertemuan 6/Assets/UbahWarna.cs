using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UbahWarna : MonoBehaviour
{
    // Start is called before the first frame update
    public void Hijau(){
        GetComponent<Renderer>().material.color = Color.green;
    }

    public void Kuning(){
        GetComponent<Renderer>().material.color = Color.yellow;
    }

    public void Merah(){
        GetComponent<Renderer>().material.color = Color.red;
    }
}
