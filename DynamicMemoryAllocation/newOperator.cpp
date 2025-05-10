#include <bits/stdc++.h>
using namespace std;

int main() {

    // Declared a pointer to store
    // the address of the allocated memory
    int *nptr;
    cout << nptr << endl;
    
    // Allocate and initialize memory
    // nptr = new int(10);

    // Allocates Array to the memory
    nptr = new int[5]{1, 2, 3, 4, 5};

    // Print the value
    cout << *nptr << endl;

    for (int i = 0; i < 5; i++)
        cout << nptr[i] << " ";

    // Print the address of memory
    // block
    cout << endl << nptr << endl;
    return 0;
}