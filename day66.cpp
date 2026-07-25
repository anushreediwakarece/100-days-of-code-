#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cout << "enter the size of array: ";
  if (!(cin >> n) || n <= 0) return 0;

  vector<int> arr(n);
  cout << "enter the elements inside the array:\n";
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}