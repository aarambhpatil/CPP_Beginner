#include <iostream>
#include <bitset>
#include <string>

int main() {
    int number = 0x7ffffffe;
    std::bitset<32> binary((number)); // 8 is the number of bits

    std::cout << "The binary representation of " << (number) << " is: " << binary.to_string() << std::endl;

    std::cout << "~(a) is " << ~(number) << std::endl;

    return 0;
}