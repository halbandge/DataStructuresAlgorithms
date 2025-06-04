#include <iostream>
using namespace std;
int main() {

    // take the input from the user: user input has to be in decimal
    int number;
    cin >> number;
    int backup_number = number;

    int parity_digit = 0;
    int decimal_value = 0;
    int final_decimal_value = 0;
    int count = 0;

    while (number != 0) {
        parity_digit = number % 2;
        number = number / 2;
        // cout << "Number = " << number << endl;
        // cout << "Parity Digit = " << parity_digit << endl;
        decimal_value = parity_digit * pow(10, count);
        final_decimal_value += decimal_value;
        count += 1;
    }

    // cout << final_decimal_value << endl;
    cout << "Binary value of " << backup_number << " is " << final_decimal_value << endl;

    return 0;
}