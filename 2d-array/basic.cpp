#include<iostream>
using namespace std;

void takingInputInArray(int arr[][4], int row, int col) {
  for (int i = 0; i < row; i++) {
    for ( int j = 0; j < col; j++) {
      cin >> arr[i][j];
    }
  }

  return;
}

void wavePrint(int arr[][4], int row, int col) {
  for (int i = 0; i < col; i++) {
    if(i%2 == 0) {
      for (int j = 0; j < row; j++) {
        cout << arr[j][i] << " ";
      }
    }
    else {
      for (int j = row - 1; j >= 0; j--) {
        cout << arr[j][i] << " ";
      }
    }
    cout << endl;
  }

  return;
}

void rowWiseSum(int arr[][4], int row, int col) {
  for (int i = 0; i < row; i++) {
    int sum = 0;
    for ( int j = 0; j < col; j++) {
      sum += arr[i][j];
    }
    cout << "The sum of " << i + 1 <<" row is " << sum << endl;
  }

  return;
}

void colWiseSum(int arr[][4], int row, int col) {
  for (int i = 0; i < col; i++) {
    int sum = 0;
    for ( int j = 0; j < row; j++) {
      sum += arr[j][i];
    }
    cout << "The sum of " << i+1 <<" col is " << sum << endl;
  }

  return;
}


bool isPresent(int arr[][4], int target, int row, int col) {
  for ( int i = 0; i < row; i++ ) {
    for ( int j = 0; j < col; j++) {
      if ( arr[i][j] == target ) return true;
    }
  }
  return false;
}

void linearSearch(int arr[][4], int target, int row, int col) {
 for ( int i = 0; i < row; i++ ) {
    for ( int j = 0; j < col; j++) {
      if ( arr[i][j] == target ) {
        cout << "The value is present on "<< i+1 <<"th row and " << j+1 << "th column." << endl;
        return;
      }
    }
  }
  return;
}

void print2DArray(int arr[][4], int row, int col) {
  for (int i = 0; i < row; i++) {
    for ( int j = 0; j < col; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return;
}

int main() {
  int arr[3][4];  //= {{1,2,3,5},{3,4,5,2},{88,9,0,15}};

  takingInputInArray(arr,3,4);
  print2DArray(arr,3,4);

  /*int target;
  cout << "Enter the value that you want to search" << endl;
  cin >> target;
  if(isPresent(arr,target,3,4)) linearSearch(arr,target,3,4);
  else cout << "Value is not present" << endl;

  rowWiseSum(arr,3,4);
  colWiseSum(arr,3,4);
  */
  wavePrint(arr,3,4); 
  
  return 1;
}

