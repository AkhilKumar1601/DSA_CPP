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

  //int arr[5] = {10,20,30,40,50};

  /*cout << arr << endl;

  cout << &arr << endl;

  cout << &arr[0] << endl;*/

  /*cout << *(arr+2) << endl;
  cout << *(&arr[0] + 2) << endl;*/

  // cout << *(arr + 1) << endl;
  // cout << *(&arr + 1) << endl;

  /* char ch[7] = "Hello";

  cout << ch << endl;
  cout << ch + 2 << endl;
  cout << *(ch + 2) << endl; */

  /*char ch[] = "ABCDE";

  char *p = ch;

  cout << p << endl;
  cout << p + 2 << endl;
  cout << *p << endl;
  cout << *(p+3) << endl; */

  /*int x = 10;
  int *p = &x;

  int **p2 = &p;

  cout << x << endl;
  cout << *p << endl;
  cout << **p2 << endl;*/

  /*int x = 10;
  int *p = &x;
  int **p2 = &p;
  **p2 = 50;
  cout << x << endl;
  cout << *p << endl;
  cout << **p2 << endl; */

  int arr[4] = {10, 20, 30, 40};
  int *p = arr;
  int **p2 = &p;
  cout << *p << endl;
  p = p + 2;
  cout << *p << endl;
  cout << **p2 << endl;
  **p2 = 100;
  cout << arr[2] << endl;


  return 0;
}