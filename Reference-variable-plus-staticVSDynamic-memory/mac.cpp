#include <iostream>
using namespace std;

#define NUM 50
#define SQUARE(x) ((x) * (x))
#define DOUBLE(x) ((x) + (x))

int x = 10;

void solve() {

  int x = 50;
  cout << ::x << endl;
  cout << x << endl;
}

void print(int num = 10) {  //default arguement
  cout << "Value is : " << num << endl;
  
  return;
}

int main() {
  //  cout << NUM << endl;

  //int a = 5;

  //  cout << SQUARE(a + 1) << endl;

  //cout << DOUBLE(a++) << endl;

  //  cout << DOUBLE(++a) << endl;

  //solve();

  print(1);
  print();

  return 0; 
}