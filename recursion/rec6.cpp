#include<iostream>
using namespace std;

int numOfWaysToClimb(int stairs) {
  if(stairs < 0) return 0;

  if(stairs == 0) return 1;

  return numOfWaysToClimb(stairs-1) + numOfWaysToClimb(stairs-2);
}

void sayDigits(int digit, string arr[]) {
  if(digit == 0) return;

  sayDigits(digit/10,arr);

  int num = digit % 10;
  cout << arr[digit % 10] << " ";

  // sayDigits(digit/10,arr);
}

bool isSorted(int* arr, int size) {

  cout << "Size is: " << size << endl;
  if(size < 2) return true;

  cout << "*arr is: " << *arr << endl;
  cout << "*(arr+1) is: " << *(arr+1) << endl;
  if(*arr > *(arr + 1)) return false;

  return  isSorted(arr+1,size-1);
}

void getSum(int* arr, int size, int &sum) {

  cout << "Size is: " << size << endl;
  if(size == 0) {
    cout << "Sum is: " << sum << endl;
    return;
  } 

  cout << "*arr"
  sum += *arr;
  cout << "Sum is --> sum += *arr is: " << sum << endl;

  getSum(arr+1,size-1,sum);
}




int main() {

  // cout << numOfWaysToClimb(2) << endl;

  /*
  string arr[10] = {
    "zero", "one", "two", "three", "four",
    "five", "six", "seven", "eight", "nine"
  };

  sayDigits(412,arr); */

  int arr[] = {1,2,3,4,5,6,34,40};
  // cout << isSorted(arr,8) << endl;

  int s = 0;;
  getSum(arr,8,s);

  return 0;
}