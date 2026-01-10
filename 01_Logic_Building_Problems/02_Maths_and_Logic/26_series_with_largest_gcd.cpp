/************************************************************
 * Problem: Maximize GCD Increasing Sequence
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given integers n and m, construct a strictly increasing 
 * sequence of length m such that:
 *  - Sum of elements = n
 *  - All elements are strictly increasing
 *  - GCD of the sequence is maximum
 *  - Lexicographically smallest if multiple solutions exist
 ************************************************************/
#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FORMAT
 ************************************************************/
class Solution {
  public:
    vector<int> maxGcdSeq(int n, int m) {
        /****************************************************
         * METHOD 1: GCD Divisor Approach (RECOMMENDED)
         * --------------------------------------------------
         * Key Insight:
         * - If GCD = g, then all elements must be multiples of g
         * - For strictly increasing: a[i] = g * k[i] where k[i] are distinct
         * - Minimum sum with GCD g: g * (1 + 2 + 3 + ... + m) = g * m*(m+1)/2
         * - We need: g * m*(m+1)/2 <= n and g divides n
         * - Maximum g is found by checking divisors of n in decreasing order
         *
         * Algorithm:
         * 1. Check if minimum possible sum (1+2+...+m) <= n
         * 2. Find all divisors of n
         * 3. For each divisor g (largest first), check if valid sequence exists
         * 4. Construct lexicographically smallest sequence
         *
         * Time Complexity: O(sqrt(n) + m)
         * Space Complexity: O(sqrt(n) + m)
         ****************************************************/
        
        // Check if it's possible at all
        // Minimum strictly increasing sequence: 1, 2, 3, ..., m
        long long minSum = (long long)m * (m + 1) / 2;
        if (minSum > n) {
            return {-1};
        }
        
        // Find all divisors of n
        vector<int> divisors;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisors.push_back(i);
                if (i != n / i) {
                    divisors.push_back(n / i);
                }
            }
        }
        
        // Sort divisors in decreasing order to try largest GCD first
        sort(divisors.begin(), divisors.end(), greater<int>());
        
        // Try each divisor as potential GCD
        for (int g : divisors) {
            // If GCD = g, sequence will be: g*k1, g*k2, ..., g*km
            // where k1 < k2 < ... < km (strictly increasing coefficients)
            // Sum = g * (k1 + k2 + ... + km) = n
            // So, k1 + k2 + ... + km = n/g
            
            long long requiredSum = n / g;  // Sum of coefficients needed
            long long minCoeffSum = (long long)m * (m + 1) / 2;  // Minimum: 1+2+...+m
            
            // Check if we can achieve requiredSum with m strictly increasing positive integers
            if (requiredSum >= minCoeffSum) {
                // We can construct the sequence!
                vector<int> result;
                
                // Start with base sequence: g*1, g*2, g*3, ..., g*m
                for (int i = 1; i <= m; i++) {
                    result.push_back(g * i);
                }
                
                // Current sum = g * minCoeffSum
                // Need to add: n - g * minCoeffSum to reach target n
                long long deficit = n - g * minCoeffSum;
                
                // Add deficit to last element (lexicographically smallest approach)
                // This maintains strict increasing property
                result[m - 1] += deficit;
                
                return result;
            }
        }
        
        // Should never reach here given the initial check
        return {-1};
        
        /****************************************************
         * METHOD 2: Optimized Direct Search (ALTERNATIVE)
         * --------------------------------------------------
         * Instead of finding all divisors, directly iterate
         * from maximum possible GCD downwards
         *
         * Time Complexity: O(n/minSum + m)
         * Space Complexity: O(m)
         ****************************************************/
        /*
        long long minSum = (long long)m * (m + 1) / 2;
        if (minSum > n) return {-1};
        
        // Maximum possible GCD
        int maxGcd = n / minSum;
        
        for (int g = maxGcd; g >= 1; g--) {
            if (n % g != 0) continue;
            
            long long target = n / g;
            long long base = (long long)m * (m + 1) / 2;
            
            if (target >= base) {
                vector<int> res;
                for (int i = 1; i <= m; i++) {
                    res.push_back(g * i);
                }
                res[m - 1] += g * (target - base);
                return res;
            }
        }
        
        return {-1};
        */
    }
};

/************************************************************
 * EXAMPLE WALKTHROUGH
 * --------------------------------------------------
 * Input: n = 24, m = 3
 * 
 * Step 1: Check possibility
 *   minSum = 3*4/2 = 6
 *   6 <= 24 ✓ (possible)
 * 
 * Step 2: Find divisors of 24
 *   Divisors = [1, 2, 3, 4, 6, 8, 12, 24]
 *   Sorted descending = [24, 12, 8, 6, 4, 3, 2, 1]
 * 
 * Step 3: Try g = 24
 *   requiredSum = 24/24 = 1
 *   minCoeffSum = 6
 *   1 < 6 ✗ (can't form sequence)
 * 
 * Step 4: Try g = 12
 *   requiredSum = 24/12 = 2
 *   minCoeffSum = 6
 *   2 < 6 ✗
 * 
 * Step 5: Try g = 8
 *   requiredSum = 24/8 = 3
 *   minCoeffSum = 6
 *   3 < 6 ✗
 * 
 * Step 6: Try g = 6
 *   requiredSum = 24/6 = 4
 *   minCoeffSum = 6
 *   4 < 6 ✗
 * 
 * Step 7: Try g = 4
 *   requiredSum = 24/4 = 6
 *   minCoeffSum = 6
 *   6 >= 6 ✓
 *   
 *   Base sequence: [4*1, 4*2, 4*3] = [4, 8, 12]
 *   deficit = 24 - 4*6 = 0
 *   Final sequence: [4, 8, 12]
 *   
 *   Verification:
 *   - Sum = 4 + 8 + 12 = 24 ✓
 *   - GCD(4, 8, 12) = 4 ✓
 *   - Strictly increasing ✓
 * 
 * Output: [4, 8, 12]
 * --------------------------------------------------
 * Input: n = 6, m = 4
 * 
 * Step 1: Check possibility
 *   minSum = 4*5/2 = 10
 *   10 > 6 ✗
 * 
 * Output: [-1]
 ************************************************************/