#include<iostream> 
using namespace std ; 
int main()
{   int max , min ; 
    int num1 , num2  ; 
    cout << "enter a num1 number :"<<endl ; 
    cin>>num1 ; 
    cout<<"enter a num2  number : "<<endl ; 
    cin >>num2  ; 
    //but the user will enter random numbers so
     if ( num1 >num2 )
     { 
        cout<<" num1 is max "<<endl ;
         max = num1 ; 
         min = num2 ; 
     }
     else 
     {
      cout <<"num2 is max"<<endl ; 
      //now the case will change 
       max = num2 ; 
       min = num1 ; 
     }


    if (  max%min ==0 ) 
    {
        cout<<" the lcm is max : "<< max <<endl ; 
    }
    else
    { 
        for (int i = 1  ; i <=  num1*num2 ; i ++)
        {
            i = i + max ; 
            if ( i % min ==0 )
            {
                cout <<i <<endl ; 
                break ; 
            }
            else
{ 
    // Start at max, go until num1*num2, jump by 'max' each time
    for (int i = max; i <= num1 * num2; i += max) 
    {
        // Now you ONLY need to check the min!
        if (i % min == 0)
        {
            cout << "The LCM is: " << i << endl; 
            break; // This exits the loop immediately
        }
    }
}

        }

    }
}