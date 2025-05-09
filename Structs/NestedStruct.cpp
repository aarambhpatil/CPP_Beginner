#include <iostream>
using namespace std;

// Define inner structure
struct inner {
    int a, b;
};

// Define the outer structure that 
// contains inner structure
struct outer {
    
    // Nested structure
    inner in; 
    int x, y;
};

// Alternate way to define the same structure

struct outerAlt {
    
    // Nested structure
    struct innerAlt{
        int a, b;
    }inAlt;
    int x, y;
};

int main() {
    
    outer obj = {{1, 2}, 10, 20};
    cout << "Inner: " << obj.in.a << " "
    << obj.in.b << endl;
    cout << "Outer: " << obj.x << " "
    << obj.y << endl;

    outerAlt obj2 = {{3, 4}, 30, 40};
    cout << "Inner: " << obj2.inAlt.a << " "
    << obj2.inAlt.b << endl;
    cout << "Outer: " << obj2.x << " "
    << obj2.y << endl;

    return 0;
}