#include <bits/stdc++.h>
using namespace std;

void func() {
    
    // Create a unique_ptr that 
    // manages dynamic memory
    unique_ptr<int> data(new int(10));
    
    cout << "Resource allocated: " << *data << endl;

    // Throw the exception 
    throw runtime_error("An error occurred");
}

int main() {
    try {
        
        // Call the function that 
        // may throw an exception
        func();
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}