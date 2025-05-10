#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
    
    Complex(int r, int i) : real(r), imag(i) {}

    // Overloading the '+' operator
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    Complex operator-(const Complex& obj){
        return Complex(real - obj.real, imag - obj.imag);
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);
    
    // Adding c1 and c2 using + operator
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    cout << c3.real << " + " << c3.imag  << "i"<< endl;
    cout << c4.real << " - " << c4.imag  << "i"<< endl;
    return 0;
}