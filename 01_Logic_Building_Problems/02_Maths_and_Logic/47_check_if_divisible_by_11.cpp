/************************************************************
 * Problem: Check if Divisible by 11
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given a number S in string form, check whether it is
 * divisible by 11.
 *
 * Divisibility Rule for 11:
 * --------------------------------------------------
 * (Sum of digits at odd positions
 *  − Sum of digits at even positions) is divisible by 11
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FUNCTION
 ************************************************************/
class Solution {
public:
    int divisibleBy11(string S) {

        /****************************************************
         * METHOD 1: Alternating Sum Rule (RECOMMENDED)
         * --------------------------------------------------
         * Traverse digits from left to right
         * Odd index sum  - Even index sum
         *
         * Time Complexity: O(N)
         * Space Complexity: O(1)
         ****************************************************/

        long long oddSum = 0, evenSum = 0;

        for (int i = 0; i < S.size(); i++) {
            int digit = S[i] - '0';

            // Position is 1-based logically
            if ((i + 1) % 2 == 1)
                oddSum += digit;
            else
                evenSum += digit;
        }

        return (abs(oddSum - evenSum) % 11 == 0) ? 1 : 0;


        /****************************************************
         * METHOD 2: Direct Modulo (NOT USED)
         * --------------------------------------------------
         * Compute modulo digit by digit
         * Slower and unnecessary for this problem
         ****************************************************/
    }
};

/************************************************************
 * STANDALONE MAIN (For Local Testing)
 * ----------------------------------
 * Not required for GFG submission
 ************************************************************/
/*
int main() {
    string S;
    cin >> S;

    Solution obj;
    cout << obj.divisibleBy11(S);

    return 0;
}
*/
