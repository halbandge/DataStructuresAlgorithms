#include <iostream>
using namespace std;
int main() {
    
    int i = 1;
    do {
        cout << i << endl; // 1
        i++;
    } while (false);

    cout << "The value of i is " << i << endl; // 2
    return 0;
}