/********************************************************
 * Problem: The New Line
 * Platform: GeeksforGeeks + Local Practice
 *
 * Task:
 * Print each word of "Geeks for Geeks" in a new line
 *
 * Expected Output:
 * Geeks
 * for
 * Geeks
 ********************************************************/

#include <iostream>
using namespace std;

/* =====================================================
   ✅ GEEKSFORGEEKS VERSION
   -----------------------------------------------------
   - Do NOT write main()
   - GFG already handles input/output internally
   - Just print the required output
   ===================================================== */

void printNewLine() {

    // Print first word and move to next line
    cout << "Geeks" << endl;

    // Print second word and move to next line
    cout << "for" << endl;

    // Print third word (last line)
    cout << "Geeks" << endl;
}

/* =====================================================
   ✅ REGULAR C++ VERSION (FOR LOCAL PRACTICE)
   -----------------------------------------------------
   - Uncomment main() to run locally
   - Comment it before submitting on GFG
   ===================================================== */

/*
int main() {

    // Calling the function to print output
    printNewLine();

    // Program executed successfully
    return 0;
}
*/
