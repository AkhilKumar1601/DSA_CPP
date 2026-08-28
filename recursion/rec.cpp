#include <iostream>
using namespace std;

void print(int n) { 

  if (n == 0) return;        // base condition - tells recursion stops here.

  cout << n << " ";

  print(n-1);  // recursion - function call itself.

}

int fact(int n) {
  if ( n == 0 || n == 1) return n;

  return n * fact(n - 1);
}

int main() {

  //print(5);

  cout << fact(5) << endl;

  return 0;
}