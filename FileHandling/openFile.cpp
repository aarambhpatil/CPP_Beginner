#include <bits/stdc++.h>
using namespace std;

int main() {
    fstream file("nonexistent_file.txt", ios::in);
    string line;

    // Check if the file is opened
    // if (!file.is_open()) {
    //     cerr << "Error: Unable to open file!" << endl;
    //     return 1;
    // }

    if (!getline(file, line))
        cerr << "Error: Failed to read data" << endl;

    file.close();
    return 0;
}