using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField]
    private GameObject poop;
    // Start is called before the first frame update
    void Start()
    {
        Creatpoop();
        StartCoroutine(CreatepoopRoutine());
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    IEnumerator CreatepoopRoutine()
    {
        while (true)
        {
            Creatpoop();
            yield return new WaitForSeconds(1);
        }
    }

    private void Creatpoop()
    {
        Vector3 pos = Camera.main.ViewportToWorldPoint(new Vector3(UnityEngine.Random.Range(0.0f, 1.0f), 1.1f, 0) );
        pos.z = 0.0f;
        Instantiate(poop, pos, Quaternion.identity);
    }
}
