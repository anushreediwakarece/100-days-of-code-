// cde to print thr sum of array 
#include<iostream>
using namespace std ; 
int main()
{
    int arr [5] ; 
    // for loop to take input from user : 
    for (int i =0 ; i<5 ; i++)
    {
        cin>>arr[i] ; 
    }
    // for loop to display the array which was taken as input 
    for(int i =0 ; i<5  ; i++)
    {
        cout<<arr[i]; 
    }
    //for loop to print the sum of the array : 
    int sum = 0 ; 
    for (int i = 0 ; i<5 ; i++)
    {
        sum +=arr[i];
    }
    cout<<"Sum of the array is: "<<sum<<endl;
    return 0 ;  
}