//reverse the  array code 
//we will not use extra space in this approach we will use 2 pointer approaach in this qns 
#include<iostream>
using namespace std ; 
void reverse ( int arr[] , int n )
{
    for(int i =0 ; i<n ; i++)
    {
        cout<<arr[i]<<","; 
    }
    cout<<endl ; 
}
int main()
{
    int arr[] = { 5,4,3,9,2};
    int n = sizeof(arr)/sizeof(int); 
    // now we will  create a function whih we first print the original array and then it will print the reversed array
    int st = 0 ; int end = n-1 ; 
    while(st<end)
    {
        int temp = arr[st]; 
        arr[st]=arr[end]; 
        arr[end]=temp ; 
        st ++; 
        end --; 
    } 
    reverse(arr, n );
    return 0 ; 

}