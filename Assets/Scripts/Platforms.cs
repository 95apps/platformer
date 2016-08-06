using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Platforms : MonoBehaviour
{
    // Declare list of GameObjects called platforms
    public List<GameObject> platforms;
    // Variable that can be set in unity for the number of seconds before a platforms disappears
    public float countDown;
    // The direction in which the platforms should spawn
    public int direction;
    public int consecutiveJumped;
    public float rotationAngleMultiplier;

    // How many platforms are placed consecutively
    private int consecutivePlaced;

    private int consecutiveSpawned;
    // The player's score. It is in this file and not in the player script because it needs to be used by the platforms.
    public int score;

    public Material[] mats;

    // Use this for initialization
    void Start()
    {
        rotationAngleMultiplier = 2;
        score = 0;
        // Define the platforms list as a new List of GameObjects
        platforms = new List<GameObject>();
        // Add the first platforms already in the scene to the list of platforms
        platforms.Add(transform.GetChild(0).gameObject);
        // Spawn 10 platforms
        for (int i = 0; i < 10; i++)
        {
            SpawnPlatform();
        }
    }

    // Update is called once per frame
    void Update()
    {
    }

    // Function to spawn a new platform
    public void SpawnPlatform()
    {
        // If 4 blocks have spawned changes direction in which the cubes spawn (adds 1 to the variable "direction")
        if (consecutivePlaced == 3)
        {
            consecutivePlaced = -1;
            direction++;
            if (direction >= 4)
            {
                direction = 0;
            }
        }
        // Saves the position of the last platform spawned in a Vector3
        Vector3 lastPlatPosition = platforms[platforms.Count - 1].transform.localPosition;
        // Creates a random number in a specified range to be used for platform spawning
        float randomCord = Random.Range(-4f, 4f);
        // Instantiates a new platform prefab
        GameObject newPlat = Instantiate(Resources.Load("Platform")) as GameObject;

        // This line calls the initialize funcition of the newley created platform and passes this to be the "platforms" variable
        newPlat.GetComponent<Platform>().Initialize(this, direction, consecutiveSpawned, consecutivePlaced);

        // These if statements determine in which direction the tiles should spawn in. if the remainder of direction equals 0, spawn on z positive, etc.
        if (direction == 0)
        {
            // Positions the newly created platform respectively
            newPlat.transform.position = new Vector3(lastPlatPosition.x + randomCord, lastPlatPosition.y + 1f, lastPlatPosition.z + 4);
            newPlat.transform.eulerAngles = new Vector3(0, 0, 0);
        }
        if (direction == 1)
        {
            newPlat.transform.position = new Vector3(lastPlatPosition.x + 4, lastPlatPosition.y + 1f, lastPlatPosition.z + randomCord);
            newPlat.transform.eulerAngles = new Vector3(0, 90, 0);
        }
        if (direction == 2)
        {
            newPlat.transform.position = new Vector3(lastPlatPosition.x + randomCord, lastPlatPosition.y + 1f, lastPlatPosition.z - 4);
            newPlat.transform.eulerAngles = new Vector3(0, 180, 0);
        }
        if (direction == 3)
        {
            newPlat.transform.position = new Vector3(lastPlatPosition.x - 4, lastPlatPosition.y + 1f, lastPlatPosition.z + randomCord);
            newPlat.transform.eulerAngles = new Vector3(0, 270, 0);
        }
        // Makes this (the "Platforms" empty) the parent of the newly created platform
        newPlat.transform.parent = this.transform;
        // Adds the newly created platform to the platforms list
        platforms.Add(newPlat);
        // Adds 1 to consecutivePlaced
        consecutivePlaced++;
        consecutiveSpawned++;
        newPlat.GetComponent<Platform>().scoreText.GetComponent<TextMesh>().text = consecutiveSpawned.ToString();
    }
}