//function overriding 
#include<iostream>
#include<string> 
using namespace std; 
class Parent{
    void show()
    {
        cout<<"parent class is shown ..."<<endl ; 
    }
}; 
class child : public Parent 
{ public :
  void show ()
  {
    cout<<" child class is shown ..."<<endl ; 
  }

}; 
int main()
{ 
    child c1 ; // object creation 
    c1.show(); 
    return 0 ; 
}