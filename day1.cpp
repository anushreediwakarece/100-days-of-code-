/*create a uuuser class with properties :id private 
,username (public)& password (private ). its id should be initialized in a parameterized constructor . 
it should have getter and setter function */
#include<iostream>
#include<string>
using namespace std; 
class User {
    private: 
    int id ; //for this to initialize we have to use parameterised constructor 
    public:
    string username ; 
    string password; 
    User (int id , string ussername )//parameterised constructor 
    {
        this->id=id; 
        this->username =username ; 
        cout<<"id is "<<id<<endl;
        cout<<"username is "<<username<<endl;
    }
    void setpassword(string password )//setter ans getter function 
    {
        this->password = password; 
    }
     string getpassword()
     {
        return password ; 
     }
}; 
int main()
{
    User u1(1234, "anushree ");
    u1.setpassword("anushreeece ");
    cout<<u1.getpassword()<<endl ; 
    return 0 ; 
}