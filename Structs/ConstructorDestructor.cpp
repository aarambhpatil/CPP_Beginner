#include <iostream>
using namespace std;

// Class like structure
struct Point {
private:
    int x, y;
public:

    // Constructors
    Point(int a = 1, int b = 1) {
        x = a;
        y = b;
    }
    
    // Member function
    void show() {
        cout << x << " " << y << endl;
    }
    
    // Destructor
    ~Point() {
        cout << "Destroyed Point Variable" << endl;
    }
};

int main() {
    
    // Creating Point variables using constructors
    Point s1;
    Point s2(99, 1001);

    s1.show();
    s2.show();
    s1.show();

    return 0;
}