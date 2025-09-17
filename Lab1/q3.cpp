#include <iostream>
using namespace std;

//logic to find prime numbers
bool isPrime(int number) {
        if(number <= 1)
            return false;

        for(int i = 2; i < number; ++i) {
            if(number % i == 0)
                return false;
        }
        return true;
    }
int main() {
    //input start and end
    int start, end;
    cout << "Enter start: ";
    cin >> start;
    cout << "Enter end: ";
    cin >> end;

    //print prime numbers between start and end:
    cout << "Prime numbers between " << start << " and " << end << " are:\n";
    for(int i = start + 1; i < end; ++i) {
        if(isPrime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
