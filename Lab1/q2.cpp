#include <iostream>
using namespace std;

int main() {
    int number;
    char ch;
    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i <= number; ++i) {          //logic for upper half of the desired output
        for (int s = 1; s <= number - i; ++s)   //loop for spaces
            cout << " ";
        ch = 'A';
        for (int j = 1; j <= (2 * i) - 1; ++j)  //loop to print characters
        {
            cout << ch;
            ch++;                               //increment character by 1
        }
        cout << endl;
    }
    for (int i = number - 1; i >= 1; --i) {      //logic for lower half of the desired output
        for (int s = number - i; s >= 1; --s)
            cout << " ";
        ch = 'A';
        for (int j = (2 * i) - 1; j >= 1; --j) { 
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}
