#include <iostream>
#include <string>
using namespace std;

string plant(string seed, int water, int fert, int temp) 
{
    string stem = "-";
    string flowerCluster = " ";
    string plantString = ""; 

    for (int i = 0; i < fert; i++)
    {
        flowerCluster += seed;
    }

    if (temp >= 20 && temp <= 30) 
    {
        for (int i = 0; i < water; i++)
        {
            plantString += stem + flowerCluster;
        }
    }
    else
    {
        for (int i = 0; i < water - 1; i++)
        {
            plantString += stem;
        }
        plantString += stem + seed;
    }

    return plantString;
}

int main() 
{
    string seed;
    int water, fert, temp;
    
    cout << "Enter the type of seed: ";
    cin >> seed;
    cout << "Enter the unit of water: ";
    cin >> water;
    cout << "Enter the unit of fertilizer: ";
    cin >> fert;
    cout << "Enter the temperature: ";
    cin >> temp;
        
    cout << plant(seed, water, fert, temp) << endl;

    return 0;
}
