#include <iostream>
using namespace std;

int add (int num1, int num2) { // function definition with parameters
    return num1 + num2;
}

int add (int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

double add (double num1, double num2) {
    return num1 + num2;
}

int main() {

    int x = 5;
    int y = 6;

    cout << add(x, y) << endl; // 11
    cout << add(10, 20) << endl; // 30
    cout << add(x, y, 10) << endl; // 2nd function is called over here -> 21
    cout << add(10.0, 423.45) << endl; // 3rd function is called over here -> 433.45

    return 0;
}