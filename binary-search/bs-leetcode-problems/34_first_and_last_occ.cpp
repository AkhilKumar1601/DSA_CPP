class Solution {
public:
    
    int firstOccIndex(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e-s)/2;
        int firstOcc = -1;

        while ( s <= e ) {
            if (nums[mid] == target) {
                firstOcc = mid;
                e = mid - 1;
            } 
            else if (nums[mid] > target) e = mid - 1;
            else s = mid + 1;
            mid = s + (e-s)/2;
        }

        return firstOcc;
    }

    int lastOccIndex(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e-s)/2;
        int lastOcc = -1;

        while ( s <= e ) {
            if (nums[mid] == target) {
                lastOcc = mid;
                s = mid + 1;
            } 
            else if (nums[mid] > target) e = mid - 1;
            else s = mid + 1;
            mid = s + (e-s)/2;
        }

        return lastOcc;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        return {firstOccIndex(nums,target),lastOccIndex(nums,target)};

    }
};
