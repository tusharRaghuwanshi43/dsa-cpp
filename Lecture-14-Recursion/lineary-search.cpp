#include <iostream>
using namespace std;

/*
    Function: print()

    Purpose:
    Print the current array and its size
    during each recursive call.

    This helps us visualize how the array
    becomes smaller in every recursion step.
*/
void print(int arr[], int n)
{
    cout << "Size of array is " << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

/*
    Function: linearSearch()

    Purpose:
    Search for a key in the array
    using recursion.

    Returns:
    true  -> key found
    false -> key not found
*/
bool linearSearch(int arr[], int size, int k)
{
    /*
        Print current array state
        before processing.
    */
    print(arr, size);

    /*
        BASE CASE

        If array becomes empty,
        key is not present.
    */
    if (size == 0)
    {
        return false;
    }

    /*
        Check first element.

        If first element matches
        the key, return true.
    */
    if (arr[0] == k)
    {
        return true;
    }
    else
    {
        /*
            RECURSIVE CALL

            Search in remaining array.

            arr + 1 moves pointer
            to the next element.

            size - 1 reduces
            the search space.
        */
        bool remainingPart =
            linearSearch(arr + 1, size - 1, k);

        return remainingPart;
    }
}

int main()
{
    /*
        Test Array

        Index : 0  1  2  3  4
        Value : 3  5  1  2  6
    */
    int arr[5] = {3, 5, 1, 2, 6};

    int size = 5;

    // Element to search
    int key = 6;

    // Function call
    bool ans = linearSearch(arr, size, key);

    if (ans)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Absent" << endl;
    }

    return 0;
}