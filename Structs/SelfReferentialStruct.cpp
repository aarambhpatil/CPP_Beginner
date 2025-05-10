#include <iostream>
using namespace std;

// Self referential structures
struct GfG {
    int val;
    // Pointer to same type
    GfG *next;
};

int main() {
    GfG gfg = {224};
    cout << &gfg.next << endl;
    return 0;
}