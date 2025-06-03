#include <iostream>
using namespace std;
int main() {

    int number;
    cin >> number;

    int factorial = 1;
    for (int i = 1; i <= number; i++) {

        // less optimised
        // for (int j = i; j >= i; j--) {
        //     factorial = factorial * i;
        //     cout << "factorial of " << i << " is " << factorial << endl;
        // }

        // little more optimised
        factorial *= i;
        cout << "Fact of " << i << " is " << factorial << endl;
    }

    return 0;
}