/************************************************************
 * Problem: nCr (Binomial Coefficient)
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given two integers n and r, compute nCr
 * i.e., number of ways to choose r items from n items.
 *
 * Formula:
 * nCr = n! / (r! * (n - r)!)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    int nCr(int n, int r) {

        /****************************************************
         * EDGE CASES
         ****************************************************/
        if (r > n)
            return 0;

        if (r == 0 || r == n)
            return 1;

        /****************************************************
         * OPTIMIZATION:
         * nCr == nC(n-r)
         * Reduce r to minimize computation
         ****************************************************/
        r = min(r, n - r);

        /****************************************************
         * METHOD 1: Iterative Multiplicative Formula (RECOMMENDED)
         * --------------------------------------------------
         * Avoids factorial overflow
         *
         * Time Complexity: O(r)
         * Space Complexity: O(1)
         ****************************************************/
        long long result = 1;

        for (int i = 1; i <= r; i++) {
            result = result * (n - r + i) / i;
        }

        return (int)result;

        /****************************************************
         * METHOD 2: Using Factorials (NOT SAFE for large n)
         * --------------------------------------------------
         * Can overflow easily
         ****************************************************/
        /*
        long long factN = 1, factR = 1, factNR = 1;

        for (int i = 1; i <= n; i++) factN *= i;
        for (int i = 1; i <= r; i++) factR *= i;
        for (int i = 1; i <= n - r; i++) factNR *= i;

        return factN / (factR * factNR);
        */

        /****************************************************
         * METHOD 3: Dynamic Programming (Pascal Triangle)
         * --------------------------------------------------
         * Good for understanding
         *
         * Time Complexity: O(n*r)
         * Space Complexity: O(r)
         ****************************************************/
        /*
        vector<long long> dp(r + 1, 0);
        dp[0] = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = min(i, r); j > 0; j--) {
                dp[j] = dp[j] + dp[j - 1];
            }
        }

        return dp[r];
        */
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * This part is NOT required for GFG submission
 ************************************************************
int main() {
    int n, r;
    cin >> n >> r;

    Solution obj;
    cout << obj.nCr(n, r);

    return 0;
}
*/