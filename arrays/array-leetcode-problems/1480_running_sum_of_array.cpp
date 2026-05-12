class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        /* My first approach :- time complexity O(n) and space complexity O(n). n is the value present in an array.
        vector<int> runningSumArr;
        int sum = 0;
        for ( int i = 0; i < nums.size(); i++ ) {
            sum += nums[i];
            runningSumArr.push_back(sum);
        }

        return runningSumArr; */

        //we can solve this in the same given array and space complexity will be O(1).
        for ( int i = 1; i < nums.size(); i++ ) {
            nums[i] += nums[i-1];
        }

        return nums;
    }
};
