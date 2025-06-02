#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int temp; // using third variable for storing the value of first number and assigning it back to second number variable

    cout << "Before Swapping:" << endl;
    cout << "number 1: " << num1 << endl;
    cout << "number 2: " << num2 << endl;

    cout << "After Swapping:" << endl;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "number 1: " << num1 << endl;
    cout << "number 2: " << num2 << endl;

    return 0;
}