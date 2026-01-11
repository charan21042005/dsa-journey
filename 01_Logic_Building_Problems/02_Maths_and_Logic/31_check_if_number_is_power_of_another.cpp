/************************************************************
 * Problem: Check if a Number is Power of Another
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given two positive integers X and Y,
 * check whether Y is a power of X.
 *
 * Return:
 * 1 -> if Y is a power of X
 * 0 -> otherwise
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    int isPowerOfAnother(int X, int Y) {

        /****************************************************
         * EDGE CASES
         ****************************************************/
        // Any number power 0 gives 1
        if (Y == 1)
            return 1;

        // If X == 1, only power possible is 1
        if (X == 1)
            return (Y == 1);

        // If X > 1 and Y < X, cannot be power
        if (Y < X)
            return 0;

        /****************************************************
         * METHOD 1: Repeated Division (RECOMMENDED)
         * --------------------------------------------------
         * Keep dividing Y by X while divisible
         *
         * Time Complexity: O(log_X(Y))
         * Space Complexity: O(1)
         ****************************************************/
        while (Y % X == 0) {
            Y /= X;
        }

        return (Y == 1) ? 1 : 0;

        /****************************************************
         * METHOD 2: Iterative Multiplication
         * --------------------------------------------------
         * Multiply X until value >= Y
         ****************************************************/
        /*
        long long val = X;
        while (val < Y) {
            val *= X;
        }
        return (val == Y) ? 1 : 0;
        */

        /****************************************************
         * METHOD 3: Logarithmic Method (NOT RELIABLE)
         * --------------------------------------------------
         * Floating point precision issues
         ****************************************************/
        /*
        double k = log(Y) / log(X);
        return (fabs(k - round(k)) < 1e-9);
        */
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * NOT required for GFG submission
 ************************************************************
int main() {
    int X, Y;
    cin >> X >> Y;

    Solution obj;
    cout << obj.isPowerOfAnother(X, Y);

    return 0;
}
*/