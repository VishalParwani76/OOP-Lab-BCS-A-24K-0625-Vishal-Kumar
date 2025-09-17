#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    double marks;
    char grade;
public:
    Student(string s, int r, double m) {
        name = s;
        rollNo = r;
        marks = m;
    }
    void calculateGrade() {
        if(marks >= 90) grade = 'A';
        else if(marks >= 80) grade = 'B';
        else if(marks >= 70) grade = 'C';
        else grade = 'F';
    }

    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};
int main() {
    Student s1("Ali", 004, 85), s2("Ahmed", 005, 77);
    s1.calculateGrade();
    s2.calculateGrade();
    s1.displayStudentInfo();
    s2.displayStudentInfo();
    return 0;
}