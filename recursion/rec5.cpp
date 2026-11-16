#include<iostream>
using namespace std;

void print(int n) {
  if (n==0) return;

//  cout << n << endl;

  print(n-1);

  cout << n << endl;
}

void reachHome(int src, int dest) {
  if (src == dest) {
    cout << "Reached Home" << endl;
    return;
  }

  cout << "Current Position: " << src << endl;

  reachHome(src+1,dest);
}

int fact(int n) {
  if ( n == 0 || n == 1) return 1;

  return n * fact(n-1);
}

int power(int num,int pow) {
  if(pow == 0) return 1;

  return num * power(num,pow-1);
}

int fib(int n) {
  if (n == 0 || n == 1) return n;

  return fib(n-1) + fib(n-2);
}

int main() {
  print(5);

 // cout << fact(5) << endl;

  // cout << power(8,4) << endl;

//  reachHome(1,5);

  cout << fib(9) << endl;

  return 0;
}
