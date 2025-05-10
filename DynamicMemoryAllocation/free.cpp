#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
    int *ptr = (int *)calloc(sizeof(int), 5);
    
    // Do some operations.....
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);
        
    printf("\n");;
    // Free the memory after completing
    // operations
    free(ptr);
    cout << ptr << endl;
    ptr = NULL;
    cout << ptr << endl;
    
    return 0;
}