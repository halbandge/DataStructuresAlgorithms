#include <iostream>
using namespace std;
int main() {

    int number;
    cin >> number;

    int sum = 0;
    int i = 1;
    while (i <= number) {
        sum += i;
        i++;
    }

    cout << "The sum of " << number << " natural numbers is " << sum;

    return 0;
}