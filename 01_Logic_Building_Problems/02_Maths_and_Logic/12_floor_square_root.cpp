/************************************************************
 * Problem: Square Root (Floor Value)
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an integer n, find the floor value of its square root.
 *
 * Example:
 * n = 5  -> Output = 2
 * n = 16 -> Output = 4
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    int floorSqrt(int n) {

        /****************************************************
         * METHOD 1: Binary Search (RECOMMENDED)
         * --------------------------------------------------
         * Time Complexity: O(log n)
         * Space Complexity: O(1)
         *
         * Works efficiently for large values of n
         ****************************************************/

        if (n == 0 || n == 1)
            return n;

        int low = 1, high = n, ans = 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (mid * mid == n) {
                return mid;
            }
            else if (mid * mid < n) {
                ans = mid;       // possible answer
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;

        /****************************************************
         * METHOD 2: Using sqrt() function (NOT PREFERRED)
         * --------------------------------------------------
         * Can cause precision issues
         ****************************************************/
        /*
        return (int)sqrt(n);
        */

        /****************************************************
         * METHOD 3: Brute Force (NOT EFFICIENT)
         * --------------------------------------------------
         * Time Complexity: O(n)
         ****************************************************/
        /*
        int i = 1;
        while (i * i <= n) i++;
        return i - 1;
        */
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * This part is NOT required for GFG submission
 ************************************************************
int main() {
    int n;
    cin >> n;

    Solution obj;
    cout << obj.floorSqrt(n) << endl;

    return 0;
}
*/