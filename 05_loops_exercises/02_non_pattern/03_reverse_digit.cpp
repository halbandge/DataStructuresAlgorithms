#include <iostream>
using namespace std;
int main() {

    int number;
    cin >> number;

    int digit = 0;
    int reverse_digit = 0;

    while (number != 0) {
        digit = number % 10;
        number = number / 10;
        reverse_digit = reverse_digit * 10 + digit;
    }

    cout << reverse_digit << endl;

    return 0;
}