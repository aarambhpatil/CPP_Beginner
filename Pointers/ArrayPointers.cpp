#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Creating a pointer to the first element
    int *ptr1 = &arr[0];
    
    // Creating another pointer to array
    // int *ptr2 = arr;

    // Add one to the pointer to move it to the next element
    int *ptr2 = arr+1;
    
    // Accessing
    cout << *ptr1 << endl;
    cout << *ptr2 << endl;
    return 0;
}