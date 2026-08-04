#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<vector<int>> arr(3,vector<int>(3));

  cout << "Enter 9 elements:\n";

    // Input
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nRow-wise:\n";

    // Row-wise
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nColumn-wise:\n";

    // Column-wise
    for (int j = 0; j < arr[0].size(); j++) {
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

  
  return 0;
}