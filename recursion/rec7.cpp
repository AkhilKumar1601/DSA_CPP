#include<iostream>
#include<climits>
using namespace std;

void getMax(int* arr, int size, int& max) {

  cout << "Size: " << size << " *arr: " << *arr << " max: " << max << endl;

  if(size == 0) {
    cout << "The maximum value in this particular array is: " << max << endl;
    return;
  }

  if(*arr > max) max = *arr;

  getMax(arr+1,size-1,max);
}

bool linearSearch(int *arr, int& key, int size) {

  if(size == 0) return false;
  if(*arr == key) return true;

  return linearSearch(arr+1,key,size-1);

}

int linearSearch2(int *arr, int key, int size, int i) {

  if(size == 0) return -1;
  if(*arr == key) return 0;

  if(linearSearch2(arr+1,key,size-1,i+1) == -1) return -1;

  return linearSearch2(arr+1,key,size-1,i+1) + 1;

}

int binarySearch(int* arr, int s, int e, int key) {
  //dry run from 41 to 43
  /*cout << "Start: " << s << " End: " << e << " Mid: " << s+(e-s)/2 << " Key: " << key << endl;
  
  for(int i = s; i <= e; i++) cout << arr[i] << " | ";
  cout << endl;*/
  
  if(s > e) return -1;

  int mid = s + (e-s)/2;

  if(arr[mid] == key) return mid;
  else if(arr[mid] > key) return binarySearch(arr,s,mid-1,key);
  else return binarySearch(arr,mid+1,e,key);
}

int main() {
  int arr[] = { 1,13,21,33,42,44,45,47};

  //int max = INT_MIN;
  int size = sizeof(arr) / sizeof(arr[0]);

  //  getMax(arr,size,max);

  int index = 0;

  int key = 42;
  //  cout << linearSearch2(arr,key,size,index);
 
  cout << binarySearch(arr,index,size-1,key) << endl;

  return 0;
}