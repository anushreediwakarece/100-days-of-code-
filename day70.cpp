// matrix transpose 
#include<iostream>
using namespace std ; 
int main()
{ 
    int rows ; 
    int columns ; 
    cout<<"enter the rows and columns"<<endl; 
    cin>>rows>>columns;
    int A[rows][columns]; 
    for(int i =0 ; i<rows ; i++)
    {
        for(int j =0 ; j<columns ; j++)
        {
            cin>>A[i][j];
        }
    }

    // first we will output normal matrix like original matrix 
    for(int i=0 ; i<rows; i++)
    {
        for(int j=0 ; j<columns;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl; 
    }

    cout<<"transpose matrix :"<<endl; 
    //to output the elements : transpose matrix 
    for(int j=0 ; j<columns; j++)
    {
        for(int i=0 ; i<rows ; i++)
        {
            cout<<A[i][j]<<" "; 
        }
        cout<<endl; 
    }
    return 0 ; 
}