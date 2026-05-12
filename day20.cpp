#include<iostream>
using namespace std ; 
int main ()
{
 char ch = 'A'; 
 int n ; 
 cout <<"enter n : "; 
 cin >>n ; 
 for (int i ; i <= n ; i++ )
 {
    for (int j = 1; j <= i ; j++)
    {
        cout<<ch <<" "; 
        ch ++ ; //we can also include this same line in the above cout statement 
        //like ch++ as it will be post increment it will print the currrent value and then it eill increment the value of ch
    }
    cout <<endl ; 
 }
 return 0; 
}