#include <iostream>
using namespace std;
int main() {

    int array[] = {3, 6, 9, 12, 15};

    // getting the length or size of array
    int arr_size = sizeof(array) / sizeof(array[0]);

    // NOTE: Normal for loop
    // accessing the every element of array
    for (int i = 0; i < arr_size; i++) {
        cout << array[i] << endl;
    }

    // NOTE: for each loop
    cout << "For Each Loop" << endl;

    // here element is not the index of array but actually the element of an array
    for (int element: array) {
        cout << element << endl;
    }

    return 0;
}