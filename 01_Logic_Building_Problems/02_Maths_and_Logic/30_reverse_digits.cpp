/************************************************************
 * Problem: Reverse Digits
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an integer n, reverse its digits
 * and return the reversed number.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    int reverseDigits(int n) {

        /****************************************************
         * METHOD 1: Mathematical Digit Reversal (RECOMMENDED)
         * --------------------------------------------------
         * Extract last digit and build reversed number
         *
         * Time Complexity: O(log10(n))
         * Space Complexity: O(1)
         ****************************************************/
        int rev = 0;
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        return rev;

        /****************************************************
         * METHOD 2: Using String Conversion
         * --------------------------------------------------
         * Easier to understand but less optimal
         ****************************************************/
        /*
        string s = to_string(n);
        reverse(s.begin(), s.end());
        return stoi(s);
        */

        /****************************************************
         * METHOD 3: Recursive Approach
         * --------------------------------------------------
         * Educational, not recommended for production
         ****************************************************/
        /*
        static int rev = 0;
        if (n == 0) return rev;
        rev = rev * 10 + (n % 10);
        return reverseDigits(n / 10);
        */
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * NOT required for GFG submission
 ************************************************************
int main() {
    int n;
    cin >> n;

    Solution obj;
    cout << obj.reverseDigits(n);

    return 0;
}
*/