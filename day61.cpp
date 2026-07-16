//spiral matrix code 
#include<iostream>
using namespace std ; 
void spiral(int arr[4][4], int n, int m)
{
    int top = 0 ; 
    int bottom = n - 1; 
    int left = 0 ;
    int right = m - 1 ;  
    while(left<=right && top<=bottom )
    {
        for(int i = left ; i<=right ; i++)
        {
            cout<<arr[top][i]<<" "; 
        }
        top++; 

        for(int i =top ; i<=bottom ; i++)
        {
            cout<<arr[i][right]<<" "; 
        }
        right-- ; 
        if(top<=bottom)
        {
        for(int i = right ; i>=left ; i--)
        {
            cout<<arr[bottom][i]<<" "; 
        }
        bottom --; 
    }
    if(left<=right)
    {
        for(int i = bottom ; i>=top ; i--)
        {
            cout<<arr[i][left]<<" "; 
        }
        left++; 
    }

    }
}
int main()
{
    int arr[4][4]= { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}}; 

    //above array declaration has been done ; 
    //now to print the  elements spirally we will write a function 
    int n =4  ; //number of rows 
    int m=4 ; // number of columns 
    // print original matrix (optional)
    for(int i =0 ; i<n; i++)
    {
        for (int j =0 ; j<m ; j++)
        {
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl ; 
    }

    cout<<"Spiral order: ";
    spiral(arr,n,m);
    cout<<endl;

    return 0;
   


}