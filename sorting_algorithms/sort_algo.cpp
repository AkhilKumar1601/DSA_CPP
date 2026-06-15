#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n) {

    for (int i = 1; i < n; i++) { //outerloop secon value sa last tak chalega.

        int temp = arr[i];  // storing ith value or you can say value until the array is sorted.

        int j = i - 1;   // we point an index previous to ith value.

        while (j >= 0 && arr[j] > temp) { //here it's check the value to left of jth index is sorted or not - J>=0(is any value available to check and arr[j]>temp (checks ethe left parts needs to be sorted or its already sorted.

            arr[j + 1] = arr[j];   //This is the main logic based on arr[j]>temp situation tabhi daal agar woh temp sa badda hai.
            j--; //Decrement.
        }

        arr[j + 1] = temp; //temp ko uski original place pa hi dall diya kyunki j pehla hamara i - 1 aur hamna i + 1 mai hi daal diya
    }
}
	

void bubble_sort(int arr[], int n) {
	for ( int i = 0; i < n - 1; i++ ) {
		bool swapped = false;
		for ( int j = 0; j < n - i - 1; j++ ) {
			if ( arr[j] > arr[j+1] ) {
				swap(arr[j],arr[j+1]);
				swapped = true;
			}
		}
		if(!swapped) return;
      	}

	return;
}

void selection_sort(int arr[], int size) {
	for ( int i = 0; i < size - 1; i++ ) { //Ye loop first value sa second last value tak run hogga.
		int minIndex = i;  //Jis index pa uski value hi minimum hai.
		for ( int j = i + 1; j < size; j++) { //ye loop jis bhi value ka index pa app ho waha sa lask tak chalega
			if ( arr[j] < arr[minIndex] ) minIndex = j;  //agar present value minimum value sa chhoti hai toh minimum ka index ko update kar do.
		}
		swap(arr[i],arr[minIndex]); //last mai current value ko minimum value sa swap kar do.
	}

	return;	
}

int main() {

	int arr[] = {29,72,98,13,87,66,52,51,36}; 
	bubble_sort(arr,sizeof(arr) / sizeof(arr[0]));
	for( int val : arr) {
	cout << val << " ";
	}

	return 0;
}
