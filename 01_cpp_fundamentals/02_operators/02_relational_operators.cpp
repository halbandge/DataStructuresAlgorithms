#include <iostream>
using namespace std;
int main() {
    int num1 = 6;
    int num2 = 3;

    cout << (num1 == num2) << endl; // 0
    cout << (num1 != num2) << endl; // 1
    cout << (num1 >= num2) << endl; // 1
    cout << (num1 > num2) << endl; // 1
    cout << (num1 <= num2) << endl; // 0
    cout << (num1 < num2) << endl; // 0
    return 0;
}