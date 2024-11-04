#include <iostream>
using namespace std;

bool isPrime(int num) 
{
    if (num <= 1) return false; 
    if (num == 2) return true; 
    if (num % 2 == 0) return false; 

    for (int i = 3; i*i <=num; i += 2) 
   {
        if (num % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int primeNumbers(int n) 
{
    if (n < 2) 
    {
    return 0;
    }
    int Count = 0;
    for (int i = 2; i <= n; ++i) 
{
        if (isPrime(i)) 
        {
            Count++;
        }
    }
    
    return Count;
}


int main() 
{
    int number;
    cout << "Enter any number till you want to check the number of prime numbers : ";
    cin >> number;
    cout << primeNumbers(n);
    
    return 0;
}
