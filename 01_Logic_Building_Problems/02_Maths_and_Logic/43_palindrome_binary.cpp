/************************************************************
 * Problem: Palindrome Binary
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an integer N, check whether its binary representation
 * is a palindrome or not.
 *
 * Return:
 * 1 → if binary representation is palindrome
 * 0 → otherwise
 *
 * Example:
 * N = 17 → Binary = 10001 → Palindrome → 1
 * N = 16 → Binary = 10000 → Not Palindrome → 0
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FUNCTION
 ************************************************************/
class Solution {
public:
    int isPallindrome(long long int N) {

        /****************************************************
         * METHOD 1: Convert to Binary String (RECOMMENDED)
         * --------------------------------------------------
         * Steps:
         * 1. Convert number to binary string
         * 2. Check if string is palindrome
         *
         * Time Complexity: O(log N)
         * Space Complexity: O(log N)
         ****************************************************/

        string binary = "";

        while (N > 0) {
            binary += (N % 2) + '0';
            N /= 2;
        }

        string rev = binary;
        reverse(rev.begin(), rev.end());

        return binary == rev ? 1 : 0;


        /****************************************************
         * METHOD 2: Bitwise Two-Pointer (ALTERNATIVE)
         * --------------------------------------------------
         * Compare bits from leftmost and rightmost
         ****************************************************/
        /*
        int left = 63 - __builtin_clzll(N);
        int right = 0;

        while (left > right) {
            if (((N >> left) & 1) != ((N >> right) & 1))
                return 0;
            left--;
            right++;
        }
        return 1;
        */


        /****************************************************
         * METHOD 3: Reverse Binary Number (OPTIMIZED)
         * --------------------------------------------------
         * Reverse bits and compare
         ****************************************************/
        /*
        long long rev = 0, temp = N;

        while (temp > 0) {
            rev = (rev << 1) | (temp & 1);
            temp >>= 1;
        }

        return rev == N ? 1 : 0;
        */
    }
};

/************************************************************
 * STANDALONE MAIN (For Local Testing Only)
 * Not required for GFG submission
 ************************************************************
int main() {
    long long N;
    cin >> N;

    Solution obj;
    cout << obj.isPallindrome(N);

    return 0;
}
*/