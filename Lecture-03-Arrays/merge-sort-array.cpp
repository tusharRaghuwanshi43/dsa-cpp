#include <iostream>
using namespace std;

// Function to merge two sorted arrays into a single sorted array
void merge(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < size1)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < size2)
    {
        arr3[k++] = arr2[j++];
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr1[4] = {1, 3, 5, 7};
    int arr2[4] = {2, 4, 6, 8};
    int arr3[8] = {0};

    merge(arr1, 4, arr2, 4, arr3);
    cout << "Merged Array: ";
    cout << endl;
    printArray(arr3, 8);
}