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

void solve(int n) {

    if(n == 0)
        return;

    cout << n << " ";

    solve(n - 1);

    cout << n * 10 << " ";
}

int power(int n) {
  if(n == 0) return 1;

  return 2 * power(n-1);
}

void solved(int n) {

    if(n == 0)
        return;

    cout << n << " ";

    solved(n - 1);
    solved(n - 1);
}

int main() {

  //print(5);

  /*cout << fact(5) << endl;
  cout << power(5) << endl;k*/

  solved(3);

  return 0;
}