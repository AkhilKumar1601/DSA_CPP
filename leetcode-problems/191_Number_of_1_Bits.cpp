class Solution {
public:
    int hammingWeight(int n) {
        
        //gpt's approach :- Optimized because complexity is O(set Bits).
        //Brian Kernighan’s Algorithm.
        int setBits = 0;
        while (n != 0) {
            n = n & (n  - 1); //logic rightmost 1 becomes 0, all bits after it become 1
            setBits++;
        }

        return setBits;

        //return __builtin_popcount(n);

        /*My approach :- complexity O(total Bits).
        int setBits = 0;
        for (int i = 0; n != 0; i++) {
            if ( n & 1) setBits++;
            n >>= 1;
        }

        return setBits;*/
    }
};
