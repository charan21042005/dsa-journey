/************************************************************
 * Problem: Overlapping Rectangles
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given two rectangles represented by:
 *  - L1 (top-left corner of rectangle 1)
 *  - R1 (bottom-right corner of rectangle 1)
 *  - L2 (top-left corner of rectangle 2)
 *  - R2 (bottom-right corner of rectangle 2)
 *
 * Determine whether the two rectangles overlap.
 *
 * Note:
 * If rectangles just touch at edges or corners,
 * they are NOT considered overlapping.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    int doOverlap(vector<int> L1, vector<int> R1,
                  vector<int> L2, vector<int> R2) {

        /****************************************************
         * METHOD 1: Separation Axis Theorem (RECOMMENDED)
         * --------------------------------------------------
         * Rectangles do NOT overlap if:
         * 1. One is completely to the left of the other
         * 2. One is completely above the other
         *
         * Otherwise, they overlap.
         *
         * Time Complexity: O(1)
         * Space Complexity: O(1)
         ****************************************************/

        // Check if one rectangle is to the left of the other
        if (R1[0] <= L2[0] || R2[0] <= L1[0])
            return 0;

        // Check if one rectangle is above the other
        if (R1[1] >= L2[1] || R2[1] >= L1[1])
            return 0;

        return 1;

        /****************************************************
         * METHOD 2: Using Non-Overlap Conditions (Verbose)
         * --------------------------------------------------
         * Same logic, expanded for clarity
         ****************************************************/
        /*
        bool left  = R1[0] <= L2[0];
        bool right = R2[0] <= L1[0];
        bool above = R1[1] >= L2[1];
        bool below = R2[1] >= L1[1];

        if (left || right || above || below)
            return 0;
        return 1;
        */

        /****************************************************
         * METHOD 3: Area Intersection Check (NOT IDEAL)
         * --------------------------------------------------
         * More calculations, less intuitive
         ****************************************************/
        /*
        int x_overlap = min(R1[0], R2[0]) - max(L1[0], L2[0]);
        int y_overlap = min(L1[1], L2[1]) - max(R1[1], R2[1]);

        return (x_overlap > 0 && y_overlap > 0);
        */
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * NOT required for GFG submission
 ************************************************************
int main() {
    vector<int> L1(2), R1(2), L2(2), R2(2);

    // Input format:
    // L1x L1y R1x R1y
    // L2x L2y R2x R2y
    cin >> L1[0] >> L1[1] >> R1[0] >> R1[1];
    cin >> L2[0] >> L2[1] >> R2[0] >> R2[1];

    Solution obj;
    cout << obj.doOverlap(L1, R1, L2, R2);

    return 0;
}
*/