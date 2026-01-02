/*******************************************************
 * Problem: FizzBuzz
 * Platform: GeeksforGeeks + Local Practice
 *
 * Rules:
 * - Print "FizzBuzz" if number divisible by 3 and 5
 * - Print "Fizz" if divisible by 3
 * - Print "Buzz" if divisible by 5
 * - Else print the number itself
 *******************************************************/

#include <iostream>
using namespace std;

/* =====================================================
   ✅ GEEKSFORGEEKS VERSION
   -----------------------------------------------------
   - DO NOT write main()
   - GFG already provides main() internally
   - Use ONLY this function while submitting on GFG
   ===================================================== */

void fizzBuzz(int number) {

    // Check divisibility by both 3 and 5 first
    if (number % 3 == 0 && number % 5 == 0) {
        cout << "FizzBuzz" << endl;
    }
    // Check divisibility by 3
    else if (number % 3 == 0) {
        cout << "Fizz" << endl;
    }
    // Check divisibility by 5
    else if (number % 5 == 0) {
        cout << "Buzz" << endl;
    }
    // If none of the above conditions are true
    else {
        cout << number << endl;
    }
}

/* =====================================================
   ✅ REGULAR C++ VERSION (FOR LOCAL PRACTICE)
   -----------------------------------------------------
   - Uncomment main() below to run locally
   - Comment out this main() before GFG submission
   ===================================================== */

/*
int main() {

    int number;

    // Taking input from user
    cout << "Enter a number: ";
    cin >> number;

    // Calling the fizzBuzz function
    fizzBuzz(number);

    // Program executed successfully
    return 0;
}
*/
