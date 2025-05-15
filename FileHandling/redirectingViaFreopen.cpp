#include <bits/stdc++.h>
using namespace std;
int main() {
    // Redirect standard output (stdout) to 
    // "output_freopen.txt" in write mode ("w")
    
    cout << "This should be visible in the console" << endl;

    if (freopen("output_freopen.txt", "w", stdout) == NULL) {
        cerr << "Error redirecting stdout!" << endl;
    }
    
    // Output write in the output_freopen.text file
    cout << "This output will be written to 'output_freopen.txt'" << endl;
    cout << "Another line to the file." << endl;

    return 0;
}