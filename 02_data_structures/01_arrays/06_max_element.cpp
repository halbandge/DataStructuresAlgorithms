#include <iostream>
using namespace std;
int main() {

    int array[] = {3, 7, 18, 9, 11};

    int max_element = array[0];

    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
        if (array[i] >= max_element) {
            max_element = array[i];
        }
    }

    cout << "The max element = " << max_element << endl;

    return 0;
}