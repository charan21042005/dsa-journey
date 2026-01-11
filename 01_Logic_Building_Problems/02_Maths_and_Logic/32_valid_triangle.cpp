/************************************************************
 * Problem: Valid Triangle
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given three integers a, b, and c representing
 * the sides of a triangle, check whether they
 * can form a valid triangle.
 *
 * Triangle Validity Rule:
 * Sum of any two sides must be strictly greater
 * than the third side.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    bool checkValidity(int a, int b, int c) {

        /****************************************************
         * METHOD 1: Triangle Inequality Theorem (RECOMMENDED)
         * --------------------------------------------------
         * a + b > c
         * b + c > a
         * a + c > b
         *
         * Time Complexity: O(1)
         * Space Complexity: O(1)
         ****************************************************/
        if (a + b > c && a + c > b && b + c > a)
            return true;

        return false;

        /****************************************************
         * METHOD 2: Sorting Based Check
         * --------------------------------------------------
         * Sort sides, then check:
         * smallest + middle > largest
         ****************************************************/
        /*
        vector<int> sides = {a, b, c};
        sort(sides.begin(), sides.end());
        return (sides[0] + sides[1] > sides[2]);
        */

        /****************************************************
         * METHOD 3: Using Long Long (Overflow Safe)
         * --------------------------------------------------
         * Useful if constraints are very large
         ****************************************************/
        /*
        long long x = a, y = b, z = c;
        return (x + y > z && x + z > y && y + z > x);
        */
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * NOT required for GFG submission
 ************************************************************
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    Solution obj;
    if (obj.checkValidity(a, b, c))
        cout << "Valid Triangle";
    else
        cout << "Invalid Triangle";

    return 0;
}
*/