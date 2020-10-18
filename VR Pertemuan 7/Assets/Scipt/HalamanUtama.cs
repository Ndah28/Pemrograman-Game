using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class HalamanUtama : MonoBehaviour
{
    //method transisi
    public void PindahHalaman(string halaman){
        SceneManager.LoadScene(halaman);
    }

    //method keluar aplikasi
    public void KeluarAplikasi(){
        Application.Quit();
    }
}
