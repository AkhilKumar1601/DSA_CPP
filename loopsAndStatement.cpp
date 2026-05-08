#include <iostream>
using namespace std;

int main() {
	int age;
	cout << "Enter any number" << endl;
	cin >> age;

	if ( age >= 18 ) {
		cout << "You are eligible to vote" << endl;
	} 
	else {
		cout << "You are not eligible to vote" << endl;
	}

	int i = 1;
	while ( i <= age ) {
		cout << i << endl;
		i = i + 1;
	}

	int n;
	cin >> n;
	int row = 0;
	/*while ( row < n) {
		int col = 0;
		while ( col < n ) {
			cout << "*";
			col = col + 1;
		}
		cout << endl;
		row = row + 1;
	}*/
	while ( row < n) {
                int col = 0;
                while ( col < n ) { 
			if ( row == 0 ) break;
		 	cout << row;
			col = col + 1;
                }
                cout << endl;
                row = row + 1;
        }


	return 0;
}
