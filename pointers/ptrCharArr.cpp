#include <iostream>
using namespace std;

int main() {

  char arr[] = "Hello";
  char *ptr = arr;
  cout << *ptr << endl;

  ptr++;
  cout << *ptr << endl;
  cout << arr << endl;
  cout << ptr << endl;

  //Wrong practise.
  char ch[] = {'H','e','l','l','o'};
  char *p = ch;
  cout << ch << endl;
  cout << p << endl;
  cout << *p << endl;
  

  return 0;
}