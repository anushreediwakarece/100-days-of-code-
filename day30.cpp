//code to print all prime numbers from 2 to n 
#include<iostream>
using namespace std ; 
//function to check if the number enetered by  the user is prime or not prime 
bool isprime( int n )//i becomes n so to check for the later i we write this block of code to check if its prime or not 
{
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
    }

void allprime( int n )
{
    //func to print all the numbers from 2 to n 
    for(int i = 2 ; i<=n; i++)
    {
        if(isprime(i))
        {
            cout<<i<<" "<<endl ; 
        }
        
    }

}
int main()
{
    allprime(13); 
    return 0 ; 
    
}