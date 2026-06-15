#include<iostream>
#include<vector>
using namespace std;

int main () {
	
	vector<int> marks;

	marks.push_back(10);
	marks.push_back(20);
	marks.push_back(30);
	marks.push_back(40);

	cout << "Size:" << marks.size() << endl;
	marks.pop_back();
	cout << "Size:" << marks.size() << endl;
	
	cout << marks.front() << endl;
	cout << marks.back() << endl;

	if (marks.empty()) {
		cout << "Vector is empty." << endl;
	}
	else {
		cout << "Vector is not empty." << endl;
	}

	cout << marks[2] << endl;
	marks[2] = 22;
	cout << marks[2] << endl;
	
	cout << marks.at(1) << endl;

	vector<int> miles;
	vector<int> distances(10,0);

	cout << *(distances.begin()) << endl;
	
	cout << "Capacity of Marks array: " << marks.capacity() << endl;

	cout << "Capacity of Miles array before using Reserve: " << miles.capacity() << endl;
	miles.reserve(10);
	cout << "Capacity of Miles array after using Reserve: " << miles.capacity() << endl;
	
	//marks.clear();
	//cout << "Size of marks array after clearing: " << marks.size() << endl;

	marks.insert(marks.begin(),50);
	cout << marks[0] << endl;

	marks.erase(marks.begin(),marks.end());
	cout << "Size of marks array after erasing from begin to end: " << marks.size() << endl;

	return 0;
}
