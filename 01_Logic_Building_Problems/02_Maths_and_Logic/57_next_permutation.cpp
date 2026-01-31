/************************************************************
 * Problem: Next Permutation
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an array representing a permutation,
 * rearrange it into the lexicographically next
 * greater permutation.
 *
 * If no such permutation exists, rearrange it
 * into the lowest possible order (sorted ascending).
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
  public:
    void nextPermutation(vector<int>& arr) {

        /****************************************************
         * METHOD 1: Optimal In-Place Algorithm (RECOMMENDED)
         * --------------------------------------------------
         * Steps:
         * 1. Find the first index i from right such that
         *    arr[i] < arr[i+1]
         * 2. If no such index exists, reverse entire array
         * 3. Find index j from right such that arr[j] > arr[i]
         * 4. Swap arr[i] and arr[j]
         * 5. Reverse subarray from i+1 to end
         *
         * Time Complexity: O(n)
         * Space Complexity: O(1)
         ****************************************************/

        int n = arr.size();
        int idx = -1;

        // Step 1: Find the break point
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                idx = i;
                break;
            }
        }

        // Step 2: If no next permutation exists
        if (idx == -1) {
            reverse(arr.begin(), arr.end());
            return;
        }

        // Step 3: Find element just greater than arr[idx]
        for (int j = n - 1; j > idx; j--) {
            if (arr[j] > arr[idx]) {
                swap(arr[j], arr[idx]);
                break;
            }
        }

        // Step 4: Reverse the remaining suffix
        reverse(arr.begin() + idx + 1, arr.end());
    }
};

/************************************************************
 * METHOD 2: Using STL (NOT ALLOWED IN GFG SUBMISSION)
 * --------------------------------------------------
 * next_permutation(arr.begin(), arr.end());
 ************************************************************/

/************************************************************
 * METHOD 3: Brute Force (NOT PRACTICAL)
 * --------------------------------------------------
 * Generate all permutations, sort them,
 * and find the next one.
 * Time: O(n! * n)
 ************************************************************/

/************************************************************
 * STANDALONE VERSION (FOR LOCAL PRACTICE)
 * ---------------------------------------
 * Uncomment main() for local testing
 ************************************************************/
/*
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    obj.nextPermutation(arr);

    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
*/
