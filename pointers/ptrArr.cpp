#include<iostream>
using namespace std;

int main() {

  int arr[5] = {10, 20, 30, 40, 50};
  cout << &arr << endl;
  cout << &arr[0] << endl;
  cout << arr << endl;
  cout << *arr << endl;
  cout << *(arr+1) << endl;
  cout << *arr + 1 << endl;

  // arr[i] == *(arr+i)

  int *ptr = arr;
  cout << sizeof(arr) << endl;
  cout << sizeof(ptr) << endl;
  

  return 0;
}