class Solution {
public:
    bool isPossible(vector<int>& arr, int k, int mid) {
        int totalWeight = 0;
        int countOfDays = 1;

        for ( int i = 0; i < arr.size(); i++ ) {
            if (totalWeight + arr[i] <= mid) {
                totalWeight += arr[i];
            }
            else {
                countOfDays++;
                if(countOfDays > k || arr[i] > mid) {
                    return false;
                }
                totalWeight = arr[i];
            }
        }

        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int s = *max_element(weights.begin(),weights.end());
        int e = 0;

        for ( int i = 0; i < weights.size(); i++) {
            e += weights[i];
        }

        int ans = -1;

        while ( s <= e ) {
            int mid = s + (e-s)/2;

            if(isPossible(weights,days,mid)) {
                ans = mid;
                e = mid - 1;
            }
            else s = mid + 1;
        }

        return ans;
    }
};
