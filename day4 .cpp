#include<iostream>
using namespace std ; 
int linear( int key , int arr[] , int n )
{
    for( int i =0 ; i<n ; i++)
    {
        if( arr [i] ==target )
        {
            return i ; 
        }
    }
    return -1 ; 
}
int main()
{
    int  arr [] = { 2,4,6,8,10,12,14}
    {
        int n = soizeof(arr)/ sizeof(int) ; 
        int key ; 
        cout<<"enter key "
        cin>>key ; 
        int i = linear( key , arr , n ); 
        if(i ==-1)
        {
            cout<<"element not found "<<endl ; 
        }
        else 
        {
            cout<<"element found at index "<<i<<endl ;
        }

    }
    return 0 ;  
}