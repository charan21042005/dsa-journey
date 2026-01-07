/************************************************************
 * Problem: Series GP (Geometric Progression)
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given first term a, common ratio r, and n,
 * find the nth term of a Geometric Progression.
 *
 * Expected Output:
 * Return answer modulo 1000000007
 *
 * Formula:
 * nth term = a * r^(n-1)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 1000000007;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:

    /****************************************************
     * Fast Modular Exponentiation
     * Computes (base^exp) % MOD
     *
     * Time Complexity: O(log n)
     * Space Complexity: O(1)
     ****************************************************/
    long long modPower(long long base, long long exp) {
        long long result = 1;
        base %= MOD;

        while (exp > 0) {
            if (exp & 1)
                result = (result * base) % MOD;

            base = (base * base) % MOD;
            exp >>= 1;
        }
        return result;
    }

    int nthTerm(int a, int r, int n) {

        /****************************************************
         * EDGE CASE
         ****************************************************/
        if (n == 1)
            return a % MOD;

        /****************************************************
         * METHOD 1: Modular Exponentiation (RECOMMENDED)
         * --------------------------------------------------
         * nth term = a * r^(n-1) % MOD
         ****************************************************/
        long long power = modPower(r, n - 1);
        long long ans = (a * power) % MOD;

        return (int)ans;

        /****************************************************
         * METHOD 2: Iterative Multiplication (NOT SAFE)
         * --------------------------------------------------
         * Can overflow for large n
         ****************************************************/
        /*
        long long result = a;
        for (int i = 1; i < n; i++) {
            result = (result * r) % MOD;
        }
        return result;
        */
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * This part is NOT required for GFG submission
 ************************************************************
int main() {
    int a, r, n;
    cin >> a >> r >> n;

    Solution obj;
    cout << obj.nthTerm(a, r, n);

    return 0;
}
*/