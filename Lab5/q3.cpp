#include <iostream>
using namespace std;
class Doctor {
    string name;
    string specialization;
public:
    Doctor(const string& n, const string& s) : name(n), specialization(s) {}
    void printDetails() const {
        cout << "\nDoctor: " << name << "\nSpecialization: " << specialization << endl;
    }
};
class Hospital {
    string hName;
    Doctor *doctor[10];
    int doctor_count = 0;
public:
    Hospital(const string& name) : hName(name) {}
    void addDoctors(Doctor &doc) {
        if(doctor_count < 10) {
            doctor[doctor_count] = &doc;
            doctor_count++;
        }
        else {
            cout << "\nCannot add more doctors to " << hName << endl;
        }
    }
    void printStaffDetails() const {
        cout << "\nStaff Details: " << hName << endl;
        if(doctor_count == 0) 
            cout << "\nNo Doctors are currently on staff\n";
        else {
            for(int i = 0; i < doctor_count; ++i) {
                doctor[i]->printDetails();
                // cout << endl;
            }
        }
    }
};

int main() {
    Doctor doc1("Ali Khan", "Cardiologist");
    Doctor doc2("Umer", "Neurologist");
    Doctor doc3("Bilal Ahmed", "Dentist");

    Hospital H1("International Hospital");

    H1.addDoctors(doc1);
    H1.addDoctors(doc2);
    H1.addDoctors(doc3);

    H1.printStaffDetails();

    return 0;
}