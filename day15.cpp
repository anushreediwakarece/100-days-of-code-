#include<iostream> 
using namespace std ; 
int main()
{
    int  n ; 
    cout<<"enter a positive integer : " ; 
    cin>> n ; 
    if (check_prime(n))
    {
        cout<<n<<"is a prime number " ; 
    }
    else
    {
        cout<<n<<"is not a prime number ";
    }
    return 0 ; 
}
 bool check_prime(int n )
 {
    bool is_prime = true ; 
    //0 and 1 are not prime numbers ;
    if (n == 0 || n == 1)
    {
        is_prime = false ;
    }
    return is_prime ;
 }