//linear search 
#include<iostream>
using namespace std ; 
int linear(int arr[], int n, int key)
{
    for(int i = 0 ; i<n ; i++)
    {
        if(arr[i]==key )
        {
            return i;
        }
    }
    return -1;
}

int binary ( int arr[], int n , int key ) //binary search function 
{
  int st = 0 ; 
  int end = n-1 ; 
    while(st<=end)
  {
    int mid =(st+end)/2; 
    if(arr[mid ]== key)
    {
                return mid; // key found
    }
    else if( arr[mid]<key)
    {
        //key will be present in 2 nd half 
        st= mid+1 ; 

    }
    else{
        end = mid-1 ; // key is present in the first half 

    }
  }
  return -1 ; 
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int); 
    int key ; 
    cout<<"enter the element to be searched "<<endl ; 
    cin>>key ; 
     int i = linear(arr , n, key  ); 
    if(i==-1)
    {
        cout<<"element not found "<<endl ; 
    }
    else {
        cout<<"element found at index"<<i<<endl ; 
    }

    int bi = binary(arr, n, key);
    if(bi == -1)
    {
        cout<<"(binary) element not found"<<endl;
    }
    else {
        cout<<"(binary) element found at index "<<bi<<endl;
    }

    return 0 ; 

}