/************************************************************
 * Problem: Print the Kth Digit
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given two numbers a and b, compute a^b and
 * return the k-th digit from the right.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FUNCTION
 ************************************************************/
class Solution {
public:
    int kthDigit(int a, int b, int k) {

        /****************************************************
         * METHOD 1: Power + Digit Extraction (RECOMMENDED)
         * --------------------------------------------------
         * 1. Compute power = a^b
         * 2. Remove (k-1) digits from right
         * 3. Return last digit
         ****************************************************/

        long long power = pow(a, b);

        // Remove k-1 digits from right
        for (int i = 1; i < k; i++) {
            power /= 10;
        }

        // k-th digit from right
        return power % 10;


        /****************************************************
         * METHOD 2: Using string (ALTERNATIVE)
         ****************************************************/
        /*
        long long power = pow(a, b);
        string s = to_string(power);
        int n = s.length();
        return s[n - k] - '0';
        */
    }
};

/************************************************************
 * STANDALONE (FOR LOCAL TESTING)
 * Not required for GFG submission
 ************************************************************/
/*
int main() {
    int a, b, k;
    cin >> a >> b >> k;

    Solution obj;
    cout << obj.kthDigit(a, b, k);
    return 0;
}
*/
