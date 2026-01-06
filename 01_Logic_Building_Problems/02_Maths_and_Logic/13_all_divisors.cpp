/************************************************************
 * Problem: All Divisors of a Number
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an integer n, return all its divisors in sorted order.
 *
 * Example:
 * n = 10 -> Output = 1 2 5 10
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    vector<int> printDivisors(int n) {

        /****************************************************
         * METHOD 1: Optimized √n approach (RECOMMENDED)
         * --------------------------------------------------
         * Time Complexity: O(√n)
         * Space Complexity: O(1) extra (excluding output)
         *
         * Idea:
         * - Divisors come in pairs: (i, n / i)
         ****************************************************/

        vector<int> divisors;

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisors.push_back(i);       // first divisor

                if (i != n / i) {
                    divisors.push_back(n / i); // paired divisor
                }
            }
        }

        // Required output is sorted
        sort(divisors.begin(), divisors.end());

        return divisors;

        /****************************************************
         * METHOD 2: Brute Force (NOT RECOMMENDED)
         * --------------------------------------------------
         * Time Complexity: O(n)
         ****************************************************/
        /*
        vector<int> divisors;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                divisors.push_back(i);
        }
        return divisors;
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
    vector<int> result = obj.printDivisors(n);

    for (int x : result)
        cout << x << " ";

    return 0;
}
*/