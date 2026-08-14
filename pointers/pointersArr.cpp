#include<iostream>
using namespace std;

void solve(int *arr, int n) {   //int arr[] = int *arr
  cout << "Size of Array: " <<(n * sizeof(arr))/2 << endl;
  cout << "Size of pointer: " << sizeof(arr) << endl;

  return;
}

int main() {

  int arr[5] = {1,2,3,5,6};

  cout << "Size of Array: " <<  sizeof(arr) <<  endl;

  solve(arr,5);

  return 0;
}