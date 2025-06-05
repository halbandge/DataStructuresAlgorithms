#include <iostream>
using namespace std;

/*
int main() {

    int p = 5;
    int &q = p; // it is creating reference to the memory address and value of variable where p is pointing towards

    q++;

    // even though we are incrementing value of q value of p is also incrementing
    // why because p and q are referencing to the same memory address and value 5
    cout << p << endl; // 6
    

    cout << &p << endl; # 0x5ffec4
    cout << &q << endl; # 0x5ffec4

    return 0;
}
*/

// Function that takes an integer by reference
void changeValue(int &z) {
    // 'z' is a reference to the variable passed from main
    // Any change to 'z' will also change the original variable
    z = 100;  // Set the referenced variable to 100
}

int main() {
    int a = 5;  // Declare an integer variable 'a' and initialize it to 5

    changeValue(a);  // Call the function with 'a'
                     // Since 'z' in changeValue is a reference,
                     // this will change 'a' directly to 100

    cout << a << endl;  // Output the value of 'a'
                        // It will print 100 because the function modified it

    return 0;  // Indicate successful program execution
}