/************************************************************
 * Problem: Swap Two Numbers
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given two integers a and b,
 * return them after swapping.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    pair<int, int> get(int a, int b) {

        /****************************************************
         * METHOD 1: Using Temporary Variable (RECOMMENDED)
         * --------------------------------------------------
         * Time Complexity: O(1)
         * Space Complexity: O(1)
         ****************************************************/
        int temp = a;
        a = b;
        b = temp;
        return {a, b};

        /****************************************************
         * METHOD 2: Using Arithmetic (No extra variable)
         * --------------------------------------------------
         * a = a + b
         * b = a - b
         * a = a - b
         * Can overflow for large values
         ****************************************************/
        /*
        a = a + b;
        b = a - b;
        a = a - b;
        return {a, b};
        */

        /****************************************************
         * METHOD 3: Using XOR (Bitwise Swap)
         * --------------------------------------------------
         * Safe from overflow
         ****************************************************/
        /*
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        return {a, b};
        */

        /****************************************************
         * METHOD 4: Using STL swap()
         * --------------------------------------------------
         * Clean and readable
         ****************************************************/
        /*
        swap(a, b);
        return {a, b};
        */
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * NOT required for GFG submission
 ************************************************************
int main() {
    int a, b;
    cin >> a >> b;

    Solution obj;
    pair<int, int> result = obj.get(a, b);

    cout << result.first << " " << result.second;
    return 0;
}
*/