#include <bits/stdc++.h>
using namespace std;

int main() {
    try {
        throw runtime_error("This is runtime exception");
    }
    
    // Catching by value
    catch (exception& e) {
        cout << "Caught: " << e.what() << endl;
    }

    return 0;
}