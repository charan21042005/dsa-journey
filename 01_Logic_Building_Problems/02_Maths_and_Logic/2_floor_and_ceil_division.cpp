/********************************************************
 * Problem: Floor and Ceil of Integer Division
 * Platform: GeeksforGeeks
 *
 * Works for:
 *  - Positive numbers
 *  - Negative numbers
 ********************************************************/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

/****************************************************
 * GFG REQUIRED FORMAT
 ****************************************************/
class Solution {
  public:
    vector<int> divFloorCeil(int a, int b) {

        /************************************************
         * METHOD 1: Using floor() and ceil() (RECOMMENDED)
         * ----------------------------------------------
         * Correct for both positive and negative values
         ************************************************/
        int floorVal = floor((double)a / b);
        int ceilVal  = ceil((double)a / b);

        return {floorVal, ceilVal};

        /************************************************
         * METHOD 2: Integer math with sign handling
         * ----------------------------------------------
         * Slightly complex but avoids floating point
         ************************************************/
        /*
        int floorVal = a / b;
        int ceilVal  = a / b;

        if (a % b != 0) {
            if ((a < 0) ^ (b < 0))   // opposite signs
                floorVal--;
            else
                ceilVal++;
        }

        return {floorVal, ceilVal};
        */
    }
};

/****************************************************
 * STANDALONE MAIN FUNCTION (For Local Practice)
 ****************************************************
int main() {

    int a, b;
    cin >> a >> b;

    Solution obj;
    vector<int> ans = obj.divFloorCeil(a, b);

    cout << ans[0] << " " << ans[1];
    return 0;
}
*/