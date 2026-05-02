#include<iostream>
using namespace std ; 
int main ()
{
    int n ; 
    cout<<"enter n : "; 
    cin>>n ; 
    //pattern should look like : 
    /*
    ****
    ***
    **
    * 
     this is called inverted star pattern */
     //for this pattern 2 for loops will be required 
     for (int i = n  ; i <=  ( n+1 ) ; i -- )
     {
        for( int j = 1   ; j <= i   ; j ++ ) // for printing stars 
        {
            cout<<"*"<<"";
        }
     
 cout<<endl ; 
    }
 return 0 ; 
}