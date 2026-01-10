/************************************************************
 * Problem: Series AP (Arithmetic Progression)
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given first term a1, second term a2,
 * and n, find the nth term of the AP.
 *
 * AP Formula:
 * Tn = a1 + (n - 1) * d
 * where d = a2 - a1
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    int nthTermOfAP(int a1, int a2, int n) {

        /****************************************************
         * METHOD 1: Direct Formula (RECOMMENDED)
         * --------------------------------------------------
         * Time Complexity: O(1)
         * Space Complexity: O(1)
         ****************************************************/
        int d = a2 - a1;
        return a1 + (n - 1) * d;

        /****************************************************
         * METHOD 2: Iterative Addition
         * --------------------------------------------------
         * Time Complexity: O(n)
         * Useful for understanding AP construction
         ****************************************************/
        /*
        int term = a1;
        int d = a2 - a1;
        for (int i = 1; i < n; i++) {
            term += d;
        }
        return term;
        */

        /****************************************************
         * METHOD 3: Recursive Approach
         * --------------------------------------------------
         * Not recommended due to recursion overhead
         ****************************************************/
        /*
        if (n == 1)
            return a1;
        return nthTermOfAP(a1, a2, n - 1) + (a2 - a1);
        */
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * NOT required for GFG submission
 ************************************************************
int main() {
    int a1, a2, n;
    cin >> a1 >> a2 >> n;

    Solution obj;
    cout << obj.nthTermOfAP(a1, a2, n);

    return 0;
}
*/