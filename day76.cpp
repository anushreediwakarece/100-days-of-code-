#include<iostream>
using namespace std ; 
int main()
{
    //arrays for polynomial 1 (c1 = coefficient , e1 = exponent )
    int c1[20], e1[20]; 
    //arrays for polynomial 2 (c2 = coefficient , e2 = exponent )
    int c2[20], e2[20];
    //array for final answer 
    int c3[20], e3[20];
    int n1 , n2 ; 
    cout<<"enter number of terms in polynomial 1 : ";
    cin>>n1;
    cout<<"enter coefficient and exponent of polynomial 1 : \n";
    for(int i =0 ; i<n1 ; i++)
    {
        cin>>c1[i]>>e1[i]; 
    }
    cout<<"enter number of terms in polynomial 2 : ";
    cin>>n2;
    cout<<"enter coefficient and exponent of polynomial 2 : \n";
    for(int i =0 ; i<n2 ; i++)
    {
        cin>>c2[i]>>e2[i];
    }
    //now we will initialize the iterators for polynomial 1 and polynomial 2 
    //i is for poly 1 , j is for poly 2 and k is for final answer
    int i =0 , j =0 , k =0 ;
    // now we will write code for addition 
    while ( i<n1 && j<n2 )
    { 
        if (e1[i] == e2[j] )
        {
        //when powers are same , we can add directly 
        c3[k] = c1[i] +c2[j]; 
        e3[k] = e1[i];
        i++;
        j++;
        k++;
    }
    else if (e1[i] >e2[j])
    {
        //this is the case where first poly has  a greater power than second poly , so we will add the first poly term to final answer
        c3[k] = c1[i];
        e3[k] = e1[i];
        i++;
        k++;
    }
    else 
    {
        //this is the case where second poly has  a greater power than first poly , so we will add the second poly term to final answer
        c3[k] = c2[j];
        e3[k] = e2[j];
        j++;
        k++;
    }
    }
    //if polynomial 1 had extra terms left over , we will add them to final answer
    while (i < n1) {
        c3[k] = c1[i];
        e3[k] = e1[i];
        i++;
        k++;
    }

    // If polynomial 2 had extra terms left over, copy them
    while (j < n2) {
        c3[k] = c2[j];
        e3[k] = e2[j];
        j++;
        k++;
    }

    int n3 = k; // Total number of terms in our final answer

    // Print it out to look like a math equation
    cout << "\nFinal Polynomial: ";
    for (int x = 0; x < n3; x++) {
        cout << c3[x] << "x^" << e3[x];
        
        // Put a plus sign if it's not the very last term
        if (x != n3 - 1) {
            cout << " + ";
        }
    }
    cout << "\n";

    return 0;
}
