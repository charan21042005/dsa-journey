/********************************************************
 * Problem: Check Prime
 * Platform: GeeksforGeeks + Local Practice
 *
 * Task:
 * Given an integer n, check whether it is a prime number.
 *
 * A prime number is divisible only by 1 and itself.
 *
 * Input:
 * n (integer)
 *
 * Output:
 * true  -> if n is prime
 * false -> if n is not prime
 ********************************************************/

/****************************************************
 * GFG FUNCTION FORMAT
 * --------------------------------------------------
 * Only this function is evaluated on GeeksforGeeks
 ****************************************************/
bool prime(int n) {

    /****************************************************
     * EDGE CASE HANDLING
     * --------------------------------------------------
     * 0 and 1 are NOT prime numbers
     ****************************************************/
    if (n <= 1)
        return false;

    /****************************************************
     * METHOD 1: Optimized Loop till √n (RECOMMENDED)
     * --------------------------------------------------
     * If n has a factor greater than √n,
     * it must also have one smaller than √n
     ****************************************************/
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;   // Found a divisor → Not prime
    }

    return true;  // No divisors found → Prime
}

/****************************************************
 * ALTERNATIVE METHODS (FOR LEARNING PURPOSE)
 * --------------------------------------------------
 * Uncomment any ONE method if needed
 ****************************************************/

/*
-----------------------------------------------------
METHOD 2: Brute Force (Check till n-1)
-----------------------------------------------------
bool prime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
*/

/*
-----------------------------------------------------
METHOD 3: Using sqrt() function
-----------------------------------------------------
#include <cmath>

bool prime(int n) {
    if (n <= 1) return false;

    int limit = sqrt(n);
    for (int i = 2; i <= limit; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
*/

/****************************************************
 * FULL STANDALONE PROGRAM (LOCAL PRACTICE)
 * --------------------------------------------------
 * NOT required for GFG submission
 ****************************************************/
/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (prime(n))
        cout << "True";
    else
        cout << "False";

    return 0;
}
*/
