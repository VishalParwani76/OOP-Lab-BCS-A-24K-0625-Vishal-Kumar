#include <iostream>
#include <string>
using namespace std;
void FirstAndLastIndex(string word, char ch, int *p1, int *p2) {
    *p1 = -2;
    *p2 = -2;
    int length = word.length();     //string length
    for(int i = 0; i < length; ++i) {
        if(ch == word[i]) {     //logic 
            if(*p1 == -2) {
                *p1 = i;
            }
            *p2 = i;
        }
    }
}
int main() {
    string word;
    char ch;
    int var1, var2;

    cout << "Enter a word: ";
    cin >> word;
    cout << "Enter a character: ";
    cin >> ch;

    FirstAndLastIndex(word, ch, &var1, &var2);

    if (var1 == -2) {
        cout << "\nCharacter not found\n";
    }
    else {
        cout << "First occurance is at index: " << var1;
        cout << "\nLast occurance is at index: " << var2;
    }
    return 0;
}