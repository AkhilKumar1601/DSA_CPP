#include<iostream>
using namespace std;

int main () {
	
	int a = 5;
	int b = 7;
	cout << (a&b) << endl;
	cout << (a|b) << endl;
	cout << (~a) << endl;
	cout << (a^b) << endl;
	cout << (a<<b) << endl;
	cout << (a>>b) << endl;

	int i = 1;
	cout << i++ << endl;
	cout << ++i << endl;
	cout << i-- << endl;
	cout << --i << endl;

	for (int i = 0; i <= 10; i++) {
		cout << i << " ";
	}

	cout << "Enter the number - in order to check the setbits" << endl;
	int n = cin.get();
	int noOfSetBits = 0;
	while ( n != 0 ) {
		if ( n % 2 == 0 ) noOfSetBits++;
		n /= 2;
	}
	cout << noOfSetBits << endl;

	return 0;
}
