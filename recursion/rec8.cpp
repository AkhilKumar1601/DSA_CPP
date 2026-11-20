#include<iostream>
using namespace std;

int firstIndex(int* arr, int s, int e, int key, int& ans) {
  if(s > e) return ans;

  int mid = s + (e-s)/2;

  if(arr[mid] == key) {
    ans = mid;
    return firstIndex(arr,s,mid-1,key,ans);
  }
  else if(arr[mid] > key) return firstIndex(arr,s,mid-1,key,ans);
  else return firstIndex(arr,mid+1,e,key,ans);
}

int lastIndex(int* arr, int s, int e, int key, int& ans) {
  if(s > e) return ans;

  int mid = s + (e-s)/2;

  if(arr[mid] == key) {
    ans = mid;
    return lastIndex(arr,mid+1,e,key,ans);
  }
  else if(arr[mid] > key) return lastIndex(arr,s,mid-1,key,ans);
  else return lastIndex(arr,mid+1,e,key,ans);
}

int peakIndex(int* arr, int s, int e) {
  if(s>=e) return s;

  int mid = s + (e-s)/2;

  if(arr[mid] > arr[mid+1]) return peakIndex(arr,s,mid);
  else return peakIndex(arr,mid+1,e);
}

int main() {
  int ans = -1;
  int arr[] = { 1,3,8,12,4,2};
  int size = sizeof(arr) / sizeof(arr[0]);

  //cout << firstIndex(arr,0,size-1,22,ans);
  cout << peakIndex(arr,0,size-1);

  return 0;
}