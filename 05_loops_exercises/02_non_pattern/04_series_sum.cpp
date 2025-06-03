#include <iostream>
using namespace std;
int main() {

    int number;
    cin >> number;

    /*
    n = 5
    series = 1 -2 + 3 -4 + 5
    sum = 3

    n = 6
    series = 1 -2 + 3 -4 + 5 -6
    sum = -3
    */

    int sum = 0;
    for (int i = 1; i <= number; i++) {
        if (i % 2 != 0) {
            sum += i;
        } else {
            sum -= i;
        }
    }

    cout << sum << endl;
    return 0;
}