/************************************************************
 * Problem: Euler Totient Function
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an integer n, find the value of Euler's Totient
 * Function φ(n), which counts the number of integers
 * from 1 to n that are coprime with n.
 *
 * Definition:
 * φ(n) = n × Π (1 - 1/p)
 * where p are the distinct prime factors of n
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    int etf(int n) {

        /****************************************************
         * EDGE CASE
         ****************************************************/
        if (n == 1)
            return 1;

        /****************************************************
         * METHOD 1: Prime Factorization Method (RECOMMENDED)
         * --------------------------------------------------
         * Idea:
         *   φ(n) = n × Π (1 - 1/p)
         *   where p are distinct prime factors of n
         *
         * Time Complexity: O(√n)
         * Space Complexity: O(1)
         ****************************************************/
        int result = n;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {

                // i is a prime factor
                while (n % i == 0)
                    n /= i;

                result -= result / i;
            }
        }

        // If n is still > 1, it is a prime factor
        if (n > 1)
            result -= result / n;

        return result;

        /****************************************************
         * METHOD 2: Brute Force (NOT RECOMMENDED)
         * --------------------------------------------------
         * Count numbers from 1 to n that are coprime with n
         *
         * Time Complexity: O(n log n)
         ****************************************************/
        /*
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (__gcd(i, n) == 1)
                count++;
        }
        return count;
        */

        /****************************************************
         * METHOD 3: Precomputation using Sieve (ADVANCED)
         * --------------------------------------------------
         * Useful when φ(1..N) needed for multiple queries
         ****************************************************/
        /*
        vector<int> phi(n + 1);
        for (int i = 1; i <= n; i++)
            phi[i] = i;

        for (int i = 2; i <= n; i++) {
            if (phi[i] == i) {
                for (int j = i; j <= n; j += i)
                    phi[j] -= phi[j] / i;
            }
        }
        return phi[n];
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
    cout << obj.etf(n);

    return 0;
}
*/