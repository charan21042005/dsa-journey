/********************************************************
 * Problem: Type Conversion
 * Platform: GeeksforGeeks + Local Practice
 *
 * Task:
 * Given a double value d, typecast it to an integer
 * and print the integer value.
 *
 * Example:
 * Input:  d = 10.23
 * Output: 10
 *
 * Concept Used:
 * - Type Casting (double → int)
 ********************************************************/

#include <iostream>
using namespace std;

/****************************************************
 * FULL STANDALONE PROGRAM
 * --------------------------------------------------
 * For local execution & understanding
 * NOT required for GFG submission
 ****************************************************/
int main() {

    double d;
    cin >> d;

    /****************************************************
     * METHOD 1: Explicit Type Casting (RECOMMENDED)
     * --------------------------------------------------
     * Most clear and commonly used method
     ****************************************************/
    int result = (int)d;
    cout << result;

    /****************************************************
     * METHOD 2: Using static_cast (Modern C++)
     * --------------------------------------------------
     * Safer and preferred in professional C++ code
     ****************************************************/
    /*
    int result = static_cast<int>(d);
    cout << result;
    */

    /****************************************************
     * METHOD 3: Implicit Conversion (NOT recommended)
     * --------------------------------------------------
     * Happens automatically but reduces readability
     ****************************************************/
    /*
    int result = d;
    cout << result;
    */

    return 0;
}
