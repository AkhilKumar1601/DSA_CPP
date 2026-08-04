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

int main() {

  vector<vector<int>> arr = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };

  int target = 5;

  if(!searchMatrix(arr,target)) cout << "Not found";
  
  return 0;
}