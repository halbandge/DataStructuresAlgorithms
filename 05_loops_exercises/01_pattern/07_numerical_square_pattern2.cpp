/*

ToPrint:

123456
123456
123456
123456

input is given by the user. over here input here is 4 and 6
*/

#include <iostream>
using namespace std;
int main() {

    int limit, rows;
    cin >> limit >> rows;

    for (int i = 1; i <= rows; i++) {

        for (int j = 1; j <= limit; j++) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}