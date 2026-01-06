/************************************************************
 * Problem: Prime Number
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an integer n, check whether it is a prime number.
 *
 * A prime number is divisible only by 1 and itself.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    bool isPrime(int n) {

        /****************************************************
         * EDGE CASES
         * --------------------------------------------------
         * 0 and 1 are NOT prime numbers
         ****************************************************/
        if (n <= 1)
            return false;

        /****************************************************
         * METHOD 1: Optimized √n approach (RECOMMENDED)
         * --------------------------------------------------
         * Time Complexity: O(√n)
         * Space Complexity: O(1)
         ****************************************************/
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;  // divisible by some number
        }

        return true;

        /****************************************************
         * METHOD 2: Brute Force (NOT RECOMMENDED)
         * --------------------------------------------------
         * Time Complexity: O(n)
         ****************************************************/
        /*
        for (int i = 2; i < n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
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
    if (obj.isPrime(n))
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}
*/