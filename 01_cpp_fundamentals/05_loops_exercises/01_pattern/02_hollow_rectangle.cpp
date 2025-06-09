/*

TODO: Print pattern

******
*    *
*    *
******

where row = 4 col = 6 and inputs will be given by the user
*/

#include <iostream>
using namespace std;
int main() {

    int row, col;
    cin >> row >> col;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            if (i == 1 || j == 1 || i == row || j == col) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}