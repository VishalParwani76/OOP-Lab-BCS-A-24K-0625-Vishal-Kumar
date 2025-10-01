#include <iostream>
using namespace std;
class NUCES_Student {
    int id;
    string name;
public:
    NUCES_Student () {
        id = 0;
        name = "Not Registered";
    }
    NUCES_Student (int i) {
        id = i;
        name = "Name Pending";
    }
    NUCES_Student (int id, string name) {
        this->id = id;
        this->name = name;
    }
    void display () {
        cout << "\nID: " << id << "\nName: " << name << endl;
    }
};
int main() {
    NUCES_Student s1, s2(625);
    s1.display();
    s2.display();
    return 0;
}