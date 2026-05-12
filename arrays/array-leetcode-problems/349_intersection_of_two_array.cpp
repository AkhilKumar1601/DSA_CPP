class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        /*set<int> n1(nums1.begin(),nums1.end());
        set<int> n2(nums2.begin(),nums2.end());

        vector<int> ans;

        set_intersection(
            n1.begin(), n1.end(),
            n2.begin(), n2.end(),
            back_inserter(ans)
        );

        return ans;*/

        /*sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> ans;

        int i = 0;
        int j = 0;

        while (i < nums1.size() && j < nums2.size()) {

            if (nums1[i] < nums2[j]) {

                i++;
            }

            else if (nums1[i] > nums2[j]) {

                j++;
            }

            else {

                if (ans.empty() || ans.back() != nums1[i]) {

                    ans.push_back(nums1[i]);
                }

                i++;
                j++;
            }
        }

        return ans;*/

        unordered_set<int> s1(nums1.begin(), nums1.end());

        unordered_set<int> ansSet;

        for (int x : nums2) {

            if (s1.find(x) != s1.end()) {

                ansSet.insert(x);
            }
        }

        vector<int> ans(ansSet.begin(), ansSet.end());

        return ans; 
    }
};
