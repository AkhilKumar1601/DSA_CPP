class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        /* My failed logic because inplace swaping disturbs the future positioning.
        int i = 1;
        while ( n < nums.size() - 1) {
            swap(nums[i],nums[n]);
            if (i <= n) i++;  //After 30 mins I understood this statement always be true.
            else n++;
        }

        return nums;*/

        vector <int> ans;
        for ( int i = 0; i < n; i++) {
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        
        return ans;
    }
};
