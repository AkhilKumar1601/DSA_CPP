#include<iostream>
using namespace std;

void reverseString(string str, int i) {
  if ( i == str.length()) return;

  reverseString(str,i+1);

  cout << str[i] << " ";
}

void revS(string &str, int i, int j) {
  if(i >= j) return;

  swap(str[i],str[j]);

  revS(str,i+1,j-1);

}

int main() {
  // reverseString("abcd",0);

  string name = "Akhil";
  revS(name,0,name.length()-1);
  cout << name << endl;

  return 0;
}