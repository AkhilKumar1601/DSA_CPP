#include<iostream>
using namespace std;

void increment(int *p) {
  (*p)++;
}

void solve(int *p) {
  p = p + 1;
}

int main() {

  int num = 5;
  
  increment(&num);

  cout << num << endl;;

  solve(&num);

  cout << num << endl;

  return 0;
}