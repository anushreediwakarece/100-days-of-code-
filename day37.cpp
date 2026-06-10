#include<iostream>
#include<climits>
using namespace std ; 
void maxsubarraysum1(int arr[], int n)
{ int maxsum = INT_MIN;
    
    for(int st = 0 ; st<n ; st++)
    {  int  currsum =0 ; 
        for(int ed = st; ed < n; ed++) {
            currsum += arr[ed];
            maxsum = max(maxsum, currsum);
        }
    }
 cout<<"maximum subarray sum ="<<maxsum<<endl ; 
}
int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxsubarraysum1(arr, n);
    return 0;
}