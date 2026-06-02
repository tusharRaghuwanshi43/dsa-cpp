/*
Problem link - https://www.naukri.com/code360/problems/insertion-sort_3155179
Problem name - insertion sort
Problem Statement - Given an array of integers, sort the array in increasing order using insertion sort.
Example:
Input: arr = [1, 3, 4, 5, 0]
Output: arr = [0, 1, 3, 4, 5]
Explanation: The insertion sort algorithm builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.
*/

#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    // Write your code here.
    int i = 1;
    while (i < n)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
        i++;
    }
}

int main()
{
    int arr[5] = {1, 3, 4, 5, 0};
    insertionSort(arr, 5);
    cout << "sorted array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}