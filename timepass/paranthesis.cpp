#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid( string s ) {
  stack<char> st;

  for ( char ch : s ) {
    if (ch == '(' || ch == '{' || ch == '[') st.push(ch);
    else {
      if (st.empty()) return false;

      if ((ch == ')' && st.top() == '(') ||
        (ch == '}' && st.top() == '{') ||
        (ch == ']' && st.top() == '[')) {
          st.pop();
      }
      else return false;
    }
  }

  return st.empty();
}

int main() {
  string s;
  cout << "Enter parentheses string: ";
  cin >> s;

  if (isValid(s)) cout << "Valid Paranthesis" << endl;
  else cout << "Invalid Paranthesis" << endl;

  return 0;
}