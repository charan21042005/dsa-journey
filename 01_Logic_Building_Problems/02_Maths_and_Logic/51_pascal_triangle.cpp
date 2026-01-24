/************************************************************
 * Problem: Pascal Triangle (Nth Row)
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given a positive integer n, return the nth row of
 * Pascal's Triangle.
 *
 * Constraints:
 * 1 <= n <= 30
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FUNCTION
 ************************************************************/
class Solution {
public:

    /********************************************************
     * METHOD 1: Using nCr Formula (RECOMMENDED)
     * ------------------------------------------------------
     * nth row elements are:
     * C(n-1, 0), C(n-1, 1), ..., C(n-1, n-1)
     *
     * Time:  O(n)
     * Space: O(1) (excluding output)
     ********************************************************/
    vector<int> nthRowOfPascalTriangle(int n) {

        vector<int> row;
        long long val = 1;   // C(n-1, 0)

        for (int r = 0; r < n; r++) {
            row.push_back((int)val);
            val = val * (n - 1 - r) / (r + 1); // Next binomial
        }

        return row;
    }


    /********************************************************
     * METHOD 2: Building using previous value (Same logic)
     * Educational clarity
     ********************************************************/
    /*
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<int> row(n, 1);

        for (int i = 1; i < n - 1; i++) {
            row[i] = (long long)row[i - 1] * (n - i) / i;
        }
        return row;
    }
    */


    /********************************************************
     * METHOD 3: Full Pascal Triangle DP (NOT RECOMMENDED)
     * Time: O(n^2), Space: O(n^2)
     ********************************************************/
    /*
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<vector<int>> dp(n);

        for (int i = 0; i < n; i++) {
            dp[i].resize(i + 1, 1);
            for (int j = 1; j < i; j++) {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }
        }
        return dp[n - 1];
    }
    */
};


/************************************************************
 * STANDALONE VERSION (for local testing)
 ************************************************************/
/*
int main() {
    int n;
    cin >> n;

    Solution sol;
    vector<int> ans = sol.nthRowOfPascalTriangle(n);

    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
*/
