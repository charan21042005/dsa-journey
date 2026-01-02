/********************************************************
 * Problem: Learn to Comment
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given three integers a, b, and c,
 * comment the line that prints b so that
 * only a and c are printed.
 *
 * Input:
 * a b c
 *
 * Output:
 * a c
 ********************************************************/

class Solution {
public:
    void printValues(int a, int b, int c) {

        // Print value of a
        cout << a << " ";

        /************************************************
         * The line below is COMMENTED as required
         * This prevents 'b' from being printed
         ************************************************/
        // cout << b << " ";

        // Print value of c
        cout << c << " ";
    }
};
