class Solution {
public:
    bool isPossible(vector<int>&nums,int k, int mid) {
        int sumOfSplit = 0;
        int splitCount = 1;

        for ( int i = 0; i < nums.size(); i++) {
            if(sumOfSplit + nums[i] <= mid) {
                sumOfSplit += nums[i];
            }
            else {
                splitCount++;
                if ( splitCount > k ) return false;
                sumOfSplit = nums[i];
            }
        }

        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int s = *max_element(nums.begin(), nums.end());
        int e = 0;
        for (int i = 0; i < nums.size(); i++) {
            e += nums[i];
        }

        int ans = -1;

        while (s <= e) {
            int mid = s + (e-s)/2;
            if (isPossible(nums,k,mid)) {
                ans = mid;
                e = mid - 1; //Hamma minimum answer isliya hum left side aya kyunki ya answer toh iska aaga ka bhi saara possible answer honga.
            }
            else s = mid + 1;
        }

        return ans;
    }
};
