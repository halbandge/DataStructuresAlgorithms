#include <iostream>     // For input and output
#include <cmath>        // For using the pow() function
using namespace std;

int main() {

    // Prompt user to enter a binary number (in decimal digit form, e.g., 1011)
    int number;
    cin >> number;

    int backup_number = number;  // Store the original input for final display

    int last_digit = 0;          // To store the last digit of the binary number
    int count = 0;               // To track the power of 2 (bit position)
    int binary_val = 0;          // To hold the result of each binary digit conversion
    int final_binary_val = 0;    // To accumulate the final decimal value

    // Loop through each digit of the binary number
    while (number != 0) {
        last_digit = number % 10;        // Get the last digit (rightmost bit)
        number = number / 10;            // Remove the last digit from the number
        binary_val = last_digit * pow(2, count); // Convert binary digit to decimal value
        final_binary_val += binary_val;  // Add it to the final decimal value
        count++;                         // Move to the next higher bit position
    }

    // Display the result
    cout << "Binary Value of " << backup_number << " is " << final_binary_val << endl;

    return 0;  // Successful program execution
}