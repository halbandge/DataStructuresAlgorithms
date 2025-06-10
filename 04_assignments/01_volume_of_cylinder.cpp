#include <iostream>
const double PI = 3.141592653589793;

using namespace std;
int main() {

    double height;
    cout << "Enter the height of cylinder: ";
    cin >> height;

    double radius;
    cout << "Enter the radius of cylinder: ";
    cin >> radius;

    double volume = PI * (radius * radius) * height;
    cout << "The volume of cylinder = " << volume << endl;
    return 0;
}