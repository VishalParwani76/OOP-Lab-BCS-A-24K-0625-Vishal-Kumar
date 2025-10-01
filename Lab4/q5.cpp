#include <iostream>
using namespace std;
class CurrencyExchange {
    const double PKR_to_USD_Rate;
    string& branchName;
    int totalTransactions;
public:
    CurrencyExchange (double pkrToUsd, string& bName, int totalT) : PKR_to_USD_Rate(pkrToUsd), branchName(bName), totalTransactions(totalT) {
        cout << "\nCurrencyExchange Constructor is called\n";
    }
    double convertPKRtoUSD (double pkr) {
        return pkr * PKR_to_USD_Rate;
    }
    void display() {
        cout << "\nPKR To USD Rate: " << PKR_to_USD_Rate << endl;
        cout << "Branch Name: " << branchName << endl;
        cout << "Total Transactions: " << totalTransactions << endl;
    }
    ~CurrencyExchange () {
        cout << "\nDestructor was called\n";
    }
};  
int main () {
    string branch = "Main Branch";
    CurrencyExchange obj(0.0035, branch, 5);
    obj.display();
    double result = obj.convertPKRtoUSD(1000);
    cout << "Conversion of 1000 PKR to USD: " << result << endl;
    return 0;
}