/************************************************************
 * Problem: Pair Cube Count
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given a positive integer n, count all pairs (a, b) such that:
 *   a^3 + b^3 = n
 * where:
 *   a >= 1
 *   b >= 0
 *
 * Order of pairs does NOT matter.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    int pairCubeCount(int n) {

        /****************************************************
         * METHOD 1: Hash Set + Cube Root (RECOMMENDED)
         * --------------------------------------------------
         * Fixes edge cases like n = 1
         *
         * Time Complexity: O(cbrt(n))
         * Space Complexity: O(cbrt(n))
         ****************************************************/

        unordered_set<int> cubes;
        int limit = cbrt(n);

        // Store cubes of b (b >= 0)
        for (int b = 0; b <= limit; b++) {
            cubes.insert(b * b * b);
        }

        int count = 0;

        // Try all a >= 1
        for (int a = 1; a <= limit; a++) {
            int aCube = a * a * a;

            if (aCube > n) break;   // ✅ strict check

            int remaining = n - aCube;

            if (cubes.count(remaining))
                count++;
        }

        return count;

        /****************************************************
         * METHOD 2: Two Pointer on Cubes (ALTERNATIVE)
         ****************************************************/
        /*
        vector<long long> cubes;
        for (int i = 0; i <= limit; i++)
            cubes.push_back(1LL * i * i * i);

        int l = 1, r = limit, cnt = 0;

        while (l <= r) {
            long long sum = cubes[l] + cubes[r];
            if (sum == n) {
                cnt++;
                l++; r--;
            } else if (sum < n) {
                l++;
            } else {
                r--;
            }
        }
        return cnt;
        */

        /****************************************************
         * METHOD 3: Pure Brute Force (NOT RECOMMENDED)
         ****************************************************/
        /*
        int cnt = 0;
        for (int a = 1; a * a * a <= n; a++) {
            for (int b = 0; b * b * b <= n; b++) {
                if (a*a*a + b*b*b == n)
                    cnt++;
            }
        }
        return cnt;
        */
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 ************************************************************
int main() {
    int n;
    cin >> n;

    Solution obj;
    cout << obj.pairCubeCount(n);

    return 0;
}
*/