/************************************************************
 * Problem: Nth Fibonacci Number
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given a non-negative integer n, find the nth Fibonacci number.
 *
 * Fibonacci Definition:
 * F(0) = 0
 * F(1) = 1
 * F(n) = F(n-1) + F(n-2), for n > 1
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    int nthFibonacci(int n) {

        /****************************************************
         * METHOD 1: Iterative Approach (RECOMMENDED)
         * --------------------------------------------------
         * Time Complexity: O(n)
         * Space Complexity: O(1)
         ****************************************************/
        if (n == 0) return 0;
        if (n == 1) return 1;

        int prev2 = 0, prev1 = 1, curr = 0;

        for (int i = 2; i <= n; i++) {
            curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }

        return curr;


        /****************************************************
         * METHOD 2: DP Array (Educational)
         * --------------------------------------------------
         * Time Complexity: O(n)
         * Space Complexity: O(n)
         ****************************************************/
        /*
        vector<int> dp(n + 1);
        dp[0] = 0;
        dp[1] = 1;

        for (int i = 2; i <= n; i++)
            dp[i] = dp[i - 1] + dp[i - 2];

        return dp[n];
        */


        /****************************************************
         * METHOD 3: Recursive (NOT RECOMMENDED)
         * --------------------------------------------------
         * Time Complexity: O(2^n)
         * Causes TLE for larger n
         ****************************************************/
        /*
        if (n <= 1) return n;
        return nthFibonacci(n - 1) + nthFibonacci(n - 2);
        */
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * Not required for GFG submission
 ************************************************************
int main() {
    int n;
    cin >> n;

    Solution obj;
    cout << obj.nthFibonacci(n);

    return 0;
}
*/