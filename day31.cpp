#include<iostream>
using namespace std ; 
void change(int *ptr)//this takes &a as its argument and goes at its address
//and makes change in the value of original variable 
{
    *ptr = 50; //here it actually makes change in the original variable 
    cout<<*ptr<<endl ; 

}
int main()
{
    int a =10 ; 
    change(&a); //here we pass the address of a so when we call this
    //func it goes to the addres of a and makes the necessary changes 
    cout<<a<<endl ; 
    return 0 ; 
}