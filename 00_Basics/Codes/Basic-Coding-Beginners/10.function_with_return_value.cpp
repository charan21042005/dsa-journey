/********************************************************
 * Problem: Function With Return Value
 * Platform: GeeksforGeeks + Local Practice
 *
 * Task:
 * Given an integer n, return double the value of n
 * using a function that returns a value.
 *
 * Example:
 * Input:  n = 2
 * Output: 4
 *
 * Concept Tested:
 * - Functions
 * - Return statement
 ********************************************************/

#include <iostream>
using namespace std;

/********************************************************
 * GEEKSFORGEEKS REQUIRED FORMAT
 * ------------------------------------------------------
 * Only this function is evaluated on GFG
 ********************************************************/
class Solution {
public:
    int returnValueFunction(int n) {

        /************************************************
         * METHOD 1: Direct Multiplication (RECOMMENDED)
         * ----------------------------------------------
         * Simple, readable, and efficient
         ************************************************/
        return n * 2;

        /************************************************
         * METHOD 2: Using Addition
         * ----------------------------------------------
         * Shows that multiplication is repeated addition
         ************************************************/
        /*
        return n + n;
        */

        /************************************************
         * METHOD 3: Using Bitwise Left Shift
         * ----------------------------------------------
         * n << 1 is equivalent to n * 2
         * Useful for low-level understanding
         ************************************************/
        /*
        return n << 1;
        */

        /************************************************
         * METHOD 4: Using Temporary Variable
         * ----------------------------------------------
         * Explicit steps for beginners
         ************************************************/
        /*
        int result = n * 2;
        return result;
        */
    }
};

/********************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ------------------------------------------------------
 * This part is NOT required for GFG submission
 ********************************************************/
/*
int returnValueFunction(int n) {
    return n * 2;
}

int main() {

    int n;
    cin >> n;

    // Call function and print returned value
    cout << returnValueFunction(n) << endl;

    return 0;
}
*/
