// the logic of the code is that we find the left largest , we find the right largest
// then we find minimum of both and then we subtract the  height of the middle  of each individual bar 
//from them and at the end we add  all the rain water trapped by each bar 



#include<iostream>
#include<climits>
#include<algorithm>
using namespace std ; 
int trap ( int height[] , int n )
{
    int leftmax[20000]; //limits of leetcode 
    if (n <= 0) return 0;
    leftmax[0]= height[0] ; 
    for(int i = 1 ; i<n ; i++) //finding the left largest 
    {
        leftmax[i]= max ( leftmax[i-1], height[i-1]); 
       // cout<<leftmax[i]<<" , "; 
    }
    //now to find the right max 
    int rightmax [20000];
    rightmax[n-1]= height[n-1]; 
    for(int i = n-2 ; i>=0  ; i--)
    {
        rightmax[i]= max( rightmax[i+1] , height[i+1]); 
        // the values computed here get stored in the array which we created above 

    }
    //for every bar we have found out what are the maximum values 
    //on the left nd right of the bar
    // now we will find the min  of both left largest nd right largest nd then subtract 
    //individual bar height to find water trapped due to each individual bar 
int water =0 ; 
for(int i = 0 ; i<n ; i++)
{
  int cwater = min(leftmax[i] , rightmax[i]) - height[i]; 
  if (cwater >0 )
  {
    water += cwater ; 
  }
}
cout<<" water trapped is "<<water ; 
return water ; 
}


int main()
{
    int height[] ={ 4,2,0, 6,3,2,5 }; 
    int n = sizeof(height)/sizeof(int); 
    trap(height , n ); 
    return 0 ; 

}