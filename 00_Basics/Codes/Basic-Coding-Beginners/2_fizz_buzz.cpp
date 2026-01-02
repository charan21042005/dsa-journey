/*
---------------------------------------------------------
FizzBuzz Program
---------------------------------------------------------

This problem is solved in two formats:

1) GeeksforGeeks platform format (ACTIVE)
2) Normal C++ program format (for understanding)
---------------------------------------------------------
*/

// ==========================
// GeeksforGeeks Solution
// ==========================

#include <iostream>
using namespace std;

class Solution {
public:
    void fizzBuzz(int n) {
        for (int i = 1; i <= n; i++) {

            if (i % 3 == 0 && i % 5 == 0) {
                cout << "FizzBuzz ";
            }
            else if (i % 3 == 0) {
                cout << "Fizz ";
            }
            else if (i % 5 == 0) {
                cout << "Buzz ";
            }
            else {
                cout << i << " ";
            }
        }
    }
};

/*
====================================
Normal C++ Program (For Understanding)
====================================

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "FizzBuzz ";
        else if (i % 3 == 0)
            cout << "Fizz ";
        else if (i % 5 == 0)
            cout << "Buzz ";
        else
            cout << i << " ";
    }

    return 0;
}
*/
