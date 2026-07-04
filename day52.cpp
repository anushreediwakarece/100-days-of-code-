//largest in an array 
#include<iostream>
using namespace std ; 
int main()
{
    int arr[] ={2,5,9,3,8}; 
    int n = sizeof(arr)/sizeof(int);
    int largest = arr[0]; 
    for(int i = 1 ; i<n ; i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i]; 
            // cout<<"the largest element in the array is "<<arr[i]<<endl ; 
        }
        // else{
        //     cout<<"the largest element in the array is "<<largest<<endl ; 
        // }
    }
    cout<<"the largest element in the array is "<<largest<<endl ; 
    return 0 ; 
}