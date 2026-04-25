//operator overloading code 
//we can add two numbers , 2 float numbers but ib c++when we want to add something which is not in the form of numbers , then we use operator overloading 
//for eg in case we want to add the objects then we overload '+' operator 
//we can also overload other operators 
// adding 2 points from 2d coordinate system 
#include<iostream>
using namespace std ; 
class Box {
    public:
    int weight; // data member of the class 
    //a simple setter function to set weight
    void setweight(int w)
    {
        weight =w ; 
    }
 
//the overload 
// this function runs when you write box1 + box 2
Box operator +(Box rightside ){
    Box result ; //create a new empty box called result 
    result.weight = this->weight +rightside.weight ; // set the box's weight 
    // to (my weight + the other box's weight)
    return result ; // hand this new box back to the main program 
} 
}; 
int main ()
{ 
    Box box1 , box2, total  ; //we can declare multiple objects in one line 
    box1.setweight(10); 
    box2.setweight(20); 
    total = box1+box2 ; 
    cout<<"total weight :"<<total.weight ; 
    return 0 ; 
}