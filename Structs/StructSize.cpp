#include <iostream>
using namespace std;
struct GfG {
    // 4 from char, 8 from 2 ints
    // Total of 12 bytes
    char c;
    int x, y;
};

int main() {
    
    // Finding the size
    cout << sizeof(GfG) << endl;
    
    return 0;
}