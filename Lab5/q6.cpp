#include <iostream>
using namespace std;
class Employee {
    static int count;
    string name;
public:
    Employee (const string& name) : name(name) {
        count++;
    }
    void printDetails() {
        cout << "Name Of Employee: " << name << endl;
    }
    static void strength() {
        cout << "The total company strength: " << count << endl;
    }
};
class ClientProject {
    string projectName;
    Employee *employee[10];
    int size = 0;
public:
    ClientProject (const string& pName) : projectName(pName) {}
    void assignedEmployees(Employee& emp) {
        if(size < 10) {
            employee[size] = &emp;
            size++;
        }
    }
    void printAllDetails() {
        if(size == 0) 
            cout << "\nNo employees are assigned to this project" << endl;
        else {
            for(int i = 0; i < size; ++i) {
                employee[i]->printDetails();
                cout << endl;
            }
        }
    }
};
int Employee :: count = 0;

int main() {
    Employee emp1("Ali");
    Employee emp2("Ahmed");
    Employee emp3("Umer");
    ClientProject p1("E-Commerce Platform");
    
    p1.assignedEmployees(emp1);
    p1.assignedEmployees(emp2);
    p1.assignedEmployees(emp3);
    
    p1.printAllDetails();

    Employee :: strength();

    return 0;
}