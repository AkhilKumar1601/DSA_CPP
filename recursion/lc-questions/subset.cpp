class Solution {

private:
    void createAns(vector<int>& nums, vector<int>output, vector<vector<int>>& ans, int i) {
        if(i >= nums.size()) {
            ans.push_back(output);
            return;
        }

        createAns(nums,output,ans,i+1);
        output.push_back(nums[i]);
        createAns(nums,output,ans,i+1);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<int> output;
        vector<vector<int>> ans;
        
        createAns(nums,output,ans,0);

        return ans;
    }
};

