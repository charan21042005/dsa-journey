/************************************************************
 * Problem: Modular Exponentiation
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given x, n, M compute (x^n) % M efficiently.
 *
 * Constraints:
 * 1 ≤ x, n, M ≤ 1e9
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED CLASS
 ************************************************************/
class Solution {
  public:

    /****************************************************
     * METHOD 1: Binary Exponentiation (RECOMMENDED)
     * Time: O(log n)
     * Space: O(1)
     ****************************************************/
    int powMod(int x, int n, int M) {
        long long result = 1;
        long long base = x % M;

        while (n > 0) {
            if (n & 1)
                result = (result * base) % M;

            base = (base * base) % M;
            n >>= 1;
        }
        return (int)result;
    }

    /****************************************************
     * METHOD 2: Recursive Binary Exponentiation
     * (Educational – not used in GFG submission)
     ****************************************************/
    /*
    long long power(long long x, long long n, long long M) {
        if (n == 0) return 1;
        long long half = power(x, n / 2, M);
        half = (half * half) % M;
        if (n & 1) half = (half * x) % M;
        return half;
    }

    int powMod(int x, int n, int M) {
        return (int)power(x, n, M);
    }
    */

    /****************************************************
     * METHOD 3: Naive Power (NOT RECOMMENDED)
     * Time: O(n) → TLE for large n
     ****************************************************/
    /*
    int powMod(int x, int n, int M) {
        long long res = 1;
        for (int i = 0; i < n; i++)
            res = (res * x) % M;
        return res;
    }
    */
};

/************************************************************
 * STANDALONE MAIN (For Local Testing Only)
 * Not required for GFG submission
 ************************************************************
int main() {
    int x, n, M;
    cin >> x >> n >> M;

    Solution obj;
    cout << obj.powMod(x, n, M) << endl;

    return 0;
}
*/