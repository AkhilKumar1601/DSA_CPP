class Solution {
public:
    int reverse(int x) {
        /* My approach
        long long int reversedValue = 0;
        while ( x!= 0 ) {
            int digit = x % 10;
            reversedValue = (10 * reversedValue) + digit;
            x /= 10;
        }

        if (reversedValue > INT_MAX || reversedValue < INT_MIN) {
            return 0;
        }

        return reversedValue;*/

        //gpt's approach remembering this constraint Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
        int reversed = 0;

        while (x != 0) {

            int digit = x % 10;

            if (reversed > INT_MAX / 10 ||
               (reversed == INT_MAX / 10 && digit > 7))
                return 0;

            if (reversed < INT_MIN / 10 ||
               (reversed == INT_MIN / 10 && digit < -8))
                return 0;

            reversed = reversed * 10 + digit;

            x /= 10;
        }

        return reversed;
    }
};
