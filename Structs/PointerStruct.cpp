#include <iostream>
using namespace std;

struct GfG {
    int count;
    void showCount() {
        cout << count << endl;
    }
};

int main() {
    GfG gfg = {224};
    
    // Creating pointer
    GfG *sptr = &gfg;
    
    // Accessing using arrow operator
    sptr->showCount();
    return 0;
}