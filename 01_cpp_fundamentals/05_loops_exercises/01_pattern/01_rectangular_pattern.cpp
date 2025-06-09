/*

TODO: Print

******
******
******

where input is given for row and col
in this example row = 3 col = 6
*/

#include <iostream>
using namespace std;
int main() {

    int row, col;
    cin >> row >> col;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}