/************************************************************
 * Problem: Power Set (All Possible Non-Empty Subsequences)
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given a string s, find all possible non-empty
 * subsequences of the string in lexicographically
 * sorted order.
 *
 * Constraints:
 * 1 <= |s| <= 16
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED CLASS
 ************************************************************/
class Solution {
  public:
    vector<string> AllPossibleStrings(string s) {

        /****************************************************
         * METHOD 1: Bit Masking (RECOMMENDED)
         * --------------------------------------------------
         * For a string of length n:
         * Total subsequences = 2^n
         * Each number from 1 to (2^n - 1) represents
         * a subsequence using binary representation.
         *
         * Time Complexity: O(n * 2^n)
         * Space Complexity: O(2^n)
         ****************************************************/

        int n = s.length();
        vector<string> result;

        // Iterate over all possible masks except 0 (empty)
        for (int mask = 1; mask < (1 << n); mask++) {
            string temp = "";

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    temp.push_back(s[i]);
                }
            }

            result.push_back(temp);
        }

        // Lexicographically sort the result
        sort(result.begin(), result.end());
        return result;


        /****************************************************
         * METHOD 2: Recursion (ALTERNATIVE)
         * --------------------------------------------------
         * Backtracking approach: include / exclude character
         ****************************************************/
        /*
        vector<string> res;
        string curr;

        function<void(int)> solve = [&](int idx) {
            if (idx == s.size()) {
                if (!curr.empty())
                    res.push_back(curr);
                return;
            }

            // Exclude
            solve(idx + 1);

            // Include
            curr.push_back(s[idx]);
            solve(idx + 1);
            curr.pop_back();
        };

        solve(0);
        sort(res.begin(), res.end());
        return res;
        */
    }
};

/************************************************************
 * STANDALONE VERSION (FOR LOCAL TESTING)
 ************************************************************
int main() {
    string s;
    cin >> s;

    Solution obj;
    vector<string> ans = obj.AllPossibleStrings(s);

    for (auto &str : ans) {
        cout << str << " ";
    }
    cout << "\n";

    return 0;
}
*/