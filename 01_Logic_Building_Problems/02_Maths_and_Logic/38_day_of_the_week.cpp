/************************************************************
 * Problem: Day of the Week
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given a date (d, m, y), return the day of the week.
 *
 * Constraints:
 * 1 <= d <= 31
 * 1 <= m <= 12
 * 1 <= y <= 2100
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
  public:
    string getDayOfWeek(int d, int m, int y) {

        /****************************************************
         * METHOD 1: Zeller’s Congruence (RECOMMENDED)
         * --------------------------------------------------
         * Mathematical formula to calculate weekday
         *
         * Time Complexity: O(1)
         * Space Complexity: O(1)
         ****************************************************/

        // Adjust January and February
        if (m == 1 || m == 2) {
            m += 12;
            y--;
        }

        int K = y % 100;   // Year of the century
        int J = y / 100;   // Zero-based century

        int h = (d + (13 * (m + 1)) / 5 + K + (K / 4)
                 + (J / 4) + (5 * J)) % 7;

        vector<string> days = {
            "Saturday", "Sunday", "Monday",
            "Tuesday", "Wednesday", "Thursday", "Friday"
        };

        return days[h];

        /****************************************************
         * METHOD 2: Counting Days from Reference (ALTERNATE)
         * --------------------------------------------------
         * Pick a known reference date and count days
         * Slower and unnecessary for this problem
         ****************************************************/
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * NOT required for GFG submission
 ************************************************************/
/*
int main() {
    int d, m, y;
    cin >> d >> m >> y;

    Solution obj;
    cout << obj.getDayOfWeek(d, m, y);

    return 0;
}
*/
