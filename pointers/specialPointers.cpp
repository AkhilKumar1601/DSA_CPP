#include<iostream>
using namespace std;

int main() {
/*  int *p;    //Wild POinter
  cout << p << endl;
  cout <<  *p << endl;  //Segement fault  */

/*  int *p = nullptr;     //null pointer
  cout << p << endl; */
  
  //dangling pointer means the memory becomes empty.
  // danglin pointer means the object that the pointer refers to no longer exists, even if the old bytes are still sitting there.
  int *p = nullptr;

  {
    int num = 10;
    p = &num;
    cout << p << endl;
    cout << *p << endl;
  }

  cout << p << endl;
  cout << *p << endl;

  //void pointer (void *p) when we don't know the pointer is pointing to which type of data value.

  //conversion - int * q = static_cast<int*> (p);

  return 0;
}