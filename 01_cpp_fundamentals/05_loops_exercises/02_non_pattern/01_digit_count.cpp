#include <iostream>
using namespace std;
int main() {

    int number;
    cin >> number;

    int count = 0;
    while (number != 0) {
        number = number / 10;
        count += 1;
    }

    cout << count << endl;

    return 0;
}