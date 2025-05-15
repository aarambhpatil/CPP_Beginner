#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
    string str;

    fstream file("fileBin.bin", ios::in | ios::binary);

    if (!file) {
        cerr << "Error opening file for reading" << endl;
        return 1;
    }

    size_t strLength;
    file.read(reinterpret_cast<char*>(&strLength), sizeof(strLength));

    char* buffer = new char[strLength + 1];
    file.read(buffer, strLength);

    buffer[strLength] = '\0';
    str = buffer;

    cout << "File Data: " << str << endl;
    delete buffer;
    file.close();

    return 0;
}