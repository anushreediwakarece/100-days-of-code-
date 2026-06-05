//binarysearch code 
#include<iostream>
using namespace std ; 
 int bs (int arr[], int  n , int key )
 {
int st = 0 ; int end = n-1 ; 
while(st<=end )
{
int mid = (st+end)/2 ; 
if (arr[mid]== key )
{
return mid ; 
}
else if(arr[mid]<key)
{
    //key is present in the second half 
    st= mid + 1 ; 
}
else 
{
    end = mid -1 ; //key is present in the 1 st half 

}
}
return -1 ; 
 }
 int main ()
 {
    int  arr[]={ 1,2,3,4,5,6,7,8,9};
    int n = sizeof (arr) / sizeof(int) ; 
    int mid ; 
    int key; 
    cout<<"enter a key to be searched"<<endl ; 
    cin>>key ;
     cout<< bs (arr ,n , key ) ; 
   cout<<endl;
   return 0;

 }