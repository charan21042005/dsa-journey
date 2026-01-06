/************************************************************
 * Problem: Sieve of Eratosthenes
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an integer n, return all prime numbers
 * smaller than or equal to n.
 *
 * Concept:
 * Sieve of Eratosthenes is an efficient algorithm
 * to find all primes up to n.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    vector<int> sieve(int n) {

        /****************************************************
         * METHOD 1: Sieve of Eratosthenes (RECOMMENDED)
         * --------------------------------------------------
         * Time Complexity: O(n log log n)
         * Space Complexity: O(n)
         ****************************************************/
        vector<bool> isPrime(n + 1, true);
        vector<int> primes;

        if (n < 2)
            return primes;

        isPrime[0] = false;
        isPrime[1] = false;

        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        for (int i = 2; i <= n; i++) {
            if (isPrime[i])
                primes.push_back(i);
        }

        return primes;

        /****************************************************
         * METHOD 2: Naive Prime Check for Each Number
         * --------------------------------------------------
         * Time Complexity: O(n√n)
         * NOT recommended for large n
         ****************************************************/
        /*
        vector<int> primes;
        for (int i = 2; i <= n; i++) {
            bool prime = true;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    prime = false;
                    break;
                }
            }
            if (prime)
                primes.push_back(i);
        }
        return primes;
        */

        /****************************************************
         * METHOD 3: Optimized Sieve (Skip Even Numbers)
         * --------------------------------------------------
         * Slightly faster in practice
         ****************************************************/
        /*
        vector<bool> isPrime(n + 1, false);
        vector<int> primes;
        if (n >= 2) primes.push_back(2);

        for (int i = 3; i <= n; i += 2)
            isPrime[i] = true;

        for (int i = 3; i * i <= n; i += 2) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += 2 * i)
                    isPrime[j] = false;
            }
        }

        for (int i = 3; i <= n; i += 2) {
            if (isPrime[i])
                primes.push_back(i);
        }

        return primes;
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
    vector<int> result = obj.sieve(n);

    for (int x : result)
        cout << x << " ";

    return 0;
}
*/