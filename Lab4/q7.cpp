#include <iostream>
using namespace std;
class SecureBankAccount {
    int accountNumber;
    double balance;
    const string accountType;
    int *logHistory;
public:
    SecureBankAccount (int accountNumber, double balance, string accountType, int logHistory) : accountType(accountType) {
        this->accountNumber = accountNumber;
        this->balance = balance;
        this->logHistory = new int(logHistory);
        if (balance < 500) {
            cout << "\nERROR! Initial Balance is less than 500.0 PKR\n";
        }
    }
    SecureBankAccount (const SecureBankAccount& other) : accountType(other.accountType) {
        accountNumber = other.accountNumber;
        balance = other.balance;
        this->logHistory = new int(*other.logHistory);
    }
    ~SecureBankAccount () {
        cout << "\nDestructor was called!\n";
        delete logHistory;
    }
    void display () {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << " PKR" << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Log History Value: " << *logHistory << endl;
    }
};
int main() {
    SecureBankAccount a1(105, 499.0, "SavingsAccount", 202501);
    a1.display();
    return 0;
}
