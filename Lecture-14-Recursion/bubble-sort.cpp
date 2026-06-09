#include <iostream>
using namespace std;

/*
    Function: sortArray()

    Purpose:
    Sort an array using Recursive Bubble Sort.

    Idea:
    After one complete pass,
    the largest element moves
    to its correct position.

    Then recursively sort the remaining n-1 elements.
*/
void sortArray(int *arr, int n)
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
        PROCESSING

        Perform one Bubble Sort pass.

        Largest element among the first n elements will move to index n-1.
        We only need to solve the case 1 and the remaining part solve by the recursion part.
    */
    for (int i = 0; i < n - 1; i++)
    {
        /*
            Swap if elements are
            in the wrong order.
        */
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    /*
        RECURSIVE CALL

        Last element is now
        at its correct position.

        Sort the remaining
        n-1 elements.
    */
    sortArray(arr, n - 1);
}

int main()
{
    /*
        Unsorted Array

        Index : 0  1  2  3  4
        Value : 2  5  1  6  9
    */
    int arr[5] = {2, 5, 1, 6, 9};

    // Recursive Bubble Sort
    sortArray(arr, 5);

    cout << "Sorted Array: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}