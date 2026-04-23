//in hierarchial inheritance there is one base class and two derived classes 
#include<iostream>
#include<string>
using namespace std ; 
class Animal
{  public:
    void eat()
    {
        cout<<"eats..."<<endl ; 
    }
    void breathe ()
    {
        cout<<"breathes"<<endl ; 
    }

}; 
class bird : public Animal
{
    void see ()
    {
        cout<<"can see "<<endl ;
    }
}; 
class fish : public Animal 
{    void swim (){
    cout<<"can swim "<<endl ; 
} 
}; 
int main()
{
    Animal a1; 
    fish f1 ;
    f1.eat(); 
    f1.breathe(); 
    return 0 ; 
}
