/************************************************************
 * Problem: Divisible by 13
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given a number as a string, check whether it is divisible by 13.
 *
 * Return:
 * true  -> if divisible by 13
 * false -> otherwise
 *
 * Note:
 * Number can be very large, so we cannot convert it directly
 * into integer types.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    bool divby13(string &s) {

        /****************************************************
         * METHOD 1: Modulo simulation using string (RECOMMENDED)
         * --------------------------------------------------
         * Idea:
         * Traverse digit by digit and simulate modulo 13.
         *
         * Works for:
         * - Very large numbers
         * - All edge cases
         ****************************************************/

        int remainder = 0;

        for (char ch : s) {
            int digit = ch - '0';
            remainder = (remainder * 10 + digit) % 13;
        }

        return remainder == 0;

        /****************************************************
         * METHOD 2: Using long long (NOT SAFE - COMMENTED)
         * --------------------------------------------------
         * This will FAIL for very large numbers
         ****************************************************/
        /*
        long long num = stoll(s);
        return num % 13 == 0;
        */
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * This part is NOT required for GFG submission
 ************************************************************
int main() {
    string s;
    cin >> s;

    Solution obj;
    cout << (obj.divby13(s) ? "Yes" : "No") << endl;

    return 0;
}
*/