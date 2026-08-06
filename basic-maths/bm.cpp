#include<iostream>
using namespace std;

bool isPrime(int n) {
  if (n <= 1) return false;

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }

  return true;
}

int main() {
   if(isPrime(7)) cout << "Number is prime" << endl;
   else cout << "Number is not prime" << endl;

   return 0;
}