#include <iostream>
using namespace std;

int main() { 
    int n = 4; 
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Check if we are on the border of the square
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        // Move to the next line ONLY after the entire row is printed
        cout << endl; 
    }
    
    return 0; 
}