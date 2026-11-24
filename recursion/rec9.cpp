#include<iostream>
using namespace std;

void revAString(string& str, int i, int j) {
  if(i > j) return;

  swap(str[i],str[j]);

  revAString(str,i+1,j-1);
}

bool isPal(string& str,int i, int j) {
  if(i > j) return true;

  if(str[i] != str[j]) return false;

  return isPal(str,i+1,j-1);
}

bool isPal2(string& str, int i) {
  if(i >= str.length()/2) return true;

  int j = str.length() - i - 1;

  if(str[i] != str[j]) return false;

  return isPal2(str,i+1);
}

void revAString2(string& str, int i) {
  if(i >= str.length()/2) return;

  int j = str.length() - i - 1;

  swap(str[i],str[j]);

  revAString2(str,i+1);
}

void bubbleSort(int* arr,int size) {
   if(n == 0 || n == 1) return;

   for(int i = 0; i < n - 1; i++) {
    if(arr[i] > arr[i+1]) swap(arr[i],arr[i+1]);
   }

   bubbleSort(arr,size-1);
}

void selectionSort(int* arr, int i, int n) {

    if (i == n - 1) {
        return;
    }

    int minIndex = i;

    for (int j = i + 1; j < n; j++) {
        if (arr[j] < arr[minIndex]) minIndex = j;
    }

    swap(arr[i], arr[minIndex]);

    selectionSort(arr, i + 1, n);
}

void insertionSort(int* arr, int n) {
  if(n <= 1) return;

  insertionSort(arr, n-1);

  int key = arr[n-1];
  int j = n - 2;

  while(j >= 0 && key > arr[j]) {
    arr[j+1] = arr[j];
    j--;
  }

  arr[j+1] = key
}

int pow(int num, int power) {

  if(power == 0) return 1;
  if(power == 1) return num;

  int ans = power(num,power/2);

  if(power%2== 0) return ans * ans;  // if power is even;
  else return num * ans * ans;     // if power is odd;
}

int main() {
  string name = "madam";

  //revAString2(name,0);

  //cout << name << endl;

  cout << isPal(name,0,name.length() - 1);

  return 0;
}