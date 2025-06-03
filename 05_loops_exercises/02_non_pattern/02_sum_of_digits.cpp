#include <iostream>
using namespace std;
int main() {

    int number;
    cin >> number;

    int sum = 0;
    int digit = 0;

    while (number != 0) {
        digit = number % 10;
        number = number / 10;
        sum += digit;
    }

    cout << sum << endl;

    return 0;
}