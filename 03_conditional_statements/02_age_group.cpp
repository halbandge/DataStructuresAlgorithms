#include <iostream>
using namespace std;
int main() {

    int age;
    cin >> age;

    if (age < 12) {
        cout << "Child";
    } else if (age > 18) {
        cout << "Adult";
    } else {
        cout << "Teenager";
    }

    return 0;
}