#include <iostream>
using namespace std;
int main() {

    // logical and
    cout << (true and true) << endl; // 1
    cout << (true and false) << endl; // 0
    cout << (false and true) << endl; // 0
    cout << (false and false) << endl; // 0

    // logical or
    cout << (true or true) << endl; // 1
    cout << (true or false) << endl; // 1
    cout << (false or true) << endl; // 1
    cout << (false or false) << endl; // 0

    // logical not
    cout << (!true) << endl; // 0
    cout << (!false) << endl; // 1

    return 0;
}