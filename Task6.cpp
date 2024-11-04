#include <iostream>
using namespace std;

int findCubes(long m) 
{
    int n = 0;
    long volumeSum = 0;

    while (volumeSum < m) 
    {
        n++;
        volumeSum += n * n * n;
    }

    if (volumeSum == m) 
    {
        return n;
    }
	 else
         {
          return -1;
   	 }
}

int main() 
{
    long m;
    cout << "Enter the total volume of the building: ";
    cin >> m;

    int result = findCubes(m);
    if (result != -1) 
    {
        cout << "The number of cubes needed is: " << result << endl;
    }
    else 
    {
        cout << "No such number of cubes can create this volume." << endl;
    }

    return 0;
}
