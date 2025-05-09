#include <iostream>
using namespace std;

void modifyValue(int &x) {
    x = 20;  
}

int& getMax(int &a, int &b) {
    return (a > b) ? a : b;  
}

int main() {
    int x = 10;
    int y = 25;

    // ref is a reference to x.
    int& ref = x;

    // printing value using ref
    cout << ref << endl;
    
    // Changing the value and printing again
    ref = 22;
    cout << ref << endl;

    modifyValue(ref);
    cout<< ref << endl;

    int &maxVal = getMax(x, y);

    cout << maxVal << endl;

    return 0;
}