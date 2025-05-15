#include <bits/stdc++.h>
using namespace std;

int main() {
    fstream file;
    
    // Open file for reading
    file.open("writeFile.txt", ios::in);
    string line;

    // Backup the original streambuf of cin
    streambuf* cin_buffer = cin.rdbuf();

    // Get the streambuf of the file
    streambuf* file_buffer = file.rdbuf();

    // Redirect cin to the file
    cin.rdbuf(file_buffer);

    // Now cin will read from 
    // "wFile.txt" instead of keyboard
    getline(cin, line);
    
    // Print the file string
    cout << line << endl;

    // Set cin's buffer back 
    // to the original console buffer
    cin.rdbuf(cin_buffer);
    file.close();
    return 0;
}
