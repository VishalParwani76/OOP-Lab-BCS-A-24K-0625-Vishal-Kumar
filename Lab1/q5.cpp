#include <iostream>

using namespace std;

//Function for multiplication of matrices:

int multiplyMatrices(int arr1[][50], int arr2[][50], int r1, int c1, int r2, int c2)
{
    int i, j;
    cout << "\nEnter elements of Array 1:\n";
    for (i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "\nEnter elements of Array 2:\n";
    for (i = 0; i < r2; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            cin >> arr2[i][j];
        }
    }
    int result[50][50];

    if (c1 != r2) //rule of same columns of array 1 and rows of array 2
        return 1;

    cout << "\nResultant Matrix after Multiplication:\n";

    for (int i = 0; i < r1; ++i) //logic of multiplication
    {
        for (int j = 0; j < c2; ++j)
        {
            result[i][j] = 0;
            for(int k = 0; k < c1; ++k)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr1[50][50], arr2[50][50];
    int r1, c1, r2, c2;

    cout << "Enter Rows and Columns of Array1: ";
    cin >> r1 >> c1;
    cout << "Enter Rows and Columns of Array2: ";
    cin >> r2 >> c2;

    multiplyMatrices(arr1, arr2, r1, c1, r2, c2);
    return 0;
}
