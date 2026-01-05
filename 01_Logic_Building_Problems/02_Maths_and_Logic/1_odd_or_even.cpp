/********************************************************
 * Problem: Odd or Even
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an integer n, return true if it is even,
 * otherwise return false.
 *
 * Input:
 * n (integer)
 *
 * Output:
 * true  -> if n is even
 * false -> if n is odd
 ********************************************************/

#include <iostream>
using namespace std;

/****************************************************
 * GFG REQUIRED FORMAT
 ****************************************************/
class Solution {
  public:
    bool isEven(int n) {

        /************************************************
         * METHOD 1: Using Modulo Operator (RECOMMENDED)
         * ----------------------------------------------
         * If n % 2 == 0 → Even
         * Else → Odd
         ************************************************/
        if (n % 2 == 0)
            return true;
        else
            return false;

        /************************************************
         * METHOD 2: Using Bitwise AND Operator (Optimized)
         * ----------------------------------------------
         * Even numbers have last bit = 0
         * Odd numbers have last bit = 1
         ************************************************/
        /*
        return (n & 1) == 0;
        */

        /************************************************
         * METHOD 3: Using Ternary Operator
         * ----------------------------------------------
         * Compact but less readable for beginners
         ************************************************/
        /*
        return (n % 2 == 0) ? true : false;
        */
    }
};

/****************************************************
 * STANDALONE MAIN FUNCTION (For Local Practice)
 * ----------------------------------------------
 * This part is NOT required by GFG,
 * but helpful for beginners to run locally.
 ****************************************************/
/*int main() {

    int n;
    cin >> n;

    Solution obj;

    if (obj.isEven(n))
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}
*/