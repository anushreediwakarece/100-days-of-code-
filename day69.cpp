//matrix addition code : 
#include<iostream>
using namespace std ; 
int main()
{
    int row , col ; 
    cout<<"enter the number of rows and columns: "; 
    cin>>row>>col ; 
    int a[row][col], b[row][col], c[row][col];
    //now we need to take input for the first matrix :
    cout<<"enter the elements of the first matrix:  "<<endl ; 
    for(int i =0 ; i<row ; i++)
    {
        for(int j =0 ; j <col ; j++)
        {
            cin>>a[i][j]; 
        }
    }
    //now we will take input for the second matrix :
    cout<<"enter the elements of second matrix: "<<endl ; 
    for(int i=0 ; i<row; i++)
    {
        for(int j =0 ; j<col ; j++)
        {
            cin>>b[i][j]; 
        }
    }
    //now we will add the two matrices and store the result in third matrix :
    for(int i =0 ; i<row; i++)
    {
        for(int j =0 ; j<col ; j++)
        {
            c[i][j]=a[i][j]+b[i][j] ; 
        }
    }
    //now we will display the result matrix :
    cout<<"the matrix after addition is : "<<endl ; 
    for(int i =0 ; i<row; i++)
    {
        for(int j =0 ; j<col ; j++)
        {
            cout<<c[i][j]<<" "; 
        }
    }
    return 0 ; 

    }