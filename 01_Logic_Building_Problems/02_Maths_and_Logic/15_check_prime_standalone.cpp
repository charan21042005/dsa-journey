/************************************************************
 * Problem: Check Prime
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an integer n, check whether it is a prime number.
 * Print "Yes" if prime, otherwise print "No".
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    /****************************************************
     * EDGE CASE HANDLING
     * --------------------------------------------------
     * 0 and 1 are NOT prime numbers
     ****************************************************/
    if (n <= 1) {
        cout << "False";
        return 0;
    }

    /****************************************************
     * METHOD 1: Optimized √n approach (RECOMMENDED)
     * --------------------------------------------------
     * Time Complexity: O(√n)
     * Space Complexity: O(1)
     ****************************************************/
    bool isPrime = true;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    cout << (isPrime ? "True" : "False");

    return 0;

    /****************************************************
     * METHOD 2: Brute Force Approach (NOT RECOMMENDED)
     * --------------------------------------------------
     * Time Complexity: O(n)
     ****************************************************/
    /*
    bool isPrime = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    cout << (isPrime ? "Yes" : "No");
    */

    /****************************************************
     * METHOD 3: Using count of divisors
     * --------------------------------------------------
     * Count divisors and check if exactly 2
     ****************************************************/
    /*
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }
    cout << (count == 2 ? "Yes" : "No");
    */

    /****************************************************
     * METHOD 4: Using STL (Educational only)
     * --------------------------------------------------
     * Uses algorithm + lambda
     ****************************************************/
    /*
    bool prime = none_of(
        vector<int>(n - 2).begin(),
        vector<int>(n - 2).end(),
        [&](int x) { return n % (x + 2) == 0; }
    );
    cout << (prime ? "Yes" : "No");
    */
}
