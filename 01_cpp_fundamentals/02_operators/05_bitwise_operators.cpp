#include <iostream>
using namespace std;
int main() {
    cout << (5 << 1) << endl; // 10 -> left shift
    cout << (5 >> 1) << endl; // 2 -> right shift

    cout << (10 & 8) << endl; // bitwise AND -> 8
    cout << (10 | 8) << endl; // bitwise OR -> 10
    cout << (10 ^ 8) << endl; // bitwise XOR -> 2

    return 0;
}