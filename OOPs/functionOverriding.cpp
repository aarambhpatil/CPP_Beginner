#include <bits/stdc++.h>
using namespace std;

class Base {
public:

    // Virtual function
    virtual void display () {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base {
public:

    // Overriding the base class function
    virtual void display() {
        cout << "Derived class function" << endl;
    }
};

int main() {
    
    // Creating a pointer of type Base
    Base* basePtr;
    
    // Creating an object of Derived class
    Derived derivedObj;

    // Pointing base class pointer to 
    // derived class object
    basePtr = &derivedObj;
    
    // Calling the display function 
    // using base class pointer
    basePtr->display();
    return 0;
}