/*
Problem link - https://www.naukri.com/code360/problems/bubble-sort_980524
Problem name - bubble sort
Problem statement - Given an array of integers, sort the array using bubble sort algorithm.
Example:
Input: arr[] = {5, 1, 4, 2, 8}
Output: arr[] = {1, 2, 4, 5, 8}
Explanation: The array is sorted in ascending order using bubble sort algorithm.
*/

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped = false;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            // already sorted
            break;
        }
    }
}

int main()
{
    int arr[5] = {1, 3, 4, 5, 0};
    bubbleSort(arr, 5);
    cout << "sorted array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}
