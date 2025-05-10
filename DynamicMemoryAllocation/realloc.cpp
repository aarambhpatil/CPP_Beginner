#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));

    cout << ptr << endl;

    // Resize the memory block to hold 10 integers
    // ptr = (int *)realloc(ptr, 10 * sizeof(int));

    // Exception handling
    int *temp = (int *)realloc(ptr, 10 * sizeof(int));
    if (temp == NULL)
        printf("Memory reallocation failed");
    else
        ptr = temp;
    
    // Check for allocation failure
    if (ptr == NULL) {
        printf("Memory Reallocation Failed");
        exit(0);
    }

    cout << ptr << endl;

    return 0;
}