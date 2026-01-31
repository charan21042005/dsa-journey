/************************************************************
 * Problem: Super Primes
 * Platform: GeeksforGeeks
 *
 * Task:
 * A prime number is called a Super Prime if it can be
 * expressed as a sum of two prime numbers.
 * Find the count of Super Primes up to N.
 *
 * Example:
 * N = 10
 * Super Primes: 5 = 2+3, 7 = 2+5
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int superPrimes(int n) {

        /****************************************************
         * METHOD 1: Sieve of Eratosthenes + Check Sum
         * --------------------------------------------------
         * 1. Generate all prime numbers up to N using sieve
         * 2. For every prime p >= 5:
         *      Check if p - 2 is also prime
         *      (because smallest prime is 2)
         *
         * Time Complexity: O(N log log N)
         * Space Complexity: O(N)
         ****************************************************/

        if (n < 5) return 0;

        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;

        // Sieve of Eratosthenes
        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;

        // Check for super primes
        for (int p = 5; p <= n; p++) {
            if (isPrime[p] && isPrime[p - 2]) {
                count++;
            }
        }

        return count;
    }
};

/************************************************************
 * METHOD 2: Using Prime List (Same Logic, Extra Space)
 * --------------------------------------------------
 * Store all primes in a vector and use lookup.
 * Slightly more verbose, same complexity.
 ************************************************************/

/************************************************************
 * METHOD 3: Brute Force (NOT RECOMMENDED)
 * --------------------------------------------------
 * Check all prime pairs for each prime.
 * Time Complexity: O(N²)
 ************************************************************/

/************************************************************
 * STANDALONE VERSION (FOR LOCAL TESTING)
 * --------------------------------------
 * Uncomment main() for local execution
 ************************************************************/
/*
int main() {
    int n;
    cin >> n;

    Solution obj;
    cout << obj.superPrimes(n) << endl;

    return 0;
}
*/
