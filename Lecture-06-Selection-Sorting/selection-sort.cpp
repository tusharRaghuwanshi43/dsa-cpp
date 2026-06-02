/*
Problem Link - https://www.naukri.com/code360/problems/selection-sort_981162
Problem name -  Selection Sort
Problem Statement - Given an array of integers, sort the array in increasing order using selection sort.
Example:
Input: arr = [2, 3, 1, 5, 4]
Output: arr = [1, 2, 3, 4, 5]
Explanation: The selection sort algorithm sorts an array by repeatedly finding the minimum element from the unsorted part and putting it at the beginning. In this example, the minimum element is 1, which is swapped with the first element (2). Then, the next minimum element is 2, which is already in its correct position. The process continues until the entire array is sorted.
*/

#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int arr[5] = {2, 3, 1, 5, 4};
    selectionSort(arr, 5);
    cout << "Sorted array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}