#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 7;
    vector<int> v = {1, 2, 3};

    // try {
    //     if (x % 2 != 0) {
            
    //         // Throwing int
    //         throw -1;
    //     }
    // }
    
    // // Catching int
    // catch (int e) {
    //     cout << "Exception Caught: " << e << endl;
    // }

    try {
        // Accessing out of bound element
        v.at(10);
    }
    catch (out_of_range e) {
        cout << "Caught: " << e.what() <<endl;
    }

    return 0;
}