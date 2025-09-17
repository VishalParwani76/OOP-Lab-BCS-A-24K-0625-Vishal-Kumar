#include <iostream>
using namespace std;
void function(int value) {
    int number, remainder;
    if (value >= 5000) {        //logic for 5000
        number = value / 5000;
        remainder = value % 5000;
        cout << "5000 x " << number << endl;
    }
    if (remainder >= 1000) {    //logic for 1000
        number = remainder / 1000;
        remainder %= 1000;
        cout << "1000 x " << number << endl;
    }
    if (remainder >= 500) {     //logic for 500
        number = remainder / 500;
        remainder %= 500;
        cout << "500 x " << number << endl;
    }
    if (remainder >= 100) {     //logic for 100
        number = remainder / 100;
        remainder %= 100;
        cout << "100 x " << number << endl;
    }
    if (remainder >= 20) {      //logic for 20
        number = remainder / 20;
        remainder %= 20;
        cout << "20 x " << number << endl;
    }
    if (remainder >= 10) {      //logic for 10
        number = remainder / 10;
        remainder %= 10;
        cout << "10 x " << number << endl;
    }
    if (remainder >= 5) {       //logic for 5
        number = remainder / 5;
        remainder %= 5;
        cout << "5 x " << number << endl;
    }
    if (remainder >= 2) {       //logic for 2
        number = remainder / 2;
        remainder %= 2;
        cout << "2 x " << number << endl;
    }
    if (remainder >= 1) {       //logic for note 1
        number = remainder / 1;
        remainder %= 1;
        cout << "1 x " << number << endl;
    }
}
int main() {
    int value;  
    cout << "\nEnter a value: \n";
    cin >> value;   //INPUT
    cout << "\nThe minimum number of notes required for " << value << " are:\n";
    function(value); //Function CALL
    return 0;
}