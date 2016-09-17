using UnityEngine;
using System.Collections;

public class Coin : MonoBehaviour
{

    public int coinsCollected;
    private AudioSource src;
    public AudioClip coinSound;
    private CapsuleCollider myCollider;
    private MeshRenderer myMesh;
    public CapsuleCollider myCollider2;
    public MeshRenderer myMesh2;
    private bool startTimer = false;



    // Use this for initialization
    void Start()
    {

        src = GetComponent<AudioSource>();
        myCollider = GetComponent<CapsuleCollider>();
        myMesh = GetComponent<MeshRenderer>();
       

    }

    // Update is called once per frame
    void Update()
    {

        transform.Rotate(0, 0, 180 * Time.deltaTime);


        if (startTimer && !src.isPlaying)
        {
            Destroy(gameObject);
        }
    }

    void OnTriggerEnter(Collider col)
    {
        if (col.gameObject.name == "Player")
        {
            Destroy(myCollider);
            Destroy(myMesh);
            Destroy(myCollider2);
            Destroy(myMesh2);
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 1);


            if (!src.isPlaying)
            {
                src.PlayOneShot(coinSound);
            }




            startTimer = true;


        }

    }
}

