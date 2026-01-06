/************************************************************
 * Problem: Prime Factorization
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an integer n, print its PRIME FACTORIZATION
 * (including repeated factors) in increasing order.
 *
 * Example:
 * Input: 100
 * Output: 2 2 5 5
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FUNCTION
 ************************************************************/
void printPrimeFactorization(int n) {

    /****************************************************
     * METHOD 1: Optimized Trial Division (RECOMMENDED)
     * --------------------------------------------------
     * Prints prime factors INCLUDING repetitions
     *
     * Time Complexity: O(√n)
     * Space Complexity: O(1)
     ****************************************************/

    // Handle factor 2
    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
    }

    // Handle odd prime factors
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    // If remaining n is a prime number
    if (n > 1)
        cout << n << " ";

    /****************************************************
     * METHOD 2: Brute Force (NOT RECOMMENDED)
     * --------------------------------------------------
     * Time Complexity: O(n)
     ****************************************************/
    /*
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    */

    /****************************************************
     * METHOD 3: Using SPF (Best for Multiple Queries)
     * --------------------------------------------------
     * Preprocessing based approach
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

    while (n != 1) {
        cout << spf[n] << " ";
        n /= spf[n];
    }
    */
}

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * This part is NOT required for GFG submission
 ************************************************************
int main() {
    int n;
    cin >> n;

    printPrimeFactorization(n);

    return 0;
}
*/