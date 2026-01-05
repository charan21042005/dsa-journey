/********************************************************
 * Problem: LCM of Two Numbers
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given two integers a and b, return their LCM.
 ********************************************************/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int lcm(int a, int b) {

        /****************************************************
         * METHOD 1: Using GCD Formula (RECOMMENDED)
         * --------------------------------------------------
         * lcm(a, b) = |a * b| / gcd(a, b)
         * Efficient and standard interview approach
         ****************************************************/
        if (a == 0 || b == 0)
            return 0;

        return abs(a / __gcd(a, b) * b);

        /****************************************************
         * METHOD 2: Manual GCD + Formula
         ****************************************************/
        /*
        int x = abs(a), y = abs(b);
        while (y != 0) {
            int rem = x % y;
            x = y;
            y = rem;
        }
        int gcd = x;
        return (a == 0 || b == 0) ? 0 : abs(a * b) / gcd;
        */

        /****************************************************
         * METHOD 3: Brute Force (NOT RECOMMENDED)
         * --------------------------------------------------
         * Very slow for large numbers
         ****************************************************/
        /*
        int maxVal = max(abs(a), abs(b));
        for (int i = maxVal; ; i++) {
            if (i % a == 0 && i % b == 0)
                return i;
        }
        */
    }
};

/***************** LOCAL TESTING *****************
int main() {
    int a, b;
    cin >> a >> b;

    Solution obj;
    cout << obj.lcm(a, b);

    return 0;
}
*/