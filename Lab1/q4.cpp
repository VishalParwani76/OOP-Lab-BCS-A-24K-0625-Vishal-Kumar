#include <iostream>
using namespace std;

int main()
{
    int size, temp, j;

    cout << "Enter size: ";
    cin >> size;

    int *arr1 = new int[size];
    int *arr2 = new int[size];

    cout << "\nEnter elements of array1:\n";
    for (int i = 0; i < size; ++i)
    {
        cin >> arr1[i];
    }
    cout << "\nEnter elements of array2:\n";
    for (int i = 0; i < size; ++i)
    {
        cin >> arr2[i];
    }

    // swapping
    for (int i = 0; i < size; ++i)
    {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    // Print swapped arrays
    cout << "\nArrays after swapping:\n";
    cout << "First Array: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr1[i] << " ";
    }
    cout << "\nSecond Array: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr2[i] << " ";
    }

    // largest value in array 1
    int largest = arr1[0];
    for (int i = 1; i < size; ++i)
    {
        if (arr1[i] > largest)
            largest = arr1[i];
    }

    cout << "\nLargest element in first array (after swapping): " << largest;

    // second largest value in array 2
    largest = arr2[0];
    int secondLargest = -99999;

    for (int i = 1; i < size; ++i)
    {   
        if (arr2[i] > largest)
        {
            secondLargest = largest;
            largest = arr2[i];
        }
        else if (arr2[i] > secondLargest && arr2[i] != largest)
            secondLargest = arr2[i];
    }
    cout << "\nSecond largest element in second array (after swapping): " << secondLargest;

    // unique logic
    int uniqueness = -1;
    for (int i = 0; i < size; ++i)
    {
        int count = 0;
        for (int j = 0; j < size; ++j)
        {
            if (arr1[i] == arr1[j])
                count++;
        }
        if (count == 1)
        {
            uniqueness = arr1[i];
            break;
        }
    }
    if (uniqueness == -1)
        uniqueness = arr1[0];
    cout << "\nUnique element in first array (after swapping): " << uniqueness << endl;
    delete[] arr1;
    delete[] arr2;
    return 0;
}