/********************************************************
 * Problem: Find element at a given Index
 * Platform: GeeksforGeeks + Local Practice
 *
 * Task:
 * Given an integer array arr and an index key (0-based),
 * return the element present at arr[key].
 *
 * Constraints:
 * 0 <= key < arr.size()
 *
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 ********************************************************/

#include <iostream>
#include <vector>
using namespace std;

/********************************************************
 * GEEKSFORGEEKS REQUIRED FORMAT
 * ------------------------------------------------------
 * Only this function is evaluated on GFG
 ********************************************************/
class Solution {
public:
    int findElementAtIndex(int key, vector<int> &arr) {

        /************************************************
         * METHOD 1: Direct Index Access (BEST & EXPECTED)
         * ----------------------------------------------
         * Arrays/Vectors support O(1) access using index
         ************************************************/
        return arr[key];

        /************************************************
         * METHOD 2: Using Loop (Educational Purpose)
         * ------------------------------------------
         * Not needed, but shows traversal logic
         ************************************************/
        /*
        for (int i = 0; i < arr.size(); i++) {
            if (i == key) {
                return arr[i];
            }
        }
        */

        /************************************************
         * METHOD 3: Using Iterator
         * ------------------------------------------
         * Access element using iterator arithmetic
         ************************************************/
        /*
        auto it = arr.begin();
        advance(it, key);
        return *it;
        */
    }
};

/********************************************************
 * FULL STANDALONE PROGRAM (FOR LOCAL PRACTICE)
 * ------------------------------------------------------
 * This part is NOT required for GFG submission
 ********************************************************/
/*
int main() {

    int key;
    cin >> key;

    vector<int> arr = {10, 20, 30, 40, 50};

    // Access element at given index
    cout << arr[key] << endl;

    return 0;
}
*/
