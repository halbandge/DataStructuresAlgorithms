#include <iostream>
using namespace std;
int main() {

    int arr[5];
    int length = sizeof(arr) / sizeof(arr[0]);

    // taking input from the user for every element of an array
    for (int i = 0; i < length; i++) {
        // int element;
        // cin >> element;
        // arr[i] = element;
        cin >> arr[i];
    }

    // to showcase the user inputted array
    cout << "The array elements are " << endl;
    for (int element: arr) {
        cout << element << endl;
    }

    return 0;
}