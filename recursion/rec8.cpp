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
  if(s==e) return s;

  int mid = s + (e-s)/2;

  if(arr[mid] > arr[mid+1]) return peakIndex(arr,s,mid);
  else return peakIndex(arr,mid+1,e);
}

int pivotIndex(int* arr, int s, int e) {
  
   if(arr[s] <=  arr[e]) return s; // already sorted

    if(s == e) return s;

    // Upper mid prevents infinite recursion
    int mid = s + (e - s + 1) / 2;

    if(arr[mid] >= arr[0]) return pivotIndex(arr, mid + 1, e);
    else return pivotIndex(arr, s, mid);
    
}


int binarySearch(int* arr, int s, int e, int key) {
  
  if(s > e) return -1;

  int mid = s + (e-s)/2;

  if(arr[mid] == key) return mid;
  else if(arr[mid] > key) return binarySearch(arr,s,mid-1,key);
  else return binarySearch(arr,mid+1,e,key);
}

int searchInRotatedSortedArray(int* arr, int s, int e, int key) {

  int pivotInde = pivotIndex(arr,s,e);

  if(arr[pivotInde] == key) return pivotInde;
  
  int ans = binarySearch(arr,s,pivotInde-1,key);

  if(ans == -1) {
    ans = binarySearch(arr,pivotInde,e,key);
  }

  return ans;
}

int sqrtBinarySearch(int n, int s, int e) {

  if(s > e) return e;

  int mid = s + (e - s) / 2;

  long long square = 1LL * mid * mid;

  if(square == n) return mid;

  if(square < n)
      return sqrtBinarySearch(n, mid + 1, e);

  return sqrtBinarySearch(n, s, mid - 1);
}

double precisionSqrt(int n, double ans, double factor, int precision) {

    if(precision == 0) return ans;

    if((ans + factor) * (ans + factor) <= n)
        return precisionSqrt(n, ans + factor, factor, precision);

    return precisionSqrt(n, ans, factor / 10, precision - 1);
}

int main() {
  //int ans = -1;
  //int arr[] = {8, 10, 17, 1, 3, 5, 7};
  //  int size = sizeof(arr) / sizeof(arr[0]);

  //cout << firstIndex(arr,0,size-1,22,ans);
   cout << searchInRotatedSortedArray(arr,0,size-1,17);

  

  return 0;
}

