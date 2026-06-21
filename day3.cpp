// linear search : 
#include<iostream>
using namespace std ; 
int linear ( int key , int arr [] , int n ) 
{
    for(int i = 0 ; i<n ; i++)
    {
        if(arr[i] == key )
        {
            return i ; 
        }
    }
    return -1 ; 
}
int main()
{
    int arr[] = { 2,4,6,8,10,12,14,16};
    int n = sizeof(arr) / sizeof (int) ; 
    int target ; 
    cout<<"enter no to be searched "<<endl ; 
    cin>>target ; 
    int i = linear (target , arr, n )
     if ( i==-1)
    {
        cout<<"element not found "<<endl ; 
    }
    else 
    {
        cout<<"element found "<<endl ; 
    }
    return 0 ; 
}