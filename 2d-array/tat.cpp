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

void spiralPrint(vector<vector<int>>& arr) {
  int rows = arr.size();
  int cols = arr[0].size();
  
  int left = 0;
  int right = cols - 1;
  int top = 0;
  int bottom = rows - 1;

  int totalElements = rows * cols;
  int count = 0;

  while ( count < totalElements ) {
    //print first row
    for ( int col = left; count < totalElements && col <= right; col++) {
      cout << arr[top][col] << " ";
      count++;
    }
    top++;

    //print last col
    for ( int row = top; count < totalElements &&  row <= bottom; row++) {
      cout << arr[row][right] << " ";
      count++;
    }
    right--;

    //print last row;
    for ( int col = right; count < totalElements && col >= left; col--) {
      cout << arr[bottom][col] << " ";
      count++;
    }
    bottom--;

    //print first col;
    for ( int row = bottom; count < totalElements && row >= top; row--) {
      cout << arr[row][left] << " ";
      count++;
    }
    left++;

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
  
  //printWaveWise(arr);
  spiralPrint(arr);

  return 0;
}