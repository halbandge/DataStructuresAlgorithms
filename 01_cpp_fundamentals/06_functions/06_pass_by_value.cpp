#include <iostream>
using namespace std;

// This function takes an integer 'z' as a parameter.
// Since 'z' is passed by value, a copy of the original variable is made.
// Any changes to 'z' inside this function will NOT affect the original variable.
void changeValue(int z) {
    z = 100;  // Change is made to the copy, not the original variable.
    return;
}

int main() {
    int a = 5;  // Original variable 'a' is initialized with value 5.

    changeValue(a);  // 'a' is passed to the function by value (i.e., a copy of 'a' is passed).

    // Since the function only modifies a copy, the original variable 'a' remains unchanged.
    cout << a << endl;  // Output will be 5, not 100.

    return 0;
}