/************************************************************
 * Problem: Largest Prime Factor
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given a number n, find its largest prime factor.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FUNCTION
 ************************************************************/
class Solution {
  public:
    int largestPrimeFactor(int n) {

        /****************************************************
         * METHOD 1: Trial Division (RECOMMENDED)
         ****************************************************/
        int largest = -1;

        // Remove factor 2
        while (n % 2 == 0) {
            largest = 2;
            n /= 2;
        }

        // Check odd factors
        for (int i = 3; i * 1LL * i <= n; i += 2) {
            while (n % i == 0) {
                largest = i;
                n /= i;
            }
        }

        // If n is still > 1, it is a prime factor
        if (n > 1)
            largest = n;

        return largest;
    }
};

/*
int main() {
    int n;
    cin >> n;
    cout << largestPrimeFactor(n) << endl;
    return 0;
}
*/