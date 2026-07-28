#include<iostream>
using namespace std ; 
class Counter{
    public: 
    int value  ; 
    // overload function , will return bool because (a==b )is either true or false 
    bool operator ==(Counter other )
    {
  Counter result ; //creating a variable to store the value true or false 
  if (this->value == other.value )
  { 
    return true; 
  }
  else 
  {
 return false ; 
  }

    }
}; 
int main()
{
 Counter c1, c2 ; 
 c1.value = 5 ; 
 c2. value = 3 ;
 //calling the overloaded function 
 if(c1==c2)
 {
    cout<< "the values are true "<<endl; 
 }
 else{
    cout<<" the values are not equal "<<endl ; 
 }
return 0; 
}