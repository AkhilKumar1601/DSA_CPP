#include <iostream>
using namespace std;

int main() {

  /*
  int *p = new int;
  int *q = new int(10);  //immediately initialize.

  cout << *q << endl;

  int n;
  cin >> n;

  int *arr = new int[n];

  //Important note :- like stack, in heap automatic cleanup is not done if the variable goes out of scope, you need to do it manually because in the above example p got destroyed but the heap allocation can remain allocated.

  delete p;
  delete q;
  delete[] arr;
  */

  /*
  //Memory leak - Be aware of this.
  int *p = new int;
  p = nullptr;
  int *arr = new int[10];
  arr = nullptr;
  // the above is the case of memory leak and it is very wrong without destroying the heap data you make the pointer null.
  */

  return 0;
}