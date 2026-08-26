#include<iostream>
using namespace std;

void incr(int &x) {
  x++;

  return;
}

void incr2(int x) {
  x++;

  return;
}

int main() {

  int i = 5;

  int &j = i;

  j = 10;

  cout << i << endl;

  //j is not the copy, j is the reference means two names(variables) for one value. 
  //copy case int i = 5; int j = i in the case j is copy of i.

  int i1 = 5;
  int j1 = i1;

  j1 = 10;

  cout << i1 << endl;

  // A reference must be initialized - int &j -- invalid.

  int num = 4;
  incr(num);
  cout << num << endl;
  incr2(num);
  cout << num << endl;

  
  return 0;
}