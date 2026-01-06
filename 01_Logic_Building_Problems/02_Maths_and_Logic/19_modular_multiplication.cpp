/************************************************************
 * Problem: Modular Multiplication
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given integers a, b, and M, compute (a * b) % M.
 * Values can be large, so handle overflow properly.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    int modmul(int a, int b, int M) {

        /****************************************************
         * METHOD 1: Using long long (RECOMMENDED)
         * --------------------------------------------------
         * Uses typecasting to avoid overflow
         *
         * Time Complexity: O(1)
         * Space Complexity: O(1)
         ****************************************************/
        return (int)((1LL * a * b) % M);

        /****************************************************
         * METHOD 2: Repeated Addition (Safe for very large numbers)
         * --------------------------------------------------
         * Works even when a*b overflows long long
         *
         * Time Complexity: O(b)
         ****************************************************/
        /*
        long long result = 0;
        a %= M;

        while (b > 0) {
            if (b & 1)
                result = (result + a) % M;

            a = (a * 2) % M;
            b >>= 1;
        }
        return (int)result;
        */

        /****************************************************
         * METHOD 3: Using __int128 (Advanced / GCC specific)
         * --------------------------------------------------
         * Very fast and safe for extremely large values
         ****************************************************/
        /*
        __int128 temp = (__int128)a * b;
        return (int)(temp % M);
        */
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * NOT required for GFG submission
 ************************************************************
int main() {
    int a, b, M;
    cin >> a >> b >> M;

    Solution obj;
    cout << obj.modmul(a, b, M);

    return 0;
}
*/