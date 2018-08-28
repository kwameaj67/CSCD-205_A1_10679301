#include <iostream>

using namespace std;

int main()
{
    int x,y;
    bool isPrime = true;
    cout << "Enter a positive integer" << endl;
    cin>>y;
    for(x=2;x<=y/2;x++)
    {
        if(y % x==0)
        {
            isPrime=false;
            break;
        }
    }   if(isPrime)
    {// outputs where a number is prime or not
        cout << y<< " is a prime number";
    } else (isPrime)
    {
        cout << y<< " is not a prime number";
    }
    return 0;
}
