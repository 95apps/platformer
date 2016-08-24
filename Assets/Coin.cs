using UnityEngine;
using System.Collections;

public class Coin : MonoBehaviour
{

    public int coinsCollected;
    private AudioSource src;
    public AudioClip coinSound;
    private CapsuleCollider myCollider;
    private MeshRenderer myMesh;
    
     

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
        Debug.Log(PlayerPrefs.GetInt("Coins"));
    }

    void OnCollisionEnter(Collision col)
    {
        if (col.gameObject.name == "Player")
        {
           
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 1);
            
            src.PlayOneShot(coinSound);
                
            
            
            Destroy(myCollider);
            Destroy(myMesh);

            
            
            }
            
        }
    }

