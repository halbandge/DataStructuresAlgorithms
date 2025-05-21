#include <iostream>
using namespace std;
int main() {

    // sizeof operator -> tells the size of variable
    int num = 4;
    char ch = 'X';
    bool flag = true;
    cout << sizeof(num) << endl; // 4
    cout << sizeof(ch) << endl; // 1
    cout << sizeof(flag) << endl; // 1

    // pre-increment vs post increment
    int a = 6;
    cout << (a++) << endl; // 6 -> The value of the variable is incremented first, and then the incremented value is used in the expression.

    int b = 6;
    cout << (++b) << endl; // 7 -> The value of the variable is incremented first, and then the incremented value is used in the expression.
    return 0;

}