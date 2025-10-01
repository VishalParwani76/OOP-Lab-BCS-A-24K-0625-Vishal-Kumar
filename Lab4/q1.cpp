#include <iostream>
using namespace std;
class MobileAccount {
    double balance;
    string phoneNumber;
public:
    MobileAccount (double bal = 50.0, string pN = "") {
        balance = bal;
        phoneNumber = pN;        
    }
    void display () {
        cout << "Balance: " << balance << "\nPhone Number: " << phoneNumber << "PKR" << endl;
    }
};
int main () {
    MobileAccount A1;
    A1.display();
    return 0;
}