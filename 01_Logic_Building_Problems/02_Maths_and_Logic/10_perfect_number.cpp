/********************************************************
 * Problem: Perfect Number
 * Platform: GeeksforGeeks
 *
 * Task:
 * Check whether a given number n is a perfect number.
 ********************************************************/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPerfect(int n) {

        /****************************************************
         * METHOD 1: Optimized Divisor Sum (RECOMMENDED)
         * --------------------------------------------------
         * Loop till sqrt(n) and add divisor pairs
         ****************************************************/
        if (n <= 1)
            return false;

        int sum = 1; // 1 is always a proper divisor

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                sum += i;

                // add paired divisor if not same
                if (i != n / i)
                    sum += n / i;
            }
        }

        return sum == n;

        /****************************************************
         * METHOD 2: Brute Force (NOT RECOMMENDED)
         * --------------------------------------------------
         * Time Complexity: O(n)
         ****************************************************/
        /*
        int sum = 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0)
                sum += i;
        }
        return sum == n;
        */
    }
};

/***************** LOCAL TESTING *****************
int main() {
    int n;
    cin >> n;

    Solution obj;
    cout << (obj.isPerfect(n) ? "True" : "False");

    return 0;
}
*/