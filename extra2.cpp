#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

void isPrime(int n);
int convertToDecimal(int binary);
int convertToDecimal2(int binary);
string convertToBinary( int decimal);

int main () {

	/*int n;
	cin >> n;
	isPrime(n);*/

	/*int binary;
	cin >> binary;
	//cout << convertToDecimal(binary) << endl;
	cout << convertToDecimal2(binary) << endl;*/

	int decimal;
	cin >> decimal;
	cout << convertToBinary(decimal) << endl;	

	return 0;
}

void isPrime(int n) {

	if (n <= 1) {
                cout << "Given no. is not prime" << endl;
                return;
        }

	for ( int i = 2; i < n; i++) {
		if ( n % i == 0 ) {
			cout << "Given no. is not prime" << endl;
			return;
		}
	}
	
	cout << "Given no. is prime" << endl;

	return;
}

int convertToDecimal ( int binary ) {
	int decimalValue = 0;
	for ( int i = 0; binary != 0; i++ ) {
		if ( binary % 10 == 1) decimalValue += pow(2,i);
		binary /= 10;	
	}

	return decimalValue;
}

//The below functions not runs correctly because the no. that came in the below function from main function as an arguement should be treated as 
//decimal integer value ( this is the common c++ behaviour) so it returns decimal to decimal. 
int convertToDecimal2( int binary) {
	int decimalValue = 0;
	for ( int i = 0; binary != 0; i++ ) {
		if ( binary & 1 ) decimalValue += pow(2,i);
		binary >>= 1;
	}
	return decimalValue;
}

string convertToBinary ( int decimal ) {
	string s = "";
	for ( int i = 0; decimal != 0; i++ ) {
		int binary = decimal % 2;
		s += to_string(binary);
		decimal /= 2;
	}

	reverse(s.begin(),s.end());

	return s;
}
