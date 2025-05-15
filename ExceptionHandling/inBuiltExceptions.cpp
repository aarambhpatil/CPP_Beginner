#include <bits/stdc++.h>
using namespace std;

int main() {
    try {
        
        // Try allocating a huge block of memory
        int* bigArray = new int[100000000000000];  
        
    } catch (const bad_alloc& e) {
        cout << "Caught bad_alloc: " << e.what() << endl;
    }
    
    int num = 10;
    int den = 0;
    int res;

    try {
        if (!den) {
            throw runtime_error("Division by Zero");
        }
        res = num/den;
    }
    catch (const runtime_error& e) {
        cout << "Caught: " << e.what() << endl;
    }

    return 0;
}