class Solution {
public:
    // getPreciseAns function is additonal however it may be asked in interview.
    double getPreciseAns(int x, int precision, int tempSol) {

        double factor = 1;
        double ans = tempSol;

        for (int i = 0; i < precision; i++) {

            factor /= 10;

            for (double j = ans; j * j < x; j += factor) {
                ans = j;
            }
        }

        return ans;
    }

    int intPartAnswer(int x) {

        int s = 0;
        int e = x;

        int ans = -1;

        while (s <= e) {

            long long mid = s + (e - s) / 2;

            long long square = mid * mid;

            if (square == x) return mid;

            if (square < x) {
                ans = mid;
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }

        return ans;
    }

    double mySqrt(int x) {
        return intPartAnswer(x);
    }
};
