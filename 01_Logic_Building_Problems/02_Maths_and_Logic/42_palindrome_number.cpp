/************************************************************
 * Problem: Palindrome
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an integer n, determine whether it is a palindrome.
 *
 * A palindrome number reads the same forward and backward.
 * Example:
 *  - 121 → Palindrome
 *  - 123 → Not Palindrome
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FUNCTION
 ************************************************************/
class Solution {
public:
    bool isPalindrome(int n) {

        /****************************************************
         * METHOD 1: Reverse the Number (RECOMMENDED)
         * --------------------------------------------------
         * Steps:
         * 1. Store original number
         * 2. Reverse digits using modulo and division
         * 3. Compare reversed number with original
         *
         * Time Complexity: O(d) where d = number of digits
         * Space Complexity: O(1)
         ****************************************************/

        int original = n;
        long long reversed = 0;

        while (n > 0) {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n /= 10;
        }

        return reversed == original;


        /****************************************************
         * METHOD 2: Convert to String (ALTERNATIVE)
         * --------------------------------------------------
         * Simpler but uses extra space
         ****************************************************/
        /*
        string s = to_string(n);
        string rev = s;
        reverse(rev.begin(), rev.end());
        return s == rev;
        */


        /****************************************************
         * METHOD 3: Half Reversal (OPTIMIZED)
         * --------------------------------------------------
         * Reverse only half of the number
         * Avoids overflow
         ****************************************************/
        /*
        if (n < 0 || (n % 10 == 0 && n != 0))
            return false;

        int half = 0;
        while (n > half) {
            half = half * 10 + n % 10;
            n /= 10;
        }

        return (n == half || n == half / 10);
        */
    }
};

/************************************************************
 * STANDALONE MAIN (For Local Testing Only)
 * Not required on GeeksforGeeks
 ************************************************************
int main() {
    int n;
    cin >> n;

    Solution obj;
    cout << (obj.isPalindrome(n) ? "true" : "false");

    return 0;
}
*/