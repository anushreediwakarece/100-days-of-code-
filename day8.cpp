// pattern printing code :
#include<iostream>
using namespace std ; 
int main()
{  
    int n = 0 ; //this is for basically how many rows are supposed to be printed 
    int val ; 
    cout<<" enter n : "<<endl ; 
    cin>>n; 
    //now to print the pattern we will use for loop 
    //the pattern should look as follows 
    //1 1 1 1 
    //2 2 2 2 
    //3 3 3 3 
    //4 4 4 4 
    //for the number of rows (horizontal) we will use variable i in for loop 
    for(int i = 1; i<=n ; i++)
    {   
        //to print columns :
        for (int j = 1; j<= n ; j++)
        { 
           cout<< i <<"" ; 

        } 
        cout<<endl ; 
    }

    return 0 ; 


}