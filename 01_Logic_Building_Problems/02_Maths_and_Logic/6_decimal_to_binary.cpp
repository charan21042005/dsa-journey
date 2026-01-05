/********************************************************
 * Problem: Decimal to Binary
 * Platform: GeeksforGeeks
 *
 * Task:
 * Convert a given decimal number into its binary form
 * and print it.
 ********************************************************/

#include <iostream>
using namespace std;

// User function Template for C++
void toBinary(int n) {

    /****************************************************
     * METHOD 1: Using Division by 2 (RECOMMENDED)
     * --------------------------------------------------
     * Classic approach
     * Works for all positive integers
     ****************************************************/
    if (n == 0) {
        cout << 0;
        return;
    }

    string binary = "";

    while (n > 0) {
        binary = char('0' + (n % 2)) + binary;
        n /= 2;
    }

    cout << binary;

    /****************************************************
     * METHOD 2: Using Bitwise Operator (Alternative)
     * --------------------------------------------------
     * Uses right shift and AND
     ****************************************************/
    /*
    if (n == 0) {
        cout << 0;
        return;
    }

    string binary = "";
    while (n > 0) {
        binary = char('0' + (n & 1)) + binary;
        n >>= 1;
    }
    cout << binary;
    */

    /****************************************************
     * METHOD 3: Using Recursion (Conceptual)
     * --------------------------------------------------
     * Good for understanding recursion
     ****************************************************/
    /*
    if (n == 0) return;
    toBinary(n / 2);
    cout << (n % 2);
    */
}

/***************** LOCAL TESTING *****************
int main() {
    int n;
    cin >> n;

    toBinary(n);
    return 0;
}
*/