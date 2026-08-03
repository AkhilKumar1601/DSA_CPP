#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
  if (nums.size() == 0) return 0;

  int i = 0;

  for ( int j = 1; j < nums.size(); j++) {
    if ( nums[i] != nums[j] ) {
      i++; //only increasing if new value is found.
      nums[i] = nums[j]; //insert new value in ith place.
    }
  }

  return i+1;
}

int main() {
  vector<int> nums = {0,0,1,1,1,2,2,3};

  int k = removeDuplicates(nums);

  cout << "Unique Elements: " << k << endl;

  for ( int i = 0; i < k; i++) {
    cout << nums[i] << " "; 
  }

  return 0;
}