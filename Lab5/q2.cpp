#include <iostream>
using namespace std;
class MobileDevice {
    string& modelName;
    const long long IMEINumber;
public:
    MobileDevice(string& name, long long number) : modelName(name), IMEINumber(number) {}
    void verifyDevice() const {
        cout << "Model Name: " << modelName << endl;
        cout << "IMEI Number: " << IMEINumber << endl
             << endl;
    }
    ~MobileDevice() {
    }
};
int main() {
    string literal = "iPhone";
    MobileDevice d1(literal, 358900012345678LL);
    d1.verifyDevice();
    return 0;
}