/************************************************************
 * Problem: Prime Factors
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an integer n, return all DISTINCT prime factors
 * in increasing order.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    vector<int> primeFac(int n) {

        vector<int> factors;

        /****************************************************
         * METHOD 1: Optimized Trial Division (RECOMMENDED)
         * --------------------------------------------------
         * Returns DISTINCT prime factors only
         *
         * Time Complexity: O(√n)
         * Space Complexity: O(1)
         ****************************************************/

        // Handle factor 2 (only once)
        if (n % 2 == 0) {
            factors.push_back(2);
            while (n % 2 == 0)
                n /= 2;
        }

        // Handle odd prime factors
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                factors.push_back(i);
                while (n % i == 0)
                    n /= i;
            }
        }

        // Remaining prime factor
        if (n > 1)
            factors.push_back(n);

        return factors;

        /****************************************************
         * METHOD 2: Using Set (Alternative)
         * --------------------------------------------------
         * Automatically removes duplicates
         ****************************************************/
        /*
        set<int> s;
        for (int i = 2; i * i <= n; i++) {
            while (n % i == 0) {
                s.insert(i);
                n /= i;
            }
        }
        if (n > 1) s.insert(n);
        return vector<int>(s.begin(), s.end());
        */

        /****************************************************
         * METHOD 3: SPF (Fast for Multiple Queries)
         ****************************************************/
        /*
        vector<int> spf(n + 1);
        for (int i = 1; i <= n; i++)
            spf[i] = i;

        for (int i = 2; i * i <= n; i++) {
            if (spf[i] == i) {
                for (int j = i * i; j <= n; j += i)
                    if (spf[j] == j)
                        spf[j] = i;
            }
        }

        vector<int> factors;
        while (n != 1) {
            int p = spf[n];
            factors.push_back(p);
            while (n % p == 0)
                n /= p;
        }
        return factors;
        */
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * This part is NOT required for GFG submission
 ************************************************************
int main() {
    int n;
    cin >> n;

    Solution obj;
    vector<int> result = obj.primeFac(n);

    for (int x : result)
        cout << x << " ";

    return 0;
}
*/