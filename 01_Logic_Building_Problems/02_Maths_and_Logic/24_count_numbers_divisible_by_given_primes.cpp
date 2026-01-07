/************************************************************
 * Problem: Count Numbers Divisible by Given Primes
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an array of prime numbers arr[] and an integer m,
 * count how many numbers from 1 to m (inclusive) are
 * divisible by at least one prime in arr[].
 *
 * Concept Used:
 * Inclusion–Exclusion Principle
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    int countDivisible(vector<int>& arr, int m) {

        int n = arr.size();
        long long count = 0;

        /****************************************************
         * METHOD 1: Inclusion–Exclusion Principle (RECOMMENDED)
         * --------------------------------------------------
         * Iterate over all non-empty subsets of primes
         *
         * For each subset:
         *   - Compute LCM of chosen primes
         *   - Add or subtract ⌊m / LCM⌋ based on subset size
         *
         * Time Complexity: O(2^n * n)
         * Space Complexity: O(1)
         ****************************************************/
        for (int mask = 1; mask < (1 << n); mask++) {

            long long lcm = 1;
            int bits = 0;
            bool overflow = false;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    bits++;

                    long long g = __gcd(lcm, (long long)arr[i]);
                    lcm = (lcm / g) * arr[i];

                    if (lcm > m) {
                        overflow = true;
                        break;
                    }
                }
            }

            if (overflow) continue;

            if (bits % 2 == 1)
                count += m / lcm;   // odd-sized subset → add
            else
                count -= m / lcm;   // even-sized subset → subtract
        }

        return (int)count;

        /****************************************************
         * METHOD 2: Brute Force (NOT RECOMMENDED)
         * --------------------------------------------------
         * Check each number from 1 to m
         *
         * Time Complexity: O(m * n)
         ****************************************************/
        /*
        int cnt = 0;
        for (int i = 1; i <= m; i++) {
            for (int p : arr) {
                if (i % p == 0) {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
        */
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * This part is NOT required for GFG submission
 ************************************************************
int main() {
    int n, m;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> m;

    Solution obj;
    cout << obj.countDivisible(arr, m);

    return 0;
}
*/