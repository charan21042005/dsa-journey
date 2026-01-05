/********************************************************
 * Problem: Sum of Digits
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an integer n, return the sum of its digits.
 ********************************************************/

#include <iostream>
using namespace std;

/****************************************************
 * GFG REQUIRED FORMAT
 ****************************************************/
class Solution {
  public:
    int sumOfDigits(int n) {

        /************************************************
         * METHOD 1: Iterative Digit Extraction (RECOMMENDED)
         * ----------------------------------------------
         * Most commonly used and interview-friendly
         * Time Complexity: O(number of digits)
         ************************************************/
        int sum = 0;

        while (n > 0) {
            sum += n % 10;  // extract last digit
            n /= 10;        // remove last digit
        }

        return sum;

        /************************************************
         * METHOD 2: Using Recursion
         * ----------------------------------------------
         * Elegant but may cause stack overflow for
         * very large numbers
         ************************************************/
        /*
        if (n == 0)
            return 0;
        return (n % 10) + sumOfDigits(n / 10);
        */

        /************************************************
         * METHOD 3: Convert to String
         * ----------------------------------------------
         * Easy to understand but not preferred
         * in interviews
         ************************************************/
        /*
        int sum = 0;
        string s = to_string(n);
        for (char c : s) {
            sum += c - '0';
        }
        return sum;
        */
    }
};

/****************************************************
 * STANDALONE MAIN FUNCTION (For Local Practice)
 ****************************************************
int main() {

    int n;
    cin >> n;

    Solution obj;
    cout << obj.sumOfDigits(n);

    return 0;
}
*/