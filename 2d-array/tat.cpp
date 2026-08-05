#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& arr, int target) {
  int rows = arr.size();
  int cols = arr[0].size();

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (arr[i][j] == target) {
        cout << "Found at Row = " << i << ", Column = " << j << endl;
        return true;
      }
    }
  }

  return false;
}

void printWaveWise(vector<vector<int>>& arr) {

    int rows = arr.size();
    int cols = arr[0].size();

    for (int col = 0; col < cols; col++) {

        // Even column -> Top to Bottom
        if (col % 2 == 0) {

            for (int row = 0; row < rows; row++) {
                cout << arr[row][col] << " ";
            }

        }
        // Odd column -> Bottom to Top
        else {

            for (int row = rows - 1; row >= 0; row--) {
                cout << arr[row][col] << " ";
            }

        }
    }

    cout << endl;
}

void rowWiseSum(vector<vector<int>>& arr) {
  int rows = arr.size();
  int cols = arr[0].size();

  for ( int i = 0; i < rows; i++ ) {
    int sum = 0;
    for ( int j = 0; j < cols; j++ ) {
      sum += arr[i][j];
    }
    cout << "Sum of " << i << "th row" << sum << endl;
  }

  return;
}

void colWiseSum(vector<vector<int>>& arr) {
  int rows = arr.size();
  int cols = arr[0].size();

  for ( int j = 0; j < cols; j++ ) {
    int sum = 0;
    for ( int i = 0; i < rows; i++ ) {
      sum += arr[i][j];
    }
    cout << "Sum of " << j << "th col" << sum << endl;
  }

  return;
}

int main() {

  vector<vector<int>> arr = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };

  int target = 5;

  //if(!searchMatrix(arr,target)) cout << "Not found";
  /*rowWiseSum(arr);
  colWiseSum(arr);*/
  
  printWaveWise(arr);


  return 0;
}