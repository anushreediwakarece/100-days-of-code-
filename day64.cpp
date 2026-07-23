//matrix addition code : 
#include<iostream> 
using namespace std ; 
int main()
{
    int n ; // for rows 
    int m ; //for columns 
    cout<<"enter the number of rows ";
    cin>>n ; 
    cout<<"number of column "; 
    cin>>m ; 
    int arrA[n][m]; 
    for(int i =0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            cin>>arrA[i][j]; 
        }
    }
    int arrB[n][m]; 
    for(int i=0 ; i<n ; i++)
    {
        for(int j = 0 ; j<m ; j++)
        {
            cin>>arrB[i][j]; 
        }
    }
    //3 rd matrix will be needed to do addition and store the addition 
    int arrC[n][m]; 
    for(int i =0 ; i<n ; i++)
    {
        for(int j =0 ; j<m ;j++)
        {
            arrC[i][j]=arrA[i][j]+arrB[i][j]; 
        }
    }
    cout<<"the resulting array is ";
    for(int i =0 ; i<n ; i++)
    {
        for(int j =0 ; j<m ; j++)
        {
            cout<<arrC[i][j]<<" ";
        }
        cout<<endl; 
    }
return 0 ; 
}