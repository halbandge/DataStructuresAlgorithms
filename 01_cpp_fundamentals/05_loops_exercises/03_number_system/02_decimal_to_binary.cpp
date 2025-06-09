#include <iostream>     // For input/output operations
#include <cmath>        // For using the pow() function
using namespace std;

int main() {

    // Take input from user: input must be a decimal number
    int number;
    cin >> number;

    int backup_number = number; // Store original number to display at the end

    int parity_digit = 0;       // To store the remainder (0 or 1) when dividing by 2
    int decimal_value = 0;      // To hold the place value in binary (e.g., 1000, 10, etc.)
    int final_decimal_value = 0;// To accumulate the final binary result (in integer form)
    int count = 0;              // To track the binary digit's position (as power of 10)

    // Process: Convert decimal to binary
    while (number != 0) {
        parity_digit = number % 2;      // Get remainder (0 or 1) - the binary digit
        number = number / 2;            // Divide number by 2 to get next bit

        // Convert the binary digit to correct decimal position (e.g., 1 at 10's place = 10)
        decimal_value = parity_digit * pow(10, count);

        // Accumulate to form the final binary number in integer format
        final_decimal_value += decimal_value;

        count += 1;  // Move to the next binary digit position (ones, tens, hundreds, etc.)
    }

    // Output the final result
    cout << "Binary value of " << backup_number << " is " << final_decimal_value << endl;

    return 0;  // End program
}
