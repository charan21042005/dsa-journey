/************************************************************
 * Problem: Decimal to Binary
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given a decimal number n, compute its binary equivalent.
 *
 * Example:
 * Input:  n = 7
 * Output: 111
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    string decimalToBinary(int n) {

        /****************************************************
         * METHOD 1: Repeated Division (RECOMMENDED)
         * --------------------------------------------------
         * Divide n by 2 repeatedly and store remainders
         *
         * Time Complexity: O(log n)
         * Space Complexity: O(log n)
         ****************************************************/
        if (n == 0)
            return "0";

        string binary = "";

        while (n > 0) {
            binary.push_back((n % 2) + '0');
            n /= 2;
        }

        reverse(binary.begin(), binary.end());
        return binary;


        /****************************************************
         * METHOD 2: Using bitset (STL)
         * --------------------------------------------------
         * Fixed size binary representation
         ****************************************************/
        /*
        bitset<32> b(n);
        string s = b.to_string();

        // Remove leading zeros
        int pos = s.find('1');
        return (pos == string::npos) ? "0" : s.substr(pos);
        */


        /****************************************************
         * METHOD 3: Recursive Approach (Educational)
         * --------------------------------------------------
         * Not preferred due to recursion overhead
         ****************************************************/
        /*
        if (n == 0) return "0";
        return decimalToBinary(n / 2) + char('0' + (n % 2));
        */
    }
};

/************************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * Not required for GFG submission
 ************************************************************
int main() {
    int n;
    cin >> n;

    Solution obj;
    cout << obj.decimalToBinary(n);

    return 0;
}
*/