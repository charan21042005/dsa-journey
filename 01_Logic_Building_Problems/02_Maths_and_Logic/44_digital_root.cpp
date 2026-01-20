/************************************************************
 * Problem: Digital Root
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given a number n, find its digital root.
 * Digital root is the recursive sum of digits until
 * a single digit is obtained.
 *
 * Example:
 * n = 99999 → 9
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FUNCTION
 ************************************************************/
class Solution {
public:
    int digitalRoot(int n) {

        /****************************************************
         * METHOD 1: Mathematical Formula (RECOMMENDED)
         * --------------------------------------------------
         * Digital Root Formula:
         * - If n == 0 → 0
         * - Else → 1 + (n - 1) % 9
         *
         * Time Complexity: O(1)
         * Space Complexity: O(1)
         ****************************************************/
        if (n == 0) return 0;
        return 1 + (n - 1) % 9;


        /****************************************************
         * METHOD 2: Iterative Digit Sum
         * --------------------------------------------------
         * Keep summing digits until n < 10
         *
         * Time Complexity: O(d(10)
         * Space Complexity: O(1)
         ****************************************************/
        /*
        while (n >= 10) {
            int sum = 0;
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
            n = sum;
        }
        return n;
        */


        /****************************************************
         * METHOD 3: Recursive Approach
         * --------------------------------------------------
         * Educational purpose
         ****************************************************/
        /*
        if (n < 10) return n;
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return digitalRoot(sum);
        */
    }
};

/************************************************************
 * STANDALONE MAIN (For Local Testing)
 * ----------------------------------
 * Not required for GFG submission
 ************************************************************/
/*
int main() {
    int n;
    cin >> n;

    Solution obj;
    cout << obj.digitalRoot(n) << endl;

    return 0;
}
*/
