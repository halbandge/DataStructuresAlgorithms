#include <iostream>
using namespace std;
int main() {

    int array[] = {2, 5, 7, 432, 234, 2000};

    int sum = 0;
    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
        sum += array[i];
    }

    cout << "The sum of all elements in array = " << sum << endl;

    return 0;
}