// 2d array taking in elements and printing code 
#include<iostream>
using namespace std ; 
int main()
{
    int arr[4][4]; 
    int n ; // no of rows 
    int m ; //no of columns 
    // loop to take elements input 
 for(int i =0 ; i<n ;i++)
 {
    for(int j =0 ; j<m ; j++)
    {
        cin>>arr[i][j];
    }
 }
    for(int i =0 ; i<n ; i++)
    {
        for(int j =0 ; j<m ;j++)
        {
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl; 
    }
    return 0 ; 

}