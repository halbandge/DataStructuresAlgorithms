#include <iostream>
#include <cmath>
using namespace std;
int main() {

    int radius;
    cin >> radius;

    double PI = M_1_PI;

    double circumference = 2 * PI * radius;
    double area = PI * (radius * radius);

    cout << "Circumference = " << circumference << endl;
    cout << "Area = " << area << endl;

    if (circumference >= area) {
        cout << "Circumference is the greatest" << endl;
    } else {
        cout << "Area is the greatest" << endl;
    }

    return 0;
}