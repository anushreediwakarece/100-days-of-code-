//linear search code 
#include<iostream>
using namespace std ; 
//func defn 
int linear ( int arr[], int key , int n )
{
    for(int i =0 ; i<n ; i++)
    {
        if(arr[i]==key )
        {
            return i ; 
        }
    }
    return -1 ; 
}
 int main ()
 {
    int arr []={ 1,2,3,4,5,6}; 
    int n = sizeof (arr)/sizeof(int) ; 
    int key ; 
    cout<<"enter value to be searched "<<endl ; 
    cin>>key ; 
    int i = linear(arr, key, n);
    if( i ==-1 )
    {
      cout<<"number not found "<<endl ; 
    }
    else{
        cout<<"number found at index "<<i<<endl ; 
    }
    return 0 ; 

 }