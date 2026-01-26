/************************************************************
 * Problem: Linear Diophantine Equations
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given integers A, B, C, check whether the equation
 *      A*x + B*y = C
 * has any integer solution (x, y).
 *
 * Theory:
 * A linear Diophantine equation has an integer solution
 * iff gcd(A, B) divides C.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED CLASS
 ************************************************************/
class Solution {
  public:
    int isPossible(int A, int B, int C) {

        /****************************************************
         * METHOD 1: Using GCD (RECOMMENDED)
         * --------------------------------------------------
         * A*x + B*y = C has integer solutions
         * if and only if gcd(A, B) | C
         *
         * Time Complexity: O(log(min(A, B)))
         * Space Complexity: O(1)
         ****************************************************/

        int g = gcd(A, B);
        return (C % g == 0) ? 1 : 0;


        /****************************************************
         * METHOD 2: Extended Euclidean (Conceptual)
         * --------------------------------------------------
         * Extended Euclid finds x, y for:
         *      A*x + B*y = gcd(A, B)
         * If gcd divides C, solution exists.
         *
         * Not required explicitly for this problem.
         ****************************************************/
        /*
        int g = gcd(A, B);
        if (C % g != 0)
            return 0;
        else
            return 1;
        */


        /****************************************************
         * METHOD 3: Brute Force (NOT PRACTICAL)
         * --------------------------------------------------
         * Try all x, y in a range — inefficient.
         * Avoid for large values.
         ****************************************************/
    }
};

/************************************************************
 * STANDALONE VERSION (For Local Testing)
 ************************************************************
int main() {
    int A, B, C;
    cin >> A >> B >> C;

    Solution obj;
    cout << obj.isPossible(A, B, C) << endl;

    return 0;
}
*/