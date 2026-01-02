/********************************************************
 * Problem: Swap The Numbers
 * Platform: GeeksforGeeks + Local Practice
 *
 * Task:
 * Given two numbers a and b, swap their values
 * so that a becomes b and b becomes a.
 *
 * Input:
 * a b
 *
 * Output:
 * a b (after swapping)
 ********************************************************/

#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    /****************************************************
     * METHOD 1: Using a Temporary Variable (RECOMMENDED)
     * --------------------------------------------------
     * Most readable, safest, and commonly used method
     ****************************************************/
    /*
    int temp = a;  // store value of a
    a = b;         // assign b to a
    b = temp;      // assign old a to b
    */

    /****************************************************
     * METHOD 2: Without Using Temporary Variable (Addition/Subtraction)
     * --------------------------------------------------
     * Be careful with overflow for large values
     ****************************************************/
    /*
    a = a + b;
    b = a - b;
    a = a - b;
    */

    /****************************************************
     * METHOD 3: Without Using Temporary Variable (Multiplication/Division)
     * --------------------------------------------------
     * Works only when a and b are non-zero
     ****************************************************/
    /*
    a = a * b;
    b = a / b;
    a = a / b;
    */

    /****************************************************
     * METHOD 4: Using XOR Bitwise Operator
     * --------------------------------------------------
     * Efficient and avoids overflow
     ****************************************************/
    /*
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    */

    /****************************************************
     * METHOD 5: Using C++ Standard Library (swap function)
     * --------------------------------------------------
     * Cleanest and preferred in real-world C++
     ****************************************************/
    swap(a, b);

    // Print swapped values
    cout << a << " " << b << endl;

    return 0;
}
