#include<iostream>
using namespace std;

void reverseString(char ch[], int n) {
  int s = 0;
  int e = n - 1;
  while (s<e) {
    swap(ch[s++],ch[e--]);
  }

  return;
}

bool isPalindrome(char ch[], int n) {
  int s = 0;
  int e = n - 1;
  while (s<e) {
    if (ch[s] != ch[e]) return false;
    s++;
    e--;
  }

  return true;
}

void lowerCaseString(char ch[]) {
  for (int i = 0; ch[i] != '\0'; i++) {
    if (ch[i] >= 'A' && ch[i] <= 'Z') ch[i] = ch[i] - 'A' + 'a';
  }

  return;
}

void printString(char ch[]) {
  for (int i = 0; ch[i] != '\0'; i++) {
    cout << ch[i] << " ";
  }
  cout << endl;

  return;
}

int printLeng(char ch[]){
  int count = 0;
  for (int i = 0; ch[i] != '\0'; i++) {
    count++;
  }
  cout <<"The length of the character Array is " << count << endl;

  return count;
}

int main(){
  char ch[20] = {'a','b','c','a','c','b','a'};
  int length = printLeng(ch);
  /*printString(ch);
  reverseString(ch,length);
  printString(ch);*/
  if (isPalindrome(ch,length)) cout << "Character Array is Palindrome" << endl;
  else cout << "Character Array is not Palindrome" << endl;

  return 0;
}
