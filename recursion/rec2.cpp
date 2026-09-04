#include<iostream>
using namespace std;

void reachHome(int source, int destination) {
  if(source == destination) {
    cout << "Reached Home" << endl;
    return;
  }

  source++;

  reachHome(source,destination);
}

int fib(int n) {
  if(n == 0 || n == 1) return n;

  return fib(n-1) + fib(n-2);
}

int countWays(int n) {
  if (n < 0) return 0;
  if (n == 0) return 1;

  return countWays(n - 1) + countWays(n - 2);
}

string arr[] = {
    "Zero", "One", "Two", "Three", "Four",
    "Five", "Six", "Seven", "Eight", "Nine"
  };

void sayDigits(int n) {
    if(n == 0) return;

    sayDigits(n / 10);

    int digit = n % 10;

    cout << arr[digit] << " ";
}

int main() {
  //  reachHome(1,5);
 // cout << "Fibonanci number on 8 place is: " << fib(8) << endl;

 //cout << countWays(5) << endl; 
 
 int n = 412;
 if ( n == 0 ) cout << "Zero";
 else sayDigits(n);

 return 0;
}