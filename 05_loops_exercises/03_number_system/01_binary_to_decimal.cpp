#include <iostream>
#include <cmath>
using namespace std;
int main() {

    // give input in decimal form
    int number;
    cin >> number;
    int backup_number = number;

    int last_digit = 0;
    int count = 0;
    int binary_val = 0;
    int final_binary_val = 0;

    while (number != 0) {
        last_digit = number % 10;
        number = number / 10;
        binary_val = last_digit * pow(2, count);
        final_binary_val += binary_val;
        count++;
    }

    cout << "Binary Value of " << backup_number << " is " << final_binary_val << endl;

    return 0;
}