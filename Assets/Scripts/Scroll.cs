using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Scroll : MonoBehaviour
{

    private float step;
    private float deltaX;
    private Vector3 target;
    private Vector3 startPos;
    private RectTransform rectTransform;
    private BigScroll bigScroll;
    private bool stop = false;
    private bool toMove = false;
    private AudioSource src;
    public RawImage rawImage;
    public GameObject big;
    public Selected selected;
    public int value;
    public int status;
    public DisplayAmountOfCoins displayAmountOfCoins;
	public Text text;
    public Mesh playerModel;
    public Vector3 colDimensions;
    public Vector3 colPos;
    public Vector3 playerDimensions;
    public Vector3 modelRotation;
    public Material modelMat;
    public Material trailMat;
    public float trailWidth;
    public Player player;
    public bool isCube = false;
    public bool isTrail = false;
	public GameObject overlay;
	private RectTransform textRect;
	private Transform[] items;






    // Use this for initialization
    void Start()
    {
        rectTransform = GetComponent<RectTransform>();
		textRect = text.GetComponent<RectTransform> ();
		items = big.GetComponentsInChildren<Transform> ();


	

        if (!PlayerPrefs.HasKey(gameObject.name))
        {
            PlayerPrefs.SetInt(gameObject.name, status);
        }
        src = GetComponent<AudioSource>();
        text.text = value.ToString();
        bigScroll = big.GetComponent<BigScroll>();

        if (isCube && PlayerPrefs.GetInt(name) == 0)
        {
            PlayerPrefs.SetInt(name, 1);
        }

		if (PlayerPrefs.GetInt (name) == 1 | PlayerPrefs.GetInt (name) == 2) {
			textRect.anchoredPosition = new Vector3(-49,-68,0);
			GameObject.Find ("/storeCanvas/Main/big/" + name + "/RawImageEmpty/Image").SetActive (false);



			text.text = "OWNED";
			text.color = Color.green;
		}

    }

    public void Purchase()
    {
        if (!isTrail)
        {
            if (PlayerPrefs.GetInt("Coins") - value >= 0)
            {
                PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - value);
                displayAmountOfCoins.SetCoin();
                foreach (Transform child in big.transform)
                {
                    if (PlayerPrefs.GetInt(child.gameObject.name) == 1 && !child.gameObject.GetComponent<Scroll>().isTrail)
                    {
                        PlayerPrefs.SetInt(child.gameObject.name, 2);
                    }
                }
                PlayerPrefs.SetInt(gameObject.name, 1);

				textRect.anchoredPosition = new Vector3(-49,-68,0);
				GameObject.Find ("/storeCanvas/Main/big/" + name + "/RawImageEmpty/Image").SetActive (false);
				text.text = "OWNED";
				text.color = Color.green;

                EquipModel();
            }
            else if (!src.isPlaying)
            {
                src.PlayOneShot(src.clip);
            }
        }
        else
        {
            if (PlayerPrefs.GetInt("Coins") - value >= 0)
            {
                PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - value);
                displayAmountOfCoins.SetCoin();
                foreach (Transform child in big.transform)
                {
                    if (PlayerPrefs.GetInt(child.gameObject.name) == 1 && child.gameObject.GetComponent<Scroll>().isTrail)
                    {
                        PlayerPrefs.SetInt(child.gameObject.name, 2);
                    }
                }
                PlayerPrefs.SetInt(gameObject.name, 1);
                EquipTrail();
            }
            else if (!src.isPlaying)
            {
                src.PlayOneShot(src.clip);
            }
        }

        selected.DisplayPrompt();
    }

    public void Equip()
    {
        if (!isTrail)
        {
            foreach (Transform child in big.transform)
            {
                if (PlayerPrefs.GetInt(child.gameObject.name) == 1 && !child.gameObject.GetComponent<Scroll>().isTrail)
                {
                    PlayerPrefs.SetInt(child.gameObject.name, 2);
                }
            }
            if (PlayerPrefs.GetInt(gameObject.name) != 1)
            {
                PlayerPrefs.SetInt(gameObject.name, 1);
                EquipModel();
            }
            else
            {
                PlayerPrefs.SetInt(gameObject.name, 2);
            }
        }
        else
        {
            foreach (Transform child in big.transform)
            {
                if (PlayerPrefs.GetInt(child.gameObject.name) == 1 && child.gameObject.GetComponent<Scroll>().isTrail)
                {
                    PlayerPrefs.SetInt(child.gameObject.name, 2);
                }
            }
            if (PlayerPrefs.GetInt(gameObject.name) != 1)
            {
                PlayerPrefs.SetInt(gameObject.name, 1);
                EquipTrail();
            }
            else
            {
                PlayerPrefs.SetInt(gameObject.name, 2);
            }
        }

        selected.DisplayPrompt();
    }

    public void EquipModel()
    {
        player.GetComponent<MeshFilter>().mesh = playerModel;
        player.GetComponent<BoxCollider>().size = colDimensions;
        player.GetComponent<BoxCollider>().center = colPos;
        player.transform.localScale = playerDimensions;
        player.GetComponent<MeshRenderer>().material = modelMat;
        player.transform.eulerAngles = modelRotation;
    }

    public void EquipTrail()
    {
        player.GetComponent<TrailRenderer>().material = trailMat;
        player.GetComponent<TrailRenderer>().startWidth = trailWidth;
        player.GetComponent<TrailRenderer>().endWidth = trailWidth;
    }

    public void StopIt()
    {
        if (!bigScroll.centering && this.transform.position.x != selected.transform.position.x)
        {
            toMove = true;
            bigScroll.centering = true;
            startPos = big.transform.position;
            deltaX = selected.transform.position.x - transform.position.x;
            target = startPos + new Vector3(deltaX, 0, 0);
        }
    }

    // Update is called once per frame

    void Update()
    {
        deltaX = selected.transform.position.x - transform.position.x;
        if (Mathf.Abs(deltaX) <= 40f)
        {
            selected.selected = this;
            selected.DisplayPrompt();
        }


        if (toMove && transform.position.x != selected.transform.position.x)
        {
            big.transform.position = Vector3.Lerp(startPos, target, Hermite(0f, 1f, step));
            step += Time.deltaTime;
            if (step >= 1f)
            {
                step = 1f;
                toMove = false;
                bigScroll.centering = false;
            }
        }
        else
        {
            step = 0f;
            toMove = false;
        }
    }
    //Ease in out
    public static float Hermite(float start, float end, float value)
    {
        return Mathf.Lerp(start, end, value * value * (3.0f - 2.0f * value));
    }
}