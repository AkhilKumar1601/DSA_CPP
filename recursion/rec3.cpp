#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {
  if(size == 0 || size == 1) return true;

  if(arr[0] > arr[1]) return false;

  return isSorted(arr+1,size - 1);
}

int sum(int arr[], int size) {
  if(size == 0) return 0;

  return arr[0] + sum(arr+1,size - 1);
}

bool linearSearch(int arr[], int key, int size) {
  if (size == 0) return false;

  if (arr[0] == key) return true;

  return linearSearch(arr+1, key, size - 1);
}

bool bs(int arr[],int s, int e, int key) {
  if( s > e ) return false;

  int mid = s + (e-s)/2;

  if(arr[mid] == key) return true;
  else if(arr[mid] > key) return bs(arr,s,mid-1,key);
  else return bs(arr,mid+1,e,key);
}

int bs2(int arr[],int s, int e, int key) {
  if( s > e ) return -1;

  int mid = s + (e-s)/2;

  if(arr[mid] == key) return mid;
  else if(arr[mid] > key) return bs2(arr,s,mid-1,key);
  else return bs2(arr,mid+1,e,key);
}

int firstOcc(int arr[],int s,int e, int key, int ans) {
  if(s > e) return ans;

  int mid = s + (e-s)/2;

  if(arr[mid] == key) {
    ans = mid;
    return firstOcc(arr,s,mid-1,key,ans);
  }
  else if(arr[mid] > key) return firstOcc(arr,s,mid-1,key,ans);
  else return firstOcc(arr,mid+1,e,key,ans);

}

int lastOcc(int arr[],int s,int e, int key, int ans) {
  if(s > e) return ans;

  int mid = s + (e-s)/2;

  if(arr[mid] == key) {
    ans = mid;
    return lastOcc(arr,mid+1,e,key,ans);
  }
  else if(arr[mid] > key) return lastOcc(arr,s,mid-1,key,ans);
  else return lastOcc(arr,mid+1,e,key,ans);
  
}

int peakElementIndex(int arr[],int s, int e) {
  if (s == e) return s;

  int mid = s + (e-s)/2;

  if ( arr[mid] < arr[mid+1]) return peakElementIndex(arr,mid+1,e);
  else return peakElementIndex(arr,s,mid);
}

int pivotIndex(int arr[], int s, int e) {
  if ( s == e ) return s;

  int mid = s + (e-s)/2;

  if(arr[mid] >= arr[0]) return pivotIndex(arr,mid+1,e);
  else return pivotIndex(arr,s,mid);
}

int sqrt(int n, int s, int e, int ans) {
  if (s>e) return ans;

  int mid = s + (e-s)/2;

  if ( mid * mid == n) return mid;   // mid == n/mid
  else if ( mid * mid < n) {   //mid <= n / mid
    ans = mid;
    return sqrt(n,mid+1,e,ans);
  }
  else return sqrt(n,s,mid-1,ans);
}

int main() {
  int arr[] = {7,9,1,2,3};

  // cout << isSorted(arr,5) << endl;
  //cout << sum(arr,5) << endl;

  int key = 33;

  //cout << linearSearch(arr,key,5) << endl;

  // cout << bs2(arr,0,4,key) << endl;
  //cout << firstOcc(arr,0,8,key,-1) << endl;
  //cout << lastOcc(arr,0,8,key,-1) << endl;

  //cout << peakElementIndex(arr,0,7) << endl;
  //cout << pivotIndex(arr,0,4);

  cout << sqrt(36,0,36,-1) << endl;

  return 0;
}  

