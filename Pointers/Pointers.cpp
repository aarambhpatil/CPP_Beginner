#include <iostream>

using namespace std;

int val = 22;
int * ptr = & val;

int main(){

    // Null Pointer generally initialized to have a target less pointer
    int *ptr = NULL;

    // cout<<val<<endl;
    // cout<<ptr<<endl;
    // return 0;

    int a = 10;
    int b = 99;

    ptr = &a;
    cout << *ptr << endl;
    
    // Changing the address stored
    ptr = &b;
    cout << ptr << endl;
}