#include <iostream>
using namespace std;
// KWAME AGYENIM-BOATENG-10679301
int main()
{   // we declare variables
    int x,y;
    bool isPrime = true;
    //asks for user input
    cout << "Enter a positive integer:";
    cin>>y;
    for(x=2;x<=y/2;x++)
    {
        if(y % x==0)
        {
            isPrime=false;
            break;
        }
    }
     if(y==1)
    {// outputs where a number is prime or not
        cout << y<< " is not a prime number.";
    }
    else if(isPrime)
        {
        cout << y<< " is a prime number.";
        }else
        cout << y<< " is not a prime number.";
    return 0;
}
