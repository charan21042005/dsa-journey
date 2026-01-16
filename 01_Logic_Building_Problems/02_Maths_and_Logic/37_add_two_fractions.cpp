/************************************************************
 * Problem: Add Two Fractions
 * Platform: GeeksforGeeks
 *
 * Task:
 * Given two fractions (num1/den1) and (num2/den2),
 * print their sum in reduced form.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/************************************************************
 * GFG REQUIRED FUNCTION
 ************************************************************/
void addFraction(int num1, int den1, int num2, int den2) {

    /****************************************************
     * METHOD 1: Standard Fraction Addition (RECOMMENDED)
     * --------------------------------------------------
     * (a/b) + (c/d) = (a*d + c*b) / (b*d)
     ****************************************************/

    long long numerator   = 1LL * num1 * den2 + 1LL * num2 * den1;
    long long denominator = 1LL * den1 * den2;

    // Reduce the fraction
    long long g = __gcd(numerator, denominator);
    numerator   /= g;
    denominator /= g;

    // IMPORTANT: print NEW LINE after each test case
    cout << numerator << "/" << denominator << "\n";


    /****************************************************
     * METHOD 2: Using LCM (ALTERNATIVE)
     ****************************************************/
    /*
    long long lcm = (1LL * den1 * den2) / __gcd(den1, den2);

    long long numerator =
        1LL * num1 * (lcm / den1) +
        1LL * num2 * (lcm / den2);

    long long g = __gcd(numerator, lcm);
    cout << (numerator / g) << "/" << (lcm / g) << "\n";
    */


    /****************************************************
     * METHOD 3: Using struct Fraction (EDUCATIONAL)
     ****************************************************/
    /*
    struct Fraction {
        long long num, den;
    };

    Fraction f;
    f.num = numerator;
    f.den = denominator;
    */
}

/************************************************************
 * STANDALONE DRIVER CODE (FOR LOCAL PRACTICE)
 * ----------------------------------------------------------
 * ❌ NOT REQUIRED for GFG submission
 ************************************************************
int main() {
    int num1, den1, num2, den2;
    cin >> num1 >> den1 >> num2 >> den2;

    addFraction(num1, den1, num2, den2);

    return 0;
}

*/