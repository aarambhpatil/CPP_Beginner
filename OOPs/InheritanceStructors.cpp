#include <iostream>
using namespace std;

class Parent {
public:

    // base class constructor
    Parent() { cout << "Inside base class" << endl; }
};

// sub class
class Child : public Parent {
public:

    // sub class constructor
    Child() { cout << "Inside sub class" << endl; }
};

int main() {

    // creating object of sub class
    Child obj;
    return 0;
}