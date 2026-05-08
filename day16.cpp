#include<iostream> 
#include<vector> 
using namespace std ; 
int main()
{ 
    int numbers [] = { 10,20,30,40,50 }; //declaration and initialization of array
    //calculating size of array 
    int size =sizeof(numbers)/sizeof(numbers[0]) ;
    cout<<" printing using a standard for loop " << endl; 
    for (int i =0 ; i<size ; i++)
    { 
        cout<<numbers [i]<<""; 
    } 
    cout<<" printing using a range based for loop "<< endl;
    for (int num: numbers )
    { 
        cout<<num<< " "; 
    }
 return 0 ; 
}