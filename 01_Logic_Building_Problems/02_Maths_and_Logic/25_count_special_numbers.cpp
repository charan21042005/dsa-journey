/************************************************************
 * Problem: Count Special Numbers
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given an array arr[], count how many elements are
 * "special".
 *
 * A number is SPECIAL if it is divisible by
 * at least one other element in the array
 * (excluding itself index-wise).
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
public:
    int cntSpecialNum(vector<int>& arr) {

        unordered_map<int, int> freq;

        // Store frequency of each element
        for (int x : arr)
            freq[x]++;

        int count = 0;

        /****************************************************
         * METHOD 1: Frequency + Divisor Check (RECOMMENDED)
         * --------------------------------------------------
         * Logic:
         * 1) If freq[x] > 1 → x is special
         * 2) Else check if any proper divisor exists in array
         *
         * Time:  O(n * sqrt(max(arr)))
         * Space: O(n)
         ****************************************************/
        for (int x : arr) {

            bool isSpecial = false;

            // Case 1: Duplicate value
            if (freq[x] > 1) {
                isSpecial = true;
            }
            else {
                // Case 2: Check divisors
                for (int d = 1; d * d <= x; d++) {
                    if (x % d == 0) {

                        int d1 = d;
                        int d2 = x / d;

                        if (d1 != x && freq.count(d1)) {
                            isSpecial = true;
                            break;
                        }

                        if (d2 != x && freq.count(d2)) {
                            isSpecial = true;
                            break;
                        }
                    }
                }
            }

            if (isSpecial)
                count++;
        }

        return count;

        /****************************************************
         * METHOD 2: Brute Force Pair Check (NOT RECOMMENDED)
         * --------------------------------------------------
         * Check for every pair i ≠ j:
         * if arr[i] % arr[j] == 0
         *
         * Time:  O(n²)
         * Space: O(1)
         ****************************************************/
        /*
        int count = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            bool special = false;
            for (int j = 0; j < n; j++) {
                if (i != j && arr[i] % arr[j] == 0) {
                    special = true;
                    break;
                }
            }
            if (special) count++;
        }
        return count;
        */

        /****************************************************
         * METHOD 3: Using Sorted Array Optimization
         * --------------------------------------------------
         * Sort array and only check smaller numbers
         *
         * Time:  O(n log n + n * sqrt(max))
         * Space: O(n)
         ****************************************************/
        /*
        sort(arr.begin(), arr.end());
        unordered_map<int,int> freq;
        for (int x : arr) freq[x]++;

        int count = 0;
        for (int x : arr) {
            if (freq[x] > 1) {
                count++;
                continue;
            }
            for (int d = 1; d * d <= x; d++) {
                if (x % d == 0) {
                    if ((d != x && freq.count(d)) ||
                        (x/d != x && freq.count(x/d))) {
                        count++;
                        break;
                    }
                }
            }
        }
        return count;
        */

        /****************************************************
         * METHOD 4: Using Sieve-like Marking (ADVANCED)
         * --------------------------------------------------
         * Mark multiples using frequency array
         * Faster when constraints are large
         *
         * Time:  O(M log M)
         * Space: O(M)
         ****************************************************/
        /*
        int maxVal = *max_element(arr.begin(), arr.end());
        vector<int> cnt(maxVal + 1, 0);

        for (int x : arr) cnt[x]++;

        vector<bool> special(maxVal + 1, false);

        for (int i = 1; i <= maxVal; i++) {
            if (cnt[i] > 0) {
                for (int j = i; j <= maxVal; j += i) {
                    if (j != i && cnt[j] > 0)
                        special[j] = true;
                }
                if (cnt[i] > 1)
                    special[i] = true;
            }
        }

        int ans = 0;
        for (int x : arr)
            if (special[x]) ans++;

        return ans;
        */
    }
};
