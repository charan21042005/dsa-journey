/********************************************************
 * Problem: Angle Between Hour and Minute Hand
 * Platform: GeeksforGeeks
 *
 * Input: Time in "HH:MM" format
 * Output: Minimum angle between hour and minute hand
 ********************************************************/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    double getAngle(string& s) {

        /****************************************************
         * METHOD 1: Mathematical Formula (RECOMMENDED)
         * --------------------------------------------------
         * Accurate and works for all valid times
         ****************************************************/

        int hour = stoi(s.substr(0, 2));
        int minute = stoi(s.substr(3, 2));

        // Convert 12-hour format
        hour %= 12;

        // Calculate angles
        double hourAngle = (hour * 30.0) + (minute * 0.5);
        double minuteAngle = minute * 6.0;

        // Absolute difference
        double angle = abs(hourAngle - minuteAngle);

        // Return minimum angle
        return min(angle, 360.0 - angle);

        /****************************************************
         * METHOD 2: Compact Formula (Alternative)
         * --------------------------------------------------
         * |30*h - 5.5*m|
         ****************************************************/
        /*
        int h = stoi(s.substr(0, 2)) % 12;
        int m = stoi(s.substr(3, 2));
        double angle = abs(30.0 * h - 5.5 * m);
        return min(angle, 360.0 - angle);
        */
    }
};

/***************** LOCAL TESTING *****************
int main() {
    string time;
    cin >> time;

    Solution obj;
    cout << fixed << setprecision(1) << obj.getAngle(time);

    return 0;
}
*/