#include <iostream>
using namespace std;

int returnValueFunction(int n) {
    return n * 2;
}

int main() {
    int n;
    cin >> n;
    cout << returnValueFunction(n) << endl;
    return 0;
}
