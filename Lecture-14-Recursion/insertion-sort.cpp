#include <iostream>
using namespace std;

/*
    Function: insertionSort()

    Purpose:
    Sort an array using Recursive Insertion Sort.

    Idea:
    1. Assume first n-1 elements are sorted.
    2. Insert the nth element into its
       correct position.
    3. Recursively sort the remaining array.

    Example:

    5 3 1 4 2

    Pass 1:
    3 5 1 4 2

    Pass 2:
    1 3 5 4 2

    Pass 3:
    1 3 4 5 2

    Pass 4:
    1 2 3 4 5
*/
void insertionSort(int arr[], int n)
{
    /*
        BASE CASE

        Array with 0 or 1 element
        is already sorted.
    */
    if (n == 0 || n == 1)
    {
        return;
    }

    /*
        RECURSIVE CALL

        First sort the first n-1 elements.
    */
    insertionSort(arr, n - 1);

    /*
        PROCESSING

        Insert the last element
        into its correct position.
    */
    int last = arr[n - 1];
    int j = n - 2;

    /*
        Shift all elements greater than
        'last' one position to the right.
    */
    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    /*
        Place element at correct position.
    */
    arr[j + 1] = last;
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

    // Recursive Insertion Sort
    insertionSort(arr, n);

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}