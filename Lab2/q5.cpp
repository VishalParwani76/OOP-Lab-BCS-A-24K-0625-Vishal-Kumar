#include <iostream>
#include <string>
using namespace std;
int main() {
    string *str1 = new string;
    string *str2 = new string;

    cout << "Enter string 1: ";
    cin >> *str1;
    cout << "Enter string 2: ";
    cin >> *str2;
    //concatenation
    string *str3 = new string(*str1 + *str2);

    cout << *str3;
    //freeing allocated memory
    delete str1;
    delete str2;
    delete str3;

    return 0;
}