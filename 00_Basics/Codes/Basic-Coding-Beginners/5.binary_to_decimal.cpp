/********************************************************
 * Problem: Binary Number to Decimal Number
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given a binary number in string format,
 * convert it to its decimal equivalent.
 *
 * Example:
 * Input:  "1010"
 * Output: 10
 ********************************************************/

class Solution {
public:
    int binaryToDecimal(string &b) {

        int decimalValue = 0;

        /****************************************************
         * METHOD 1: Left-to-Right Multiplication Method
         * --------------------------------------------------
         * Most recommended approach
         * Formula:
         * decimal = decimal * 2 + current_bit
         *
         * Time Complexity: O(n)
         * Space Complexity: O(1)
         ****************************************************/
        /*
        for(char bit : b) {
            decimalValue = decimalValue * 2;
            decimalValue += (bit - '0'); // convert char to int
        }
        return decimalValue;
        */

        /****************************************************
         * METHOD 2: Right-to-Left Power of 2 Method
         * --------------------------------------------------
         * Uses positional value (2^i)
         *
         * Time Complexity: O(n)
         * Space Complexity: O(1)
         ****************************************************/
        /*
        int power = 1; // represents 2^0 initially

        for(int i = b.length() - 1; i >= 0; i--) {
            if(b[i] == '1') {
                decimalValue += power;
            }
            power *= 2;
        }
        return decimalValue;
        */

        /****************************************************
         * METHOD 3: Using C++ Built-in Function (stoi)
         * --------------------------------------------------
         * Simple but not recommended in interviews
         ****************************************************/
        /*
        return stoi(b, nullptr, 2);
        */

        /****************************************************
         * ACTIVE METHOD (Chosen)
         * --------------------------------------------------
         * Using Left-to-Right Multiplication
         ****************************************************/
        for(char bit : b) {
            decimalValue = decimalValue * 2 + (bit - '0');
        }

        return decimalValue;
    }
};
