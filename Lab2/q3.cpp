#include <iostream>
using namespace std;
//FUNCTION LOGIC BY DEREFERENCING
void sumArray(int *arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; ++i) {
        sum += *(arr + i);//ACCESS ELEMENTS USING POINTER ARITHMETIC
    }
    cout << "The sum of all the elements of array is: " << sum;
}
int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int *arr = new int[size]; //DMA

    cout << "Enter Elements of the array:\n"; //INPUT
    for(int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    sumArray(arr, size); //FUNCTION CALL

    delete[] arr; //FREE THE ARRAY
    return 0;
}