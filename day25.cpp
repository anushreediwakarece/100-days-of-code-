//printing hollow rectangle 
#include<iostream>
using namespace std ; 
int main()
{
//when the value of i is equal to 1 or n at that time we will print 5 stars 
//and at the time when the value of i is equal to 2 or 3 then at that time we will print 1st 
//3 spaces and 1 st 
int n =4 ; 
for(int i =1 ; i<=n ; i++)
{
    cout<<"*";
    for( int j = 1 ; j<=(n-1) ; j++ ) 
    {
        if(i ==1||i==4)
        {
            cout<<"*"; 
        }
        else 
        {
            cout<<" "; 
        }
    }
    cout<<"*"<<endl ; 
}
return 0 ; 
}
