/********************************************************
 * Problem: GCD of Two Numbers
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given two integers a and b, return their GCD.
 ********************************************************/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int gcd(int a, int b) {

        /****************************************************
         * METHOD 1: Euclidean Algorithm (RECOMMENDED)
         * --------------------------------------------------
         * gcd(a, b) = gcd(b, a % b)
         * Fast, efficient, and standard interview approach
         ****************************************************/
        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }
        return abs(a);   // handle negative inputs safely

        /****************************************************
         * METHOD 2: Recursive Euclidean Algorithm
         ****************************************************/
        /*
        if (b == 0)
            return abs(a);
        return gcd(b, a % b);
        */

        /****************************************************
         * METHOD 3: Using STL (__gcd)
         * --------------------------------------------------
         * Simple but not recommended for interviews
         ****************************************************/
        /*
        return __gcd(a, b);
        */
    }
};

/***************** LOCAL TESTING *****************
int main() {
    int a, b;
    cin >> a >> b;

    Solution obj;
    cout << obj.gcd(a, b);

    return 0;
}
*/