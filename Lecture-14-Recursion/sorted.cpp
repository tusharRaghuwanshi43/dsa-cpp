#include <iostream>
using namespace std;

/*
    Function: isSorted()

    Purpose:
    Check whether an array is sorted in
    ascending order using recursion.

    Returns:
    true  -> Array is sorted
    false -> Array is not sorted
*/
bool isSorted(int arr[], int size)
{
    /*
        BASE CASE

        An array with:
        - 0 elements
        - 1 element

        is always sorted.
    */
    if (size == 0 || size == 1)
    {
        return true;
    }

    /*
        PROCESSING

        Compare first two elements.

        If current element is greater than
        the next element, array is not sorted.
    */
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        /*
            RECURSIVE CALL

            Check the remaining part of array.

            arr + 1 points to the next element.

            Example:

            arr = [2, 4, 9, 11, 15]

            arr + 1 -> [4, 9, 11, 15]
        */
        bool remainingPart = isSorted(arr + 1, size - 1);

        return remainingPart;
    }
}

int main()
{
    /*
        Test Array

        Index : 0   1    2   3  4
        Value : 2   4   911  9  9
    */
    int arr[5] = {2, 4, 911, 9, 9};

    int size = 5;

    // Check if array is sorted
    bool ans = isSorted(arr, size);

    if (ans)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}