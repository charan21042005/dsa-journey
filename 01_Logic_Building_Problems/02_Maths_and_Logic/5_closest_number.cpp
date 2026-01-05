/********************************************************
 * Problem: Closest Number
 * Platform: GeeksforGeeks
 ********************************************************/

#include <iostream>
#include <cmath>
using namespace std;

class Solution {
  public:
    int closestNumber(int n, int m) {

        int absM = abs(m);

        // Remainder based approach (SAFE for negatives)
        int rem = n % absM;

        int lower = n - rem;
        int upper;

        if (rem == 0) {
            return lower;
        }

        if (n > 0)
            upper = lower + absM;
        else
            upper = lower - absM;

        int diffLower = abs(n - lower);
        int diffUpper = abs(n - upper);

        if (diffLower < diffUpper)
            return lower;
        else if (diffUpper < diffLower)
            return upper;
        else
            return (abs(lower) > abs(upper)) ? lower : upper;
    }
};

/***************** LOCAL TESTING *****************
int main() {
    int n, m;
    cin >> n >> m;

    Solution obj;
    cout << obj.closestNumber(n, m);

    return 0;
}
*/