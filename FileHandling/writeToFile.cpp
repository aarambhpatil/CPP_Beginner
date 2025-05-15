#include <bits/stdc++.h>
using namespace std;

int main() {

    // Open a file
    ofstream writetofile("test.txt");
    string s;

    // Write the string to the file
    writetofile << "This file was written using CPP";
    writetofile.close();

    ifstream openfile("test.txt");

    // openfile  >> s;
    // cout << "Read String: " << s << endl;

    getline(openfile, s);
    cout << "Read String New: " << s << endl;

    return 0;
}