#include<iostream>
using namespace std;

void insertIntoArr(int num[10]);

int main() {
	int num[10]; //Array declaration - if we declare an array without initialization then it will contain some garbage value;
	int arr[3] = {1,32,3};  //Array initialization
	
	num[0] = 21;
	cout << arr[2] << endl;
	insertIntoArr(num);
	
	for ( int i = 0; i < 10; i++) {
		cout << num[i] << " " << endl;
	}

	return 0;
}

void insertIntoArr(int num[10]) {
	for ( int i = 1; i < 10; i++ ) {
		num[i] = 21 * ( i + 1);
        }

	return;
}
