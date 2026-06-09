//linear search code : 
#include<iostream>
using namespace std ; 
int linear ( int arr[], int n , int key )
{
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == key )
        {
            return i ; 
        }
    }
    return -1 ; 
}
int main()
{ int arr[] ={ 2,4,6,8,10,12,14,16 };
int n = sizeof (arr) /sizeof( int ); 
int key;
cout<<"enter key to be searched ";
cin>>key;
int index = linear(arr, n, key);
if(index == -1)
{
    cout<<"element not found"<<endl;
}
else
{
    cout<<"element found at index "<<index<<endl;
}
    return 0;
}