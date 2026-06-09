#include <iostream>
using namespace std;

/*
    Function: selectionSort()

    Purpose:
    Sort an array using Recursive Selection Sort.

    Idea:
    In each recursive call:
    1. Find the smallest element.
    2. Place it at its correct position.
    3. Recursively sort the remaining array.

    Example:

    5 3 1 4 2

    Pass 1:
    1 3 5 4 2

    Pass 2:
    1 2 5 4 3

    ...
*/
void selectionSort(int arr[], int n)
{
    /*
        BASE CASE

        If array has 0 or 1 element,
        it is already sorted.
    */
    if (n == 0 || n == 1)
    {
        return;
    }

    /*
        Find minimum element
        in current array.
    */
    int minIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }

    /*
        Place minimum element
        at its correct position.
    */
    swap(arr[0], arr[minIndex]);

    /*
        RECURSIVE CALL

        First element is now sorted.

        Sort remaining array.
    */
    selectionSort(arr + 1, n - 1);
}

int main()
{
    /*
        Unsorted Array

        Index : 0  1  2  3  4
        Value : 5  3  1  4  2
    */
    int arr[5] = {5, 3, 1, 4, 2};

    int n = 5;

    // Recursive Selection Sort
    selectionSort(arr, n);

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}