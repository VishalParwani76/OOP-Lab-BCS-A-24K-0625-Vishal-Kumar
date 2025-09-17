#include <iostream>
using namespace std;

class Concrete{
    string message;
public:
    Concrete(string m) {
        message = m;
    }
    void displayMessage() {
        cout << "Message: " << message;
    }
};
int main() {
    Concrete C1("HelloWorld");
    C1.displayMessage();
    return 0;
}