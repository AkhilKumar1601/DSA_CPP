class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        for (int i = 0; n != 0; i++) {
            int digit = n % 10;
            product *= digit;
            sum += digit;
            n /= 10;
        }
        int ans = (product - sum);

        return ans;
    }
};
