#include <bits/stdc++.h>
using namespace std;

// Create an own custom class for
// exception handling
// class CustomExcept : public exception {
// class CustomExcept : public runtime_error {
class CustomExcept {
    
private:
    string message;

public:
    
    // Override what() function
    // const char* what() const noexcept override {
    //     return "This is a custom exception!";
    // }

    // CustomExcept(const string& message)
    //     : runtime_error(message) {}

    CustomExcept(const string& msg) : message(msg) {}
    
    // Handle custom exception using
    // what() method.
    const char* what() const {
        return message.c_str();
    }
};

int main() {
    try {
        
        // Throwing our custom exception
        // throw CustomExcept();
        throw CustomExcept(
            "This is a custom runtime_exception!"
        );
    }
    catch (const CustomExcept& e) {
        // cout << "Caught an exception: " << e.what() << endl;
        cout << e.what() << endl;
    }
    return 0;
}