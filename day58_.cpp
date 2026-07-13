//selection sort : 
#include<iostream>
using namespace std ; 
void print(int arr[], int n )
{
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" "; 
    }
}
void selection(int arr[], int n )
{
    for(int i = 0 ; i<n ;i++)
    {   int mididx = i ; 
        for(int j=i+1; j<n ; j++)
        {
            if(arr[j]<arr[mididx])
            {
                mididx =j ; 
            }
        }
        swap(arr[i], arr[mididx]); 
    }
    print(arr, n ); 
}
int main()
{
    int arr[] = { 5,4,3,1,2 }; 
    int n = sizeof(arr)/sizeof(int); 
    selection( arr, n ); 
    return 0 ; 
}