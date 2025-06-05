#include <iostream>     // Include the input-output stream
using namespace std;

// Function declaration with default parameters:
// b has a default value of 1
// c has a default value of 2
int add(int a, int b = 1, int c = 2) {
    return (a + b + c);  // Returns the sum of a, b, and c
}

int main() {

    cout << add(2) << endl;         
    // Only one argument passed (a = 2)
    // b and c use default values: b = 1, c = 2
    // So, result = 2 + 1 + 2 = 5

    cout << add(2, 2) << endl;
    // Two arguments passed (a = 2, b = 2)
    // c uses default value: c = 2
    // So, result = 2 + 2 + 2 = 6

    cout << add(2, 2, 3) << endl;
    // All three arguments passed explicitly (a = 2, b = 2, c = 3)
    // No default values used
    // So, result = 2 + 2 + 3 = 7

    return 0;  // Indicate successful program execution
}