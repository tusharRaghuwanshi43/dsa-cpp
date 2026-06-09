#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    // Choose first element as pivot
    int pivot = arr[s];

    // Count elements smaller than or equal to pivot
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // Place pivot at its correct position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // Arrange elements around pivot
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // Base case
    if (s >= e)
        return;

    // Partition array and get pivot position
    int p = partition(arr, s, e);

    // Sort left part
    quickSort(arr, s, p - 1);

    // Sort right part
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[10] = {4, 5, 4, 1, 7, 3, 2, 78, 1, 22};
    int n = 10;

    quickSort(arr, 0, n - 1);

    // Print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}