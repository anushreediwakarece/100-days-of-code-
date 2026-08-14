#include<iostream> 
using namespace std ; 
void  Counter ()
 {
    static int count ; //without static keyword , the function will print only 0 
    //now after static it will print 1,2,3 . 
    count ++; 
    cout<<" count = "<<count <<endl ; 
 }
 
 int main ()
 {
    Counter(); 
    Counter (); 
     Counter (); 
     return 0 ; 
 }