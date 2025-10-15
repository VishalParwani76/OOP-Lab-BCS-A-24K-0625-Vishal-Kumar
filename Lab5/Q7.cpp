#include <iostream>
using namespace std;
class ClassSchedule {
    string day;
    string date;
public:
    ClassSchedule(const string& day, const string& date) : day(day), date(date) {}

    void print() const {
        cout << "Day: " << day << endl << "Date: " << date << endl;
    }
};
class Student {
    string name;
    const int enrollmentID;
public:
    Student(const string& name, const int id) : name(name), enrollmentID(id) {}
    void printStudentDetails() const {
        cout << "Name: " << name << endl << "Enrollment ID: " << enrollmentID << endl << endl;
    }
};
class CourseSection {
    string section_name;
    static int section_count;
    Student* student[20];
    ClassSchedule schedule;
    int student_count = 0;
public:
    CourseSection(const string& name, const string& day, const string& date) : section_name(name), schedule(day, date) {
        section_count++;
    }
    void addStudent (Student& s) {
        if(student_count < 20) {
            student[student_count] = &s;
            student_count++;
        }
    }
    void printDetails() const {
        schedule.print();
        if(student_count == 0)
            cout << "No student enrolled" << endl;
        else {
            for(int i = 0; i < student_count; ++i) {
                student[i]->printStudentDetails();
            }
        }
    }
    static void printTotalSections() {
        cout << "\nTotal Sections: " << section_count << endl << endl;
    }
};
int CourseSection :: section_count = 0;
int main() {
    CourseSection::printTotalSections();

    Student s1("Ali", 240724);
    Student s2("Ahmed", 240352);

    CourseSection oop("BCS-3A", "Thursday", "16-Oct-2025");
    CourseSection LA("BCS-3B", "Friday", "17-Oct-2025");

    oop.addStudent(s1);
    LA.addStudent(s2);

    oop.printDetails();
    LA.printDetails();
    
    CourseSection :: printTotalSections();

    return 0;
}