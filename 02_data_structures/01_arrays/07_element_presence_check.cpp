#include <iostream>
using namespace std;
int main() {

    // TODO: Check the key is present inside the array element or not
    // if not present return -1
    // if present return the index of the element 
    int key;
    cin >> key;

    int array[] = {3, 9, 18, 11, 7};

    int index = 0;
    int counter = 0;
    for (int element: array) {
        index++;
        if (key == element) {
            cout << "Element found, Index = " << index << endl;
            break;
        } else {
            counter++;
        }
        if (counter == (sizeof(array) / sizeof(array[0]))) {
        cout << "Element not found, Index = -1" << endl;
        }
    }
    
    return 0;
}