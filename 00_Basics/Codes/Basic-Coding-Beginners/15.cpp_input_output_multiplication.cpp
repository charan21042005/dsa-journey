/********************************************************
 * Problem: C++ Input / Output (Multiplication)
 * Platform: GeeksforGeeks + Local Practice
 *
 * Task:
 * Given two integers A and B, return their product.
 *
 * Input:
 * A B
 *
 * Output:
 * A * B
 ********************************************************/

#include <iostream>
using namespace std;

int multiplication(int A, int B) {

    /****************************************************
     * METHOD 1: Direct Multiplication (RECOMMENDED)
     ****************************************************/
    return A * B;

    /****************************************************
     * METHOD 2: Repeated Addition
     ****************************************************/
    /*
    int result = 0;
    for (int i = 0; i < B; i++) {
        result += A;
    }
    return result;
    */

    /****************************************************
     * METHOD 3: Using Temporary Variable
     ****************************************************/
    /*
    int product = A * B;
    return product;
    */
}

int main() {
    int A, B;
    cin >> A >> B;

    cout << multiplication(A, B) << endl;

    return 0;
}
