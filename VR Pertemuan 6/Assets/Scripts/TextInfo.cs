﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextInfo : MonoBehaviour
{
    public float time = 3f;
    // Start is called before the first frame update
    void Start()
    {
        Destroy(gameObject, time);
    }
}
