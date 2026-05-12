#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key);

int main() {
	int arr[10];
	for ( int i = 0; i < 10; i++ ) {
		cout << "Enter number" << endl;
		cin >> arr[i];
	}

	cout << "Index of key element in an array" << binarySearch(arr,10,44) << endl;

}

int binarySearch( int arr[], int n, int key ) {
	int s = 0;
	int e = n - 1;
	int mid = s + (e-s)/2;

	while ( s <= e ) {
		if ( arr[mid] == key ) return mid;
		else if ( arr[mid] < key ) s = mid + 1;
		else e = mid - 1;
		mid = s + (e-s)/2;
	}

	return -1;
}
