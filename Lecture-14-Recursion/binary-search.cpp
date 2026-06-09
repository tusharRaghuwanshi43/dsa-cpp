#include <iostream>
using namespace std;

/*
    Function: print()

    Purpose:
    Print the current search space
    during each recursive call.

    Parameters:
    arr -> Sorted array
    s   -> Start index
    e   -> End index
*/
void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*
    Function: binarySearch()

    Purpose:
    Search for a key in a sorted array
    using Recursion + Binary Search.

    Returns:
    true  -> Key found
    false -> Key not found
*/
bool binarySearch(int *arr, int s, int e, int k)
{
    // Display current search space
    print(arr, s, e);

    /*
        BASE CASE

        If start index crosses end index,
        element does not exist.
    */
    if (s > e)
        return false;

    /*
        Calculate middle index

        Safer than:

        (s + e) / 2

        because it avoids overflow.
    */
    int mid = s + (e - s) / 2;

    cout << "Mid Index : " << mid << "  Value : " << arr[mid] << endl;

    /*
        ELEMENT FOUND
    */
    if (arr[mid] == k)
        return true;

    /*
        If key is greater than middle element,
        search in right half.
    */
    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }

    /*
        Otherwise search in left half.
    */
    else
    {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main()
{
    /*
        Sorted Array

        Index : 0  1  2  3   4   5   6   7   8   9   10
        Value : 2  4  6  10  14  18  22  38  49  55  222
    */
    int arr[11] =
        {
            2, 4, 6, 10, 14, 18, 22, 38, 49, 55, 222};

    int size = 11;

    // Element to search
    int key = 222;

    bool ans = binarySearch(arr, 0, size - 1, key);

    cout << "\nPresent or Not " << ans << endl;

    return 0;
}