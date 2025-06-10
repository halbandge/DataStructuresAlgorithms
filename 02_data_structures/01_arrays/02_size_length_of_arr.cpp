#include <iostream>
using namespace std;
int main() {

    int array[] = {2, 4, 6, 8, 10};

    // to know the size of array
    cout << "Size of array is " << sizeof(array) << endl;

    // to know the length of array
    cout << "Length of array is " << sizeof(array)/sizeof(array[0]) << endl;
    
    return 0;
}