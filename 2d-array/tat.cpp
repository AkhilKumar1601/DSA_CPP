#include <iostream>
using namespace std;

int main() {
  //creating 2d-array, taking input and output.

  int arr[3][3];

  cout << "Give me inputs 9 values" << endl;

  for (int i = 0; i < 3; i++) {
    for ( int j = 0; j < 3; j++) {
      cin >> arr[i][j];
    }
  }

  //Printing the 2d-array.
  //row wise.
  for (int i = 0; i < 3; i++) {
    for ( int j = 0; j < 3; j++) {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }

  //col wise.
  for (int i = 0; i < 3; i++) {
    for ( int j = 0; j < 3; j++) {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }

  return 0;
}