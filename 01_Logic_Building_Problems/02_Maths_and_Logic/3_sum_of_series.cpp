/********************************************************
 * Problem: Sum of Series
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an integer n, return the sum of first n
 * natural numbers.
 *
 * Formula:
 * Sum = n * (n + 1) / 2
 ********************************************************/

#include <iostream>
using namespace std;

/****************************************************
 * GFG REQUIRED FORMAT
 ****************************************************/
class Solution {
  public:
    int findSum(int n) {

        /************************************************
         * METHOD 1: Mathematical Formula (RECOMMENDED)
         * ----------------------------------------------
         * Fastest and most efficient
         * Time Complexity: O(1)
         ************************************************/
        return n * (n + 1) / 2;

        /************************************************
         * METHOD 2: Using Loop (BEGINNER FRIENDLY)
         * ----------------------------------------------
         * Easy to understand but slower
         * Time Complexity: O(n)
         ************************************************/
        /*
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        return sum;
        */

        /************************************************
         * METHOD 3: Using Recursion
         * ----------------------------------------------
         * Not recommended for large n
         ************************************************/
        /*
        if (n == 0)
            return 0;
        return n + findSum(n - 1);
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
    cout << obj.findSum(n);

    return 0;
}
*/