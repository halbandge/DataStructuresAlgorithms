#include <iostream>
using namespace std;

int global_variable = 50; // this is global variable i.e. it can used anywhere in the program inside any block or function

void printSomething() {
    cout << global_variable << endl; // 50
    global_variable = 20;
    int local_variable = 70; // local variable as it is present inside some block of code or function
    cout << "Global variable inside function = " << global_variable << endl; // 20
    return;
}

// NOTE: Local variable takes more precedence than the global variable
int main() {
    cout << global_variable << endl; // 50

    printSomething(); // this will print first 50 and then 20

    cout << global_variable << endl; // 20 since it is global variable it can be used anywhere so if we change its value somewhere else the global variable value will change as well

    return 0;
}