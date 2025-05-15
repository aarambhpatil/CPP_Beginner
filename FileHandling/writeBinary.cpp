#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    string str = "Welcome to GeeksForGeeks";

    // Open a binary file for writing
    ofstream file("fileBin.bin", ios::binary);

    // Check if the file is open
    if (!file) {
        cerr << "Error opening the file for writing.";
        return 1;
    }

    // Write the length of the string (size) to file first
    size_t strLength = str.length();
    file.write(reinterpret_cast<const char*>(&strLength),
        sizeof(strLength));

    // Write the string to the binary file
    file.write(str.c_str(), strLength);

    // Close the file
    file.close();

    

    return 0;
}
