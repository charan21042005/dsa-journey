/************************************************************
 * Problem: Check Perfect Square
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given a positive integer N, check whether it is
 * a perfect square or not.
 *
 * Note:
 * One approach must use only addition and subtraction.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED CLASS
 ************************************************************/
class Solution {
  public:
    int checkPerfectSquare(int N) {

        /****************************************************
         * METHOD 1: Sum of Odd Numbers (RECOMMENDED by GFG)
         * --------------------------------------------------
         * Perfect squares can be written as:
         * 1  = 1
         * 4  = 1 + 3
         * 9  = 1 + 3 + 5
         * 16 = 1 + 3 + 5 + 7
         *
         * Keep subtracting consecutive odd numbers.
         ****************************************************/

        int odd = 1;
        int temp = N;

        while (temp > 0) {
            temp -= odd;
            odd += 2;
        }

        return (temp == 0) ? 1 : 0;


        /****************************************************
         * METHOD 2: Using sqrt() (NOT allowed by constraint)
         * --------------------------------------------------
         * Simple and fast, but violates problem hint.
         ****************************************************/
        /*
        int root = sqrt(N);
        return (root * root == N) ? 1 : 0;
        */


        /****************************************************
         * METHOD 3: Binary Search
         * --------------------------------------------------
         * Works for large numbers efficiently.
         ****************************************************/
        /*
        long long low = 1, high = N;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long sq = mid * mid;

            if (sq == N) return 1;
            else if (sq < N) low = mid + 1;
            else high = mid - 1;
        }

        return 0;
        */


        /****************************************************
         * METHOD 4: Brute Force
         * --------------------------------------------------
         * Check all i where i*i <= N
         ****************************************************/
        /*
        for (long long i = 1; i * i <= N; i++) {
            if (i * i == N)
                return 1;
        }
        return 0;
        */
    }
};

/************************************************************
 * STANDALONE VERSION (For Local Testing)
 ************************************************************
int main() {
    int N;
    cin >> N;

    Solution obj;
    cout << obj.checkPerfectSquare(N) << endl;

    return 0;
}
*/