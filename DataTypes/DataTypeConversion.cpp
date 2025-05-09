#include <iostream>

using namespace std;

int main() {
    int n = 3;
    int k = 126;
    char c = 'C';
    int sum = n + c;
    cout << (int)c << endl;
    cout << sum << endl;
    cout << (char)k << endl;
    for (int i = 0; i < 128; i++){
        cout<<"For int "<< i << " ASCII is " << (char)i <<endl;
    }
    return 0;
}