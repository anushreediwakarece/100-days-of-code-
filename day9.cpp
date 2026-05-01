//star pattern printing code : 
#include<iostream>
using namespace std ; 
int main ()
{
    int n ; 
    cout<<"enter n : "<<endl ; 
    cin>>n; 
    for(int i = 1; i<=n ; i++) // for rows 
    {
        for( int j = 1 ; j<= i ; j++)//for column 
        {
            cout<<j ; 
        }
        cout<<endl ; 
    }
  //cout<<endl ; 

}