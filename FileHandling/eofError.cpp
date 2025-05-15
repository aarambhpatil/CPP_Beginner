#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream file("test.txt");

    if (!file.is_open()) {
        cerr << "Error: Unable to open file!" << endl;
        return 1;
    }
    string line;
    while (getline(file, line))
        cout << line << endl;

    // Check for eof
    if (file.eof())
        cout << "Reached end of file." << endl;
    else
        cerr << "Error: File reading failed!" << endl;

    file.close();
    return 0;
}