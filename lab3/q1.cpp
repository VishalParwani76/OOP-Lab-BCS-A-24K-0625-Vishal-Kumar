#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
};

int main() {
    Student s1;
    s1.name = "Ali";
    s1.rollNumber = 001;

    cout << "\nStudent's name: "<< s1.name;
    cout << "\nStudent's roll number: "<< s1.rollNumber;
    return 0;
}