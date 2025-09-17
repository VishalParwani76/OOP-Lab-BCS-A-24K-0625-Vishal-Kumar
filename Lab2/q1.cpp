#include <iostream>
using namespace std;
/*  EXAMPLE LOGIC
    a = 1
    b = 3

    b = b + a
    a = b - a
    b = b - a
*/
void SwapValues(int *p1, int *p2) {
    *p2 = *p2 + *p1;
    *p1 = *p2 - *p1;
    *p2 = *p2 - *p1;

    cout << "\nVariable 1 after swapping: " << *p1 << "\nVariable 2 after swapping: " << *p2 << endl;
}
int main() {
    int var1, var2;

    cout << "Enter var1: ";
    cin >> var1;
    cout << "\nEnter var2: ";
    cin >> var2;

    SwapValues(&var1, &var2);
    return 0;
}