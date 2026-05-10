#include<iostream>
#include<climits>
using namespace std;

void printMinAndMax(int arr[], int length);
bool linearSearch(int arr[], int length, int searchElement);
void reversedArray( int arr[], int length);

int main() {

	int arr[10];
	for ( int i = 0; i < 10; i++ ) {
		cout << "Enter the value that you wanted to insert in an array" << endl;
		cin >> arr[i];
	}

	/*printMinAndMax(arr,10);
	if ( linearSearch(arr,10,39) ) cout << "Value is present in the array that you have just inserted" << endl;
	else cout << "Value is not present in the array that you have just inserted"<< endl;*/

	for ( int i = 0; i < 10; i++) {
                cout << arr[i] << " ";
        }
	cout << endl;

	reversedArray(arr,10);
	for ( int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}


void printMinAndMax( int arr[], int length ) {
	int min = INT_MAX;
	int max = INT_MIN;
	for ( int i = 0; i < length; i++ ) {
		if ( arr[i] < min ) min = arr[i];
		if ( arr[i] > max ) max = arr[i];
	}

	cout << "The maximum value in array is " << max << endl;
	cout << "The minimum value in array is " << min << endl;

	return;
}

bool linearSearch( int arr[], int length, int searchElement) {
	for ( int i = 0; i < length; i++ ) {
		if ( arr[i] == searchElement ) return true;
	}

	return false;
}

void reversedArray( int arr[], int length) {
	int start = 0;
	int end = length - 1;

	while(start <= end) {
		int temp = arr[start];
		arr[start++] = arr[end];
		arr[end--] = temp;
	}

	return;
}
