#include <iostream>
using namespace std;

// Function f1() that throws an int exception
void f1() {
    cout << "f1() Start \n";
    
    // Throw the exception
    throw 100;
    cout << "f1() End \n";
}

// Function f2() that calls f1()
void f2() {
    cout << "f2() Start \n";
    f1();
    cout << "f2() End \n";
}

// Function f3() that calls f2() and handles
// exception thrown by f1()
void f3() {
    cout << "f3() Start \n";
    try {
        f2();
    }
    catch (int i) {
        cout << "Caught Exception: " << i << "\n";
    }
    cout << "f3() End \n";
}

int main() {
    f3();
    return 0;
}