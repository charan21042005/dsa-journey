/************************************************************
 * Problem: Armstrong Numbers
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given a 3-digit number n, check whether it is an
 * Armstrong number or not.
 *
 * Armstrong number (3-digit):
 * Sum of cubes of its digits == number itself
 * Example: 153 → 1³ + 5³ + 3³ = 153
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FUNCTION
 ************************************************************/
class Solution {
public:
    bool armstrongNumber(int n) {

        /****************************************************
         * METHOD 1: Digit Extraction + Cube Sum (RECOMMENDED)
         * --------------------------------------------------
         * Steps:
         * 1. Extract each digit
         * 2. Cube it and add to sum
         * 3. Compare with original number
         *
         * Time Complexity: O(1)
         * Space Complexity: O(1)
         ****************************************************/

        int original = n;
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit * digit;
            n /= 10;
        }

        return sum == original;


        /****************************************************
         * METHOD 2: Using pow() function (ALTERNATIVE)
         * NOTE: Slightly slower due to floating-point ops
         ****************************************************/
        /*
        int original = n;
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += pow(digit, 3);
            n /= 10;
        }

        return sum == original;
        */


        /****************************************************
         * METHOD 3: Pre-extracted digits (ONLY for 3-digit)
         * Educational purpose
         ****************************************************/
        /*
        int a = n / 100;
        int b = (n / 10) % 10;
        int c = n % 10;

        return (a*a*a + b*b*b + c*c*c) == n;
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
    cout << (obj.armstrongNumber(n) ? "true" : "false");

    return 0;
}
*/