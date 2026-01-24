/************************************************************
 * Problem: nPr
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given integers n and r, compute nPr.
 * nPr = n! / (n - r)!
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FUNCTION
 ************************************************************/
class Solution {
  public:
    long long nPr(int n, int r) {

        // If r > n, permutation is not possible
        if (r > n) return 0;

        long long result = 1;

        // nPr = n * (n-1) * ... * (n-r+1)
        for (int i = 0; i < r; i++) {
            result *= (n - i);
        }

        return result;
    }
};

/************************************************************
 * STANDALONE VERSION (For Local Testing)
 ************************************************************/
/*
int main() {
    int n, r;
    cin >> n >> r;

    Solution obj;
    cout << obj.nPr(n, r) << endl;

    return 0;
}
*/
