/************************************************************
 * Problem: 3 Divisors
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given q queries, for each query n, find how many numbers
 * ≤ n have exactly 3 divisors.
 *
 * Key Observation:
 * A number has exactly 3 divisors iff it is a square of a prime.
 *
 * Example:
 * 4 = 2² → divisors {1, 2, 4}
 * 9 = 3² → divisors {1, 3, 9}
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FUNCTION
 ************************************************************/
class Solution {
public:
    vector<int> threeDivisors(vector<long long> query, int q) {

        /****************************************************
         * METHOD 1: Sieve of Eratosthenes (RECOMMENDED)
         * --------------------------------------------------
         * Steps:
         * 1. Precompute all prime numbers up to sqrt(max(query))
         * 2. For each query n:
         *    Count primes p such that p*p ≤ n
         *
         * Time Complexity:
         * - Sieve: O(n log log n)
         * - Each query: O(sqrt(n))
         *
         * Space Complexity: O(n)
         ****************************************************/

        long long maxN = 0;
        for (long long x : query)
            maxN = max(maxN, x);

        int limit = sqrt(maxN);

        // Sieve to find primes up to sqrt(maxN)
        vector<bool> isPrime(limit + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= limit; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= limit; j += i)
                    isPrime[j] = false;
            }
        }

        // Store all prime squares
        vector<long long> primeSquares;
        for (int i = 2; i <= limit; i++) {
            if (isPrime[i])
                primeSquares.push_back(1LL * i * i);
        }

        // Answer queries
        vector<int> ans;
        for (long long n : query) {
            // Count how many primeSquares ≤ n
            int count = upper_bound(primeSquares.begin(),
                                     primeSquares.end(), n)
                        - primeSquares.begin();
            ans.push_back(count);
        }

        return ans;


        /****************************************************
         * METHOD 2: Brute Force (NOT USED)
         * --------------------------------------------------
         * Check every number ≤ n and count divisors
         * Too slow for large constraints (n ≤ 10¹²)
         ****************************************************/
    }
};

/************************************************************
 * STANDALONE MAIN (For Local Testing)
 * ----------------------------------
 * Not required for GFG submission
 ************************************************************/
/*
int main() {
    int q;
    cin >> q;

    vector<long long> query(q);
    for (int i = 0; i < q; i++)
        cin >> query[i];

    Solution obj;
    vector<int> res = obj.threeDivisors(query, q);

    for (int x : res)
        cout << x << " ";

    return 0;
}
*/
