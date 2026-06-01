#include<iostream>
using namespace std ; 
int main()
{ int arr[5]={5, 4, 3, 9, 2 };
int n = sizeof(arr)/sizeof(int); 
int max =arr[0] ; 
//now for traversal of array we will create a loop 
for(int i = 0 ; i<n ; i++)
{ if (arr[i]>max)
{ max= arr[i]; 
}
} 
cout<<"the largest element in the array is :"<<max<<endl ; 
return 0; 
}