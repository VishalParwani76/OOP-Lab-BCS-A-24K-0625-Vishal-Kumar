#include <iostream>
using namespace std;

class Calculator {
    int num1, num2;
public:
    void setNumbers(int n1, int n2);
    int add();
};
void Calculator :: setNumbers(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

int Calculator :: add() {
        return num1 + num2;
    }

int main() {
    Calculator c1;
    c1.setNumbers(8,7);
    cout << "SUM: " << c1.add();
    return 0;
}