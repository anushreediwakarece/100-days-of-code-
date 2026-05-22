#include<iostream>
using namespace std ; 
bool isprime(int n )
{
    if(n<=1)
    {
        return false ; 

    }
    for( int i =2 ; i<=(n-1); i++)
    {
        if( n%i==0 )
        {
            return false ; 
        }
    
    else
    {
    return true ; 
    }
}
}
int main()
{
    int num =6 ; 
    if (isprime(num))
    {
        cout<<"the number is a prime number "<<endl ; 
    } 
    else 
    {
        cout<<" the number is not a prime number "<<endl; 
    }
    return 0 ; 
}