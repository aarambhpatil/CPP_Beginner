#include <iostream>
using namespace std;

// Creating a union
union geek {
    int age;
    char grade;
    float GPA;
    double marks;
};

int main() {

    // Defining a union variable
    union geek student1;

    // Assigning values to data member of union geek and
    // printing the values of data members
    student1.age = 25;
    cout << student1.age << endl;
    student1.grade = 'B';
    cout << student1.grade << endl;
    student1.GPA = 4.5;
    cout <<  student1.GPA << endl;
    cout << student1.grade << endl;
    cout <<  student1.GPA << endl;

    geek g;

    cout << sizeof(g) << endl;
    
    // Printing size of all members
    cout << sizeof(g.age) << endl;
    cout << sizeof(g.grade) << endl;
    cout << sizeof(g.GPA) << endl;
    cout << sizeof(g.marks) << endl;
    return 0;
}