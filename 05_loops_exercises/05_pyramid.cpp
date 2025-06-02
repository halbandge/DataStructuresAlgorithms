/*

ToPrint:

   *
  ***
 *****
*******

where input is given by the user. over here input = 4
*/

#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // print spaces
        for (int space = n - i; space >= 1; space--) {
            cout << " ";
        }

        // print stars
        for (int star = 1; star <= ((2 * i) - 1); star++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}