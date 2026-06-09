#include <iostream>
using namespace std;

/*
    Function: getSum()

    Purpose:
    Calculate the sum of all elements
    of an array using recursion.

    Parameters:
    arr  -> Pointer to the first element
            of the array.
    size -> Number of elements remaining
            in the array.

    Returns:
    Sum of all array elements.
*/
int getSum(int *arr, int size)
{
    /*
        BASE CASE 1

        If no elements are left,
        sum is 0.

        Example:
        getSum(arr, 0)
        returns 0
    */
    if (size == 0)
    {
        return 0;
    }

    /*
        BASE CASE 2

        If only one element remains,
        return that element.

        Example:
        [9]

        Sum = 9
    */
    if (size == 1)
    {
        return arr[0];
    }

    /*
        RECURSIVE CALL

        Move pointer to the next element
        and reduce the size by 1.

        Example:

        Current Array:
        [2, 4, 9, 9, 9]

        Recursive Call:
        [4, 9, 9, 9]
    */
    int remainingPart = getSum(arr + 1, size - 1);

    /*
        SELF WORK

        Add current element to the
        sum returned by recursion.

        Example:

        Current Element = 2
        Remaining Sum = 31

        Total Sum = 33
    */
    int sum = arr[0] + remainingPart;
    cout << arr[0] << " " << remainingPart << endl;

    // Return the final sum
    return sum;
}

int main()
{
    /*
        Test Array

        Index : 0  1  2  3  4
        Value : 2  4  9  9  9
    */
    int arr[5] = {2, 4, 9, 9, 9};

    // Size of array
    int size = 5;

    // Function call
    int sum = getSum(arr, size);

    // Print final answer
    cout << "Sum is " << sum << endl;

    return 0;
}