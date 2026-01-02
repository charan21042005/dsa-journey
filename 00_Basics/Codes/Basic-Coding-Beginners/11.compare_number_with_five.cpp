/********************************************************
 * Problem: C++ if-else (Decision Making)
 * Platform: GeeksforGeeks + Local Practice
 *
 * Task:
 * Given an integer n:
 *  - Print "Greater than 5" if n > 5
 *  - Print "Less than 5" if n < 5
 *  - Print "Equal to 5" if n == 5
 *
 * Note:
 * - No newline after output (as per GFG)
 *
 * Concepts Used:
 * - if-else ladder
 * - ternary operator
 * - logical comparisons
 ********************************************************/

#include <iostream>
using namespace std;

/****************************************************
 * GFG FORMAT
 * --------------------------------------------------
 * Only this class + function is evaluated on GFG
 ****************************************************/
class Solution {
public:
    string compareFive(int n) {

        /****************************************************
         * METHOD 1: Simple if-else ladder (RECOMMENDED)
         * --------------------------------------------------
         * Most readable and beginner-friendly approach
         ****************************************************/
        if (n > 5) {
            return "Greater than 5";
        }
        else if (n < 5) {
            return "Less than 5";
        }
        else {
            return "Equal to 5";
        }

        /****************************************************
         * METHOD 2: Using Ternary Operator
         * --------------------------------------------------
         * Compact but less readable for beginners
         ****************************************************/
        /*
        return (n > 5) ? "Greater than 5" :
               (n < 5) ? "Less than 5" :
                         "Equal to 5";
        */

        /****************************************************
         * METHOD 3: Using Separate Comparisons
         * --------------------------------------------------
         * Explicit logic, helps understand flow
         ****************************************************/
        /*
        if (n == 5) return "Equal to 5";
        if (n > 5) return "Greater than 5";
        return "Less than 5";
        */
    }
};

/****************************************************
 * FULL STANDALONE PROGRAM
 * --------------------------------------------------
 * For local execution & understanding
 * NOT required for GFG submission
 ****************************************************/
int main() {
    int n;
    cin >> n;

    Solution obj;
    cout << obj.compareFive(n);

    return 0;
}
