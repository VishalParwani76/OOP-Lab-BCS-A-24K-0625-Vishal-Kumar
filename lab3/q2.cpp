#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;
public: 
    string name;
    void setRollNo(int rn) {
        rollNumber = rn;
    }
    int getRollNo() {
        cout << "\nStudent's roll number: "<< rollNumber;
        return rollNumber;
    }
};
int main() {
    Student s1;
    s1.name = "Ali";
    s1.setRollNo(004);
    cout << "\nStudent's name: "<< s1.name;
    s1.getRollNo();
    return 0;
}