#include<iostream>
using namespace std ; 
void printsub( int arr[] , int n )
{
 for( int st = 0 ; st<n ; st++)
 {
    for(int ed = st ; ed <n ; ed++)
    {
        // cout<<"("<<st<<","<<ed<<")"; 
        for(int i = st ; i<=ed ;i++)
        {
            cout<<arr[i]; 
        }
        cout<<" , " ; 
    }
    cout<<endl ;
 }
}
int main()
{
    int arr[]={ 1,2,3,4,5}; 
    int n = 5 ; 
    printsub( arr, n ); 
    return 0 ; 
}