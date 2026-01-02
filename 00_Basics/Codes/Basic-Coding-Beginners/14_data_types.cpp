/*
Educational version for GitHub
Shows what GFG checks internally
*/

#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    int a;
    float b;
    double c;
    long long d;

    if ((typeid(a) == typeid(int)) &&
        (typeid(b) == typeid(float)) &&
        (typeid(c) == typeid(double)) &&
        (typeid(d) == typeid(long long)))
    {
        cout << "verified"; // lowercase
    }

    return 0;
}

