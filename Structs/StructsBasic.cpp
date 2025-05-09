#include <iostream>
using namespace std;
struct Point {
    int x, y;

    // The following is a member function
    int sum(){
        return x + y;
    }
};

int main() {
    struct Point p = { 0, 1 };
    
    // Accessing members
    cout << p.x << " ";
    cout << p.y << endl;
    
    // Updating members
    p.x = 99;

    // Accessing members again
    cout << p.x << " ";
    cout << p.y << endl;
    
    cout << p.sum() << endl;

    return 0;
}