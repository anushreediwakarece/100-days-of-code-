#include<iostream>
using namespace std; 
int main()
{
    int arr[]= { 0, 1,2,3,4 }; 
    int  n = sizeof(arr)/sizeof(int); 
    for(int st = 0 ; st<n ; st++)// code for printing subarrays 
    {
        for(int ed = st ; ed<n ; ed++)
        {
            for(int i = st ; i<=ed ; i++)
            {
                cout<<arr[i]; 
            }
            cout<<endl ; 
        }
    }
    return 0 ; 
}