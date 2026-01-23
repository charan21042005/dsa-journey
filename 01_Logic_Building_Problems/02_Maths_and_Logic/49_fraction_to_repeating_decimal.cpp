/************************************************************
 * Problem: Fraction to Repeating Decimal
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given two integers a and b, convert a/b into
 * decimal format. If the fractional part is repeating,
 * enclose the repeating part in parentheses.
 *
 * Example:
 *  a = 50, b = 22  -> "2.(27)"
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FUNCTION
 ************************************************************/
class Solution {
public:
    string calculateFraction(int a, int b) {

        /****************************************************
         * METHOD 1: Long Division with Remainder Map
         * --------------------------------------------------
         * Idea:
         * - Integer part = a / b
         * - Fractional part obtained using long division
         * - Use map to store remainder -> position
         * - If remainder repeats, insert parentheses
         *
         * Time Complexity: O(length of decimal)
         * Space Complexity: O(length of decimal)
         ****************************************************/

        // Handle exact division
        if (a % b == 0) {
            return to_string(a / b);
        }

        string result = "";

        // Integer part
        int integerPart = a / b;
        result += to_string(integerPart);
        result += ".";

        // Map to store remainder and its position in result
        unordered_map<int, int> remainderPos;

        int remainder = a % b;

        while (remainder != 0) {

            // If remainder repeats → recurring decimal
            if (remainderPos.count(remainder)) {
                int pos = remainderPos[remainder];
                result.insert(pos, "(");
                result += ")";
                break;
            }

            // Store position of this remainder
            remainderPos[remainder] = result.length();

            remainder *= 10;
            int digit = remainder / b;
            result += to_string(digit);
            remainder %= b;
        }

        return result;
    }
};

/************************************************************
 * STANDALONE (FOR LOCAL TESTING)
 * Not required for GFG submission
 ************************************************************/
/*
int main() {
    int a, b;
    cin >> a >> b;

    Solution obj;
    cout << obj.calculateFraction(a, b);
    return 0;
}
*/
