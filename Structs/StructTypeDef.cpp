#include <iostream>
using namespace std;

typedef struct GeeksforGeeks {
    int x, y;
    
// Alias is specified here
} GfG;

int main() {
    
    // Using alias
    GfG s = { 0, 1 };
    cout << s.x << " " << s.y << endl;
    return 0;
}