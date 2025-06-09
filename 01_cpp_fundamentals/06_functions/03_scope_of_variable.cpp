#include <iostream>
using namespace std;

void print() {
    int new_var = 50; // this variable is only accessible inside the print function
}

int main() {
    int apples = 5; // this variable is accessible inside the main function
    cout << apples << endl;

    int p = 5;
    cout << "The value of p is " << p << endl; // 5

    // we can have same variable name in the different scope 
    // but we cant have same variable in the same scope
    while (true) {
        float p = 6.7;
        cout << "The value of p is " << p << endl; // 6.7
        break;
    }

    cout << "The value of p is " << p << endl; // 5

    return 0;
}