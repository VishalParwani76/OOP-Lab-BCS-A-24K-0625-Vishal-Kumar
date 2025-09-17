#include <iostream>
using namespace std;
int main() {
    int N, sum = 0;
    cout << "Enter size: ";
    cin >> N;
    int **arr = new int*[N]; //2D array using DMA

    for(int i=0; i<N; ++i) {
        arr[i] = new int[N]; //dynamicaly locating space for 2D array 
    }
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            cin >> arr[i][j];   //input of 2D array
        }
    }
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            cout << arr[i][j] << " ";   //printing of 2D array
        }
        cout << endl;
    }
    for(int i = 0; i < N; ++i) {
        sum += arr[i][i];   //sum of main diagonal
    }
    cout << "Sum of Main Diagonal is: " << sum;

    sum = 0;
    for(int i = 0; i < N; ++i) {
        sum += arr[i][N - 1 - i];   //sum of secondary diagonal
    }
    cout << "\nSum of Secondary Diagonal is: " << sum;

    for(int i = 0; i < N; ++i) {
        delete[] arr[i];    //freeing allocated memory
    }
    delete[] arr;
    return 0;
}