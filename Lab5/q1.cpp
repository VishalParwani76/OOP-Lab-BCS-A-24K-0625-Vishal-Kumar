#include <iostream>
using namespace std;
class PetrolPump {
    static double pricePerLiter;
    int pumpID;
    double litersFilled;
public:
    PetrolPump(int id, double filled) {
        pumpID = id;
        litersFilled = filled;
    }
    void printReceipt() const {
        cout << "ID: " << pumpID << endl;
        cout << "Liters Filled: " << litersFilled << endl;
        cout << "Total amount due: " << litersFilled * pricePerLiter;
    }
    ~PetrolPump() {}
};
double PetrolPump ::pricePerLiter = 270.50;
int main() {
    PetrolPump p1(5, 26.8);
    p1.printReceipt();
    return 0;
}