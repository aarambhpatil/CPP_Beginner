#include <iostream>
using namespace std;

// Defining enum
enum direction {
    EAST, NORTH, WEST, SOUTH
};

enum fruit {
    APPLE, BANANA = 5, ORANGE
};

enum class Day { Sunday = 1, Monday, Tuesday,
                Wednesday, Thursday, Friday, 
                Saturday };

int main() {

    // Creating enum variable
    direction dir = NORTH;
    cout << dir << endl;

    fruit f = BANANA;
    cout << f << endl;
    
    // Changing the value
    f = ORANGE;
    cout << f << endl;

    Day today = Day::Thursday;
    cout << static_cast<int>(today) << endl;
    cout << int(today) << endl;

    // Compilation Error
    // Day today = Thursday;

    return 0;
}