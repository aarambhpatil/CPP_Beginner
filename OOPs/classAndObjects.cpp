#include <bits/stdc++.h>
using namespace std;

// Creating a class
class GfG {
public:

    // Data member
    int val;
    static int val2;

    GfG() {
        cout << "Constructor called!" << endl;
    }

    static void printHello(); 
    
    // Member function
    void show() {
        cout << "Value: " << val << endl;
    }

    ~GfG() {
        cout << "Destructor called!" << endl;
    }
    
};

void GfG::printHello() {
    cout << "Hello World" << endl;
}

int GfG::val2 = 22;

int main() {
    
    // Create Object
    GfG obj;
    
    // Access data member and assign
    // it some value
    obj.val = 10;
    
    // Access member method
    obj.show();

    cout << GfG::val2 << endl;
    GfG::printHello();

    return 0;
}