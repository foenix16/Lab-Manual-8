#include<iostream>
using namespace std;
bool doesBrickfit(int d1,int d2,int d3,int w,int h)
{
    if((d1<=w && d2<=h) || (d1<=h && d2<=w) || (d1<=w && d3 <=h) || (d1<=h && d3<=w) || (d2<=w && d3<=h) || (d2<=h && d3<=w))
    {
        return true;
    }
    else 
    {
        return false;
    }
}

main()
{
    int d1,d2,d3,w,h;
    cout << "Enter first dimension: ";
    cin >> d1;
    cout << "Enter second dimension: ";
    cin >> d2;
    cout << "Enter third dimension: ";
    cin >> d3;
    cout << "Enter the width of hole: ";
    cin >> w;
    cout << "Enter the height of hole: ";
    cin >> h;
    cout << doesBrickfit(d1,d2,d3,w,h);
}