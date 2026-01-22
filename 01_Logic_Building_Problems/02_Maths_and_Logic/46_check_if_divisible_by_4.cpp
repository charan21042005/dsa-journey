/************************************************************
 * Problem: Check if Divisible by 4
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given a number N in string form, check whether it is
 * divisible by 4.
 *
 * Important Rule:
 * A number is divisible by 4 if its last two digits
 * form a number divisible by 4.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FUNCTION
 ************************************************************/
class Solution {
public:
    int divisibleBy4(string N) {

        /****************************************************
         * METHOD 1: Last Two Digits Rule (RECOMMENDED)
         * --------------------------------------------------
         * If number has:
         * - 1 digit → check directly
         * - ≥2 digits → take last two digits
         *
         * Time Complexity: O(1)
         * Space Complexity: O(1)
         ****************************************************/

        int len = N.size();

        // If number has only one digit
        if (len == 1) {
            int digit = N[0] - '0';
            return (digit % 4 == 0) ? 1 : 0;
        }

        // Take last two digits
        int lastTwo =
            (N[len - 2] - '0') * 10 +
            (N[len - 1] - '0');

        return (lastTwo % 4 == 0) ? 1 : 0;


        /****************************************************
         * METHOD 2: Full Modulo Computation (NOT REQUIRED)
         * --------------------------------------------------
         * Traverse whole string and compute modulo
         * Slower and unnecessary here
         ****************************************************/
    }
};

/************************************************************
 * STANDALONE MAIN (For Local Testing)
 * ----------------------------------
 * Not required for GFG submission
 ************************************************************/
/*
int main() {
    string N;
    cin >> N;

    Solution obj;
    cout << obj.divisibleBy4(N);

    return 0;
}
*/
