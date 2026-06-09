#include <iostream>
using namespace std;

/*
    Function: merge()

    Purpose:
    Merge two already sorted halves into a single sorted array.

    Example:

    Left Half  : [1, 5, 8]
    Right Half : [2, 3, 7]

    Result:
    [1, 2, 3, 5, 7, 8]
*/
void merge(int *arr, int s, int e)
{
    /*
        Find middle index

        Example:

        s = 0
        e = 6

        mid = 3
    */
    int mid = (s + e) / 2;

    /*
        Length of left half

        Example:

        s = 0
        mid = 3

        Elements:
        0,1,2,3

        Length = 4
    */
    int len1 = mid - s + 1;

    /*
        Length of right half

        Example:

        mid = 3
        e = 6

        Elements:
        4,5,6

        Length = 3
    */
    int len2 = e - mid;

    /*
        Dynamically create temporary arrays.
    */
    int *first = new int[len1];
    int *second = new int[len2];

    /*
        Copy left half into first[]
    */
    int mainArrayIndex = s;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    /*
        Copy right half into second[]
    */
    mainArrayIndex = mid + 1;

    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    /*
        Merge both sorted arrays.
    */
    int index1 = 0;
    int index2 = 0;

    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] =
                first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] =
                second[index2++];
        }
    }

    /*
        Copy remaining elements of first[]
    */
    while (index1 < len1)
    {
        arr[mainArrayIndex++] =
            first[index1++];
    }

    /*
        Copy remaining elements of second[]
    */
    while (index2 < len2)
    {
        arr[mainArrayIndex++] =
            second[index2++];
    }

    /*
        Free heap memory
    */
    delete[] first;
    delete[] second;
}

/*
    Function: mergeSort()

    Purpose:
    Divide array into smaller parts, sort them recursively, then merge them.
*/
void mergeSort(int *arr, int s, int e)
{
    /*
        BASE CASE
        Single element is already sorted.
    */
    if (s >= e)
    {
        return;
    }

    /*
        Find middle index
    */
    int mid = (s + e) / 2;
    /*
        Sort left half
    */
    mergeSort(arr, s, mid);
    /*
        Sort right half
    */
    mergeSort(arr, mid + 1, e);
    /*
        Merge sorted halves
    */
    merge(arr, s, e);
}

int main()
{
    /*
        Unsorted Array
    */
    int arr[15] =
        {
            12, 12, 127, 0, 1, 5, 8, 332, 23, 31, 66, 12, 99, 89, 77};
    int n = 15;
    // Sort array
    mergeSort(arr, 0, n - 1);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}