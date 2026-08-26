#include<iostream>
using namespace std;

int main() {

  int row = 2;
  int col = 3;
  
  int** arr = new int*[row];
  
  for(int i = 0; i < row; i++) {
    arr[i] = new int[col];
  }
  
  arr[0][0] = 10;
  arr[0][1] = 20;
  arr[0][2] = 30;
  
  arr[1][0] = 40;
  arr[1][1] = 50;
  arr[1][2] = 60;

  // *(*(arr + i) + j) ---> row ka address - [*(arr+i)] , uss row ka col ka address - [*(arr+1) + j],actual integer value - [*(*(arr + i) + j)]

  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  for(int i = 0; i < row; i++) {
    delete[] arr[i];
  }

  delete[] arr;

  return 0;
}