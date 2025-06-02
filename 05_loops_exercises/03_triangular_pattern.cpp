/*

ToPrint:

*
**
***
****

where input is given by user. in this example input is n = 4
*/

#include <iostream>
using namespace std;
int main() {
    int row;
    cin >> row;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}