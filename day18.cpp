#include<iostream> 
using namespace std ; 
int main()
{
    int n= 1221; 
    int temp = n ; 
    int revn=0 ; 
    int digit ; 
    do {

    
    digit = temp %10 ; 
    revn = revn*10+ digit ; 
    temp =temp/10 ;
    } while (temp!=0 ) ; 
    cout<<revn ; 
    if (revn == n  )
    {
        cout<<"the number is palindrome "<<endl ; 
    }
    else{
        cout<<"the number is not palindrome "<<endl ;
    }
    return 0 ; 
}