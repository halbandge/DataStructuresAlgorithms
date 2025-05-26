#include <iostream>
using namespace std;
int main() {

    // TODO: Print the first multiple of 5 which is also multiple of 7
    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0 && i % 7 == 0) {
            cout << i << endl;
            break;
        }
    }
}