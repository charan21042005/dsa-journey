/********************************************************
 * Problem: Addition of Two Numbers
 * Platform: GeeksforGeeks + Local Practice
 *
 * Task:
 * Given two numbers a and b, return their sum.
 *
 * Constraints:
 * 1 <= a, b <= 10^18
 *
 * Note:
 * Use long long to avoid overflow.
 ********************************************************/

#include <iostream>
using namespace std;

/********************************************************
 * GEEKSFORGEEKS REQUIRED FORMAT
 * ------------------------------------------------------
 * Only this function is evaluated on GFG
 ********************************************************/
class Solution {
public:
    long long addition(long long a, long long b) {

        /************************************************
         * METHOD 1: Direct Addition (BEST & RECOMMENDED)
         * ----------------------------------------------
         * Time Complexity: O(1)
         * Space Complexity: O(1)
         ************************************************/
        return a + b;

        /************************************************
         * METHOD 2: Using Bitwise Operators (Advanced)
         * ----------------------------------------------
         * Adds without using '+' operator
         ************************************************/
        /*
        while (b != 0) {
            long long carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }
        return a;
        */

        /************************************************
         * METHOD 3: Using Increment Loop (NOT practical)
         * ----------------------------------------------
         * Educational purpose only
         ************************************************/
        /*
        while (b > 0) {
            a++;
            b--;
        }
        return a;
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

    long long a, b;
    cin >> a >> b;

    // Direct addition
    cout << a + b << endl;

    return 0;
}
*/
