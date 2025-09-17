#include <iostream>
using namespace std;

class Vehicle {
public:
    string make;
    string model;

    void displayInfo() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
    }
};
class Car : public Vehicle {
public:
    string engineType;

    void displayInfo() {
        Vehicle :: displayInfo();
        cout << "Engine Type: " << engineType << endl;
    }
};
int main() {
    Car c1;
    c1.make = "Toyota";
    c1.model = "Corolla";
    c1.engineType = "Hybrid";
    c1.displayInfo();
    return 0;
}