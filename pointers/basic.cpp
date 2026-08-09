#include <iostream>
using namespace std;

int main() {
  int num = 5;
  //cout << "Address of variable number: " << &num << endl;

  int *ptr = &num;
  cout << num << endl;
  cout << *ptr << endl;
  cout << ptr << endl;
  cout << &num << endl;
  cout << sizeof(int*) << endl;
  cout << sizeof(num) << endl;
  *ptr = 10;
  cout << num << endl;

  int arr[3] = {2,23,32};

  int *ptr2 = arr;

  for (int i = 0; i < 3; i++) {
    cout << *ptr2 << endl;
    ptr2++;
  }

  return 0;
}