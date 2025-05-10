#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {

    // int *ptr = (int *)calloc(5, sizeof(int));
    int *ptr = (int *)calloc(5, sizeof(int));

    if (ptr == NULL) {
        printf("Allocation Failed\n");
        exit(0);
    }

    // Populate the array
    for (int i = 0; i < 5; i++)
        ptr[i] = i + 1;
        
    // Print the array
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);
    printf("\n");

    cout << ptr << endl;
    cout << sizeof(ptr) << endl;

    return 0;
}