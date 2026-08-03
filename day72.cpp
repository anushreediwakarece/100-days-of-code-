// matrix transpose code : 
#include<iostream>
using namespace std ; 
int main()
{
    int n , m ; 
    cout<<"enter number of rows and columns: "; 
    cin>>n>>m ;
    int arr[n][m]; 
    cout<<"enter elements for array:"<<endl; 
    for(int i =0 ; i<n ; i++)
    {
        for(int j =0 ; j<m ; j++)
        {
            cin>>arr[i][j]; 
        }
    }
    //now we will print the original matrix 
    for(int i =0 ; i<n ; i++)
    {
        for(int j =0 ; j<m ; j++)
        {
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl; 
    }
    //now transpose matrix 
    for(int j =0 ; j<m ; j++)
    {
        for(int i =0 ; i<n ; i++)
        {
            cout<<arr[j][i]<<" "; 
        }
        cout<<endl;
    }
    return 0 ;
}