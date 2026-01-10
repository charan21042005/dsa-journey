/************************************************************
 * Problem: The Dice Problem
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an integer n (1 ≤ n ≤ 6),
 * return the number on the opposite face of a dice.
 *
 * Dice Property:
 * Opposite faces always sum to 7.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    int oppositeFaceOfDice(int n) {

        /****************************************************
         * METHOD 1: Mathematical Property (RECOMMENDED)
         * --------------------------------------------------
         * Opposite face = 7 - n
         *
         * Time Complexity: O(1)
         * Space Complexity: O(1)
         ****************************************************/
        return 7 - n;

        /****************************************************
         * METHOD 2: Using Array Mapping
         * --------------------------------------------------
         * Explicit mapping of faces
         ****************************************************/
        /*
        int opposite[7] = {0, 6, 5, 4, 3, 2, 1};
        return opposite[n];
        */

        /****************************************************
         * METHOD 3: Using Switch Case
         * --------------------------------------------------
         * Less clean, not preferred
         ****************************************************/
        /*
        switch(n) {
            case 1: return 6;
            case 2: return 5;
            case 3: return 4;
            case 4: return 3;
            case 5: return 2;
            case 6: return 1;
        }
        return -1;
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
    cout << obj.oppositeFaceOfDice(n);

    return 0;
}
*/