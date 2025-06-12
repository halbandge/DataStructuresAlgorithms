#include <iostream>
using namespace std;
int main() {

    // TODO: Get the input sides of triangle and check whether triangle is equilateral, scalene or isosceles
    int side1, side2, side3;
    cin >> side1 >> side2 >> side3;

    if (side1 == side2 and side1 == side3 and side2 == side3) {
        cout << "Equilateral" << endl;
    } else if (side1 != side2 and side2 != side3 and side1 != side3) {
        cout << "Scalene" << endl;
    } else {
        cout << "Isosceles" << endl;
    }
   
    return 0;
}