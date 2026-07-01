#include<iostream>
#include <vector>
using namespace std;

vector<int> returnSpiral(const vector<vector<int>>& arr) {

  if (arr.empty()) return {};

 int row = arr.size();
 int col = arr[0].size();

 int startingRow = 0;
 int endingRow = row - 1;
 int startingCol = 0;
 int endingCol = col - 1;

 int count = 0;
 int total = row * col;

 vector<int> ans;

 while (count < total) {
  for (int i = startingCol; count < total && i <= endingCol; i++) {
    ans.push_back(arr[startingRow][i]);
    count++;
  }
  startingRow++;

  for (int i = startingRow; count < total && i <= endingRow; i++) {
    ans.push_back(arr[i][endingCol]);
    count++;
  }
  endingCol--;

  for (int i = endingCol; count < total && i >= startingCol; i--) {
    ans.push_back(arr[endingRow][i]);
    count++;
  }
  endingRow--;

  for (int i = endingRow; count < total && i >= startingRow; i--) {
    ans.push_back(arr[i][startingCol]);
    count++;
  }
  startingCol++;
 }
 return ans;
}

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    vector<int> ans = returnSpiral(arr);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}