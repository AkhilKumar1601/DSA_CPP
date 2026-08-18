#include<iostream>
using namespace std;

int main() {

  /*int x = 10;
  int *p = &x;

  cout << x << endl;
  cout << *p << endl;

  *p = 20;

  cout << x << endl;
  cout << *p << endl;*/

  /*int arr[4] = {10,20,30,40};

  int *p = arr;

  cout << *p << endl;

  p = p + 2;

  cout << *p << endl;

  cout << *(p - 1) << endl;*/

  int arr[5] = {10,20,30,40,50};

  /*cout << arr << endl;

  cout << &arr << endl;

  cout << &arr[0] << endl;*/

  /*cout << *(arr+2) << endl;
  cout << *(&arr[0] + 2) << endl;*/

  cout << *(arr + 1) << endl;
  cout << *(&arr + 1) << endl;

  return 0;
}