/********************************************************
 * Problem: For Loop - Prime Check
 * Platform: GeeksforGeeks + Local Practice
 *
 * Task:
 * Given an integer n, check whether it is a prime number.
 * Return "Yes" if prime, otherwise return "No".
 *
 * Note:
 * - A prime number is divisible only by 1 and itself.
 * - 1 is NOT a prime number.
 *
 * Constraints:
 * 1 <= n <= 10^9
 ********************************************************/

#include <iostream>
#include <cmath>
using namespace std;

/********************************************************
 * GEEKSFORGEEKS REQUIRED FORMAT
 * ------------------------------------------------------
 * Only this function is evaluated on GFG
 ********************************************************/
class Solution {
public:
    string isPrime(int n) {

        // 1 is not a prime number
        if (n <= 1)
            return "No";

        /************************************************
         * METHOD 1: Optimized Prime Check (BEST)
         * --------------------------------------
         * Check divisibility till sqrt(n)
         * Time Complexity: O(√n)
         ************************************************/
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return "No";   // divisible by i → not prime
            }
        }

        return "Yes"; // no divisors found → prime

        /************************************************
         * METHOD 2: Naive Approach (NOT recommended)
         * ------------------------------------------
         * Checks from 2 to n-1
         * Time Complexity: O(n)
         ************************************************/
        /*
        for (int i = 2; i < n; i++) {
            if (n % i == 0)
                return "No";
        }
        return "Yes";
        */

        /************************************************
         * METHOD 3: Using flag variable (Educational)
         ************************************************/
        /*
        bool isPrime = true;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        return isPrime ? "Yes" : "No";
        */
    }
};

/********************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ------------------------------------------------------
 * This part is NOT required for GFG submission
 ********************************************************/
/*
int main() {

    int n;
    cin >> n;

    if (n <= 1) {
        cout << "No";
        return 0;
    }

    bool prime = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
*/
