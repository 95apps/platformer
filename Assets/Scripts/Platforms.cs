using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Platforms : MonoBehaviour
{
    // Declare list of GameObjects called platforms
    public List<GameObject> platforms;
    // Variable that can be set in unity for the number of seconds before a platforms disappears
    public float countDown;

    public bool spawnPlat = false;

    // How many platforms are placed consecutively
    private int consecutivePlaced;
    // The direction in which the platforms should spawn
    private int direction;

    // Use this for initialization
    void Start()
    {
        // Define the platforms list as a new List of GameObjects
        platforms = new List<GameObject>();
        // Add the first platforms already in the scene to the list of platforms
        platforms.Add(transform.GetChild(0).gameObject);
        // Spawn 10 platforms
        for(int i = 0; i < 10; i++)
        {
            SpawnPlatform();
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (spawnPlat)
        {
            SpawnPlatform();
        }
        spawnPlat = false;
    }

    // Function to spawn a new platform
    public void SpawnPlatform()
    {
        // If 4 blocks have spawned changes direction in which the cubes spawn (adds 1 to the variable "direction")
        if(consecutivePlaced == 3)
        {
            consecutivePlaced = 0;
            direction++;
        }
        // Saves the position of the last platform spawned in a Vector3
        Vector3 lastPlatPosition = platforms[platforms.Count - 1].transform.localPosition;
        // Creates a random number in a specified range to be used for platform spawning
        float randomCord = Random.Range(-4f, 4f);
        // Instantiates a new platform prefab
        GameObject newPlat = Instantiate(Resources.Load("Platform")) as GameObject;
        // These if statements determine in which direction the tiles should spawn in. if the remainder of direction equals 0, spawn on z positive, etc.
        if(direction % 4 == 0)
        {
            // Positions the newly created platform respectively
            newPlat.transform.position = new Vector3(lastPlatPosition.x + randomCord, lastPlatPosition.y + 1, lastPlatPosition.z + 3);
        } if (direction % 4 == 1)
        {
            newPlat.transform.position = new Vector3(lastPlatPosition.x + 3, lastPlatPosition.y + 1, lastPlatPosition.z + randomCord);
        } if (direction % 4 == 2)
        {
            newPlat.transform.position = new Vector3(lastPlatPosition.x + randomCord, lastPlatPosition.y + 1, lastPlatPosition.z - 3);
        } if (direction % 4 == 3)
        {
            newPlat.transform.position = new Vector3(lastPlatPosition.x - 3, lastPlatPosition.y + 1, lastPlatPosition.z + randomCord);
        }
        // Makes this (the "Platforms" empty) the parent of the newly created platform
        newPlat.transform.parent = this.transform;
        // Adds the newly created platform to the platforms list
        platforms.Add(newPlat);
        // Adds 1 to consecutivePlaced
        consecutivePlaced++;
    }
}