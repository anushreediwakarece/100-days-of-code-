#include<iostream>
using namespace std ; 
int main()
{ //code to check if the number is amstrong number 
    int n = 153 ;int a = 0  ; 
    int b = 0 ; 
    int originalN=n ; 
 while ( n>0 )
 {
   b=  n%10 ; 
  a = a + b*b *b ;  
  n= n/10 ; 


 }
 if ( a ==originalN   )
 {
    cout<<" the number is amstrong number"<<endl ; 
 }
 else {
    cout<<"the number is not amstrong number "<<endl ; 
 }
 return 0 ; 
}