//day 21 : revising prime not prime logic  
#include<iostream> 
using namespace std; 
bool isPrime( int n )
{ 
    //0 and 1  are not prime numbers 
    if ( n<=1 )
    { 
        return false ; 

    }
    if (n<=3 )
    {
        return true ; 
    }
    if (n%2 ==0 || n%3 ==0)
    {
        return false ; 
    }
    for ( int i = 5 ; i*i <=n ; i+=6 )
    {
        if (n % i == 0 ||  n % (i+2 )==0 )
        return false ; 
    }
    return true ; 
} 
    int main ()
    {
        int num ; 
        cout <<"enter a positive integer : "; 
        cin >> num ; 
        if ( isPrime(num))
        { 
            cout << num << " is a prime number "<<endl ; 
        }
        else 
        { 
            cout <<num <<" is not a prime number "<< endl ; 
        }
        return 0 ; 
    }