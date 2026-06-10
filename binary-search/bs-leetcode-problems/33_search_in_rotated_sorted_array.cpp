class Solution {
public:
    int pivotIndexfunc(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;

        while ( s < e ) {
            int mid = s + (e-s)/2;
            if (nums[mid] > nums[e]) s = mid + 1;
            else e = mid;
        }

        return e;
    }

    int binarySearch(vector<int>& arr, int s, int e, int target) {
        while ( s <= e ) {
            int mid = s + (e-s)/2;
            if (arr[mid] == target) return mid;
            else if ( arr[mid] < target ) s = mid + 1;
            else e = mid - 1;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivotIndex = pivotIndexfunc(nums);
        int n = nums.size();
        if (target >= nums[pivotIndex] && target <= nums[n-1]) return binarySearch(nums, pivotIndex, n-1, target);

        return binarySearch(nums, 0, pivotIndex-1, target);
    }
};
