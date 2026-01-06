/************************************************************
 * Problem: Inverse Division
 * Platform: GeeksforGeeks
 *
 * Task:
 * Compute (a / b) % M using Modular Arithmetic
 *
 * NOTE:
 * Fermat’s Theorem DOES NOT apply because M is NOT guaranteed
 * to be prime.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:

    /****************************************************
     * Extended Euclidean Algorithm
     * --------------------------------------------------
     * Finds x and y such that:
     * a*x + b*y = gcd(a, b)
     ****************************************************/
    long long extendedGCD(long long a, long long b, long long &x, long long &y) {
        if (b == 0) {
            x = 1;
            y = 0;
            return a;
        }

        long long x1, y1;
        long long gcd = extendedGCD(b, a % b, x1, y1);

        x = y1;
        y = x1 - (a / b) * y1;

        return gcd;
    }

    int modDivide(int a, int b, int M) {

        long long x, y;
        long long g = extendedGCD(b, M, x, y);

        // If inverse does not exist
        if (g != 1)
            return -1;

        // Make inverse positive
        long long inverse_b = (x % M + M) % M;

        return (int)((1LL * a * inverse_b) % M);
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 ************************************************************
int main() {
    int a, b, M;
    cin >> a >> b >> M;

    Solution obj;
    cout << obj.modDivide(a, b, M);

    return 0;
}
*/