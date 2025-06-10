#include <iostream>
using namespace std;
int main() {

    char ch1, ch2;
    cout << "Provide the input for char1: ";
    cin >> ch1;

    cout << "Provide the input for char2: ";
    cin >> ch2;

    int difference = (int)ch1 - (int)ch2;
    cout << "The difference between " << ch1 << " and " << ch2 << " = " << difference << endl;
    return 0;
}