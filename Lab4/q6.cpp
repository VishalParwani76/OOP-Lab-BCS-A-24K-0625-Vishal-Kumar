#include <iostream>
using namespace std;
class OrderDetails {
    int orderID;
    string itemName;
    const double deliveryFee;
public:
    OrderDetails (int orderID, string itemName, const double deliveryFee) : deliveryFee(deliveryFee) {
        this->orderID = orderID;
        this->itemName = itemName;
    }
    ~OrderDetails () {
        cout << "\nOrder ID " << orderID << " Archived and memory cleared\n";
    }
    void display () const {
        cout << "\nOrder ID: " << orderID << endl;
        cout << "Item Name: " << itemName << endl;
        cout << "Delivery Fee: " << deliveryFee << endl;
    }
};
int main() {
    OrderDetails d1(4, "Keyboard", 150);
    d1.display();
    return 0;
}