/************************************************************
 * Problem: Distance Between Two Points
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given coordinates of two points (x1, y1) and (x2, y2),
 * find the Euclidean distance between them and return
 * the NEAREST INTEGER distance.
 *
 * NOTE (Important):
 * GFG expects ROUNDING, not FLOOR.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    int distance(int x1, int y1, int x2, int y2) {

        /****************************************************
         * METHOD 1: Euclidean Distance + ROUND (RECOMMENDED)
         * --------------------------------------------------
         * sqrt(dx² + dy²) and round to nearest integer
         *
         * Time Complexity: O(1)
         * Space Complexity: O(1)
         ****************************************************/
        long long dx = x2 - x1;
        long long dy = y2 - y1;

        double dist = sqrt(dx * dx + dy * dy);
        return (int)round(dist);

        /****************************************************
         * METHOD 2: Using hypot() + round (STL)
         * --------------------------------------------------
         * Cleaner & numerically stable
         ****************************************************/
        /*
        double dist = hypot(x2 - x1, y2 - y1);
        return (int)round(dist);
        */

        /****************************************************
         * METHOD 3: Manual rounding (Educational)
         ****************************************************/
        /*
        double dist = sqrt(dx * dx + dy * dy);
        return (int)(dist + 0.5);
        */
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * NOT required for GFG submission
 ************************************************************
int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    Solution obj;
    cout << obj.distance(x1, y1, x2, y2);

    return 0;
}
*/