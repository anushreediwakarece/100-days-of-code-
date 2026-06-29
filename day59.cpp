//binary search code : 
#include<iostream>
using namespace std ; 
int bi( int arr[] , int n , int key )
{
      int st = 0;
      int end = n - 1;
      while( st <= end)
    {
        int mid = ( st+end)/2; 
        if(arr[mid] ==key )
        {
            return mid ; 
        }
        else if (arr[mid]< key )
        {
            st = mid+1 ; 
        }
        else 
        {
             end= mid-1 ; 
        }
    }
return -1 ;  
}
    int main()
    { int arr[] = { 2,3,4,5,6,7,8,9}; 
    int n = sizeof(arr)/ sizeof(int ); 
    int key ; 
    cout<<"enter key "; 
    cin>>key ; 

    
        int st , end ; 
        int st = 0 ; 
        int end = n-1 ; 
        int mid ; 
        cout<<bi(arr, n , key ); 
        cout<<endl ; 
        return 0; 

    }
