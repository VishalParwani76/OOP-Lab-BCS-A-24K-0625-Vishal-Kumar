#include <iostream>
using namespace std;
class Kitchen{
    double area;
    bool hasOven;
public:
    Kitchen(double area, bool hasOven) : area(area), hasOven(hasOven) {}
    void display() {
        cout << "Area of kitchen: " << area << endl;
        cout << "Has an Oven?: " << hasOven << endl;
    }
};
class Apartment {
    const int apartmentID;
    string apartmentOwner;
    Kitchen kitchen;
public:
    Apartment(int id, string owner, double area, bool hasOven) : apartmentID(id), apartmentOwner(owner), kitchen(area, hasOven) {}
};
int main() {

    return 0;
}