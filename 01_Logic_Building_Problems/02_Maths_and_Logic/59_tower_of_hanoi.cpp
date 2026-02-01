/************************************************************
 * Problem: Tower of Hanoi
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given n disks on a source rod, move all disks to
 * the destination rod using an auxiliary rod,
 * following Tower of Hanoi rules.
 *
 * Return the minimum number of moves required.
 *
 * Rules:
 * 1. Only one disk can be moved at a time.
 * 2. A disk can only be placed on a larger disk or empty rod.
 *
 * Mathematical Insight:
 * Minimum moves = 2^n - 1
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {

        /****************************************************
         * METHOD 1: Pure Recursion (CLASSIC APPROACH)
         * --------------------------------------------------
         * Recurrence Relation:
         * T(n) = 2*T(n-1) + 1
         *
         * Base Case:
         * n == 0 → 0 moves
         *
         * This method directly follows the problem statement.
         *
         * Time Complexity: O(2^n)
         * Space Complexity: O(n) (recursion stack)
         ****************************************************/

        if (n == 0)
            return 0;

        int moves1 = towerOfHanoi(n - 1, from, aux, to);
        int moves2 = 1; // Move largest disk
        int moves3 = towerOfHanoi(n - 1, aux, to, from);

        return moves1 + moves2 + moves3;
    }
};

/************************************************************
 * METHOD 2: Mathematical Formula (OPTIMAL)
 * --------------------------------------------------
 * Observation:
 * Minimum number of moves required for n disks is:
 *
 *      moves = 2^n - 1
 *
 * This avoids recursion entirely.
 *
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 ************************************************************/
/*
class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        return (1 << n) - 1;   // 2^n - 1
    }
};
*/

/************************************************************
 * METHOD 3: Iterative using Bit Manipulation (ADVANCED)
 * --------------------------------------------------
 * Uses binary representation of move numbers.
 * Rarely required for GFG, but good for theory.
 *
 * Time Complexity: O(2^n)
 * Space Complexity: O(1)
 ************************************************************/

/************************************************************
 * STANDALONE VERSION (FOR LOCAL TESTING)
 * --------------------------------------
 * Uncomment main() for local execution
 ************************************************************/
/*
int main() {
    int n;
    cin >> n;

    Solution obj;
    cout << obj.towerOfHanoi(n, 1, 3, 2) << endl;

    return 0;
}
*/
