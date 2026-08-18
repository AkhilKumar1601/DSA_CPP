#include<iostream>
using namespace std;

int main() {

 int i = 5;
 int *p = &i;

 cout << p << endl;
 cout << *p << endl;

 int **p2 = &p;
 cout << p2 << endl;
 cout << **p2 << endl;
 // cout << *p2 << endl;

 

 return 0;

}