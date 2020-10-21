using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TangkapObjek : MonoBehaviour
{
	public GameObject bola;
	public GameObject tangan;
	bool tertangkap = false;
	Vector3 posisiBola;

    public Text tangkap;
    public Text lepas;
    // Start is called before the first frame update
    void Start()
    {
        posisiBola = bola.transform.position;
        tangkap.gameObject.SetActive(false);
        lepas.gameObject.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        // input controller klik mouse
        // fire1=klik kiri
        if (Input.GetButtonDown("Fire1"))
        {
            if (!tertangkap){
                //   perpindahan bola ke tranformasi tangan
                bola.transform.SetParent(tangan.transform);

                // default bola di tangan untuk diletakkan dimana saja
                bola.transform.localPosition = new Vector3(0f, -.672f, 0f);

                // jika bola tertangkap berubah jadi biru
                tertangkap = true;
                bola.GetComponent<Renderer>().material.color = Color.blue;
                
                //keluar text
                tangkap.gameObject.SetActive(true);
                lepas.gameObject.SetActive(false);
            } else if (tertangkap){
                //   perpindahan bola ke tranformasi tangan
                bola.transform.SetParent(null);
                bola.transform.localPosition = posisiBola;

                // jika bola tidak tertangkap warna jadi merah
                tertangkap = false;
                bola.GetComponent<Renderer>().material.color = Color.red;

                //keluar text
                tangkap.gameObject.SetActive(false);
                lepas.gameObject.SetActive(true);
            }
        }
    }
}