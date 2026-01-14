/************************************************************
 * Problem: Factorial
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an integer n, return the factorial of n.
 *
 * Factorial:
 * n! = n × (n-1) × (n-2) × ... × 1
 *
 * Constraints (GFG):
 * - n is small enough that result fits in int
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    int factorial(int n) {

        /****************************************************
         * EDGE CASE
         ****************************************************/
        if (n == 0 || n == 1)
            return 1;

        /****************************************************
         * METHOD 1: Iterative Multiplication (RECOMMENDED)
         * --------------------------------------------------
         * Time Complexity: O(n)
         * Space Complexity: O(1)
         ****************************************************/
        int result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;

        /****************************************************
         * METHOD 2: Recursive Approach
         * --------------------------------------------------
         * Time Complexity: O(n)
         * Space Complexity: O(n) (recursion stack)
         ****************************************************/
        /*
        return n * factorial(n - 1);
        */

        /****************************************************
         * METHOD 3: Using STL accumulate (NOT RECOMMENDED)
         * --------------------------------------------------
         * Less readable, slower
         ****************************************************/
        /*
        vector<int> nums;
        for (int i = 1; i <= n; i++)
            nums.push_back(i);
        return accumulate(nums.begin(), nums.end(), 1, multiplies<int>());
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
    cout << obj.factorial(n);

    return 0;
}
*/