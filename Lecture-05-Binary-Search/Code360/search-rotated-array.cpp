/*
Problem Link - https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554
Problem name - Search In Rotated Sorted Array
Problem Statement - Given an array of integers nums which is sorted in ascending order and is rotated at some pivot unknown to you beforehand (i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]), and an integer target, return the index of target if it is in nums, or -1 if it is not in nums. You must write an algorithm with O(log n) runtime complexity.
Example 1:
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Explanation: 0 is found at index 4 in the array.
*/

#include <bits/stdc++.h>
using namespace std;

int getPivot(vector<int> &arr, int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int binary(vector<int> &arr, int s, int e, int key)
{
    int start = s, end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key) // when key is matched with the mid value
        {
            return mid; // return the index of mid
        }
        else if (key > arr[mid]) // for the right part
        {
            start = mid + 1; // update the start index
        }
        else // for the left part
        {
            end = mid - 1; // update the end index
        }
        mid = start + (end - start) / 2; // when key is not found, update the mid
    }
    return -1;
}

int search(vector<int> &arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        // BS on the second line
        return binary(arr, pivot, n - 1, k);
    }
    else
    {
        // BS on the first line
        return binary(arr, 0, pivot - 1, k);
    }
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int n = arr.size();
    int k;
    cout << "Enter the key to search: ";
    cin >> k;
    cout << search(arr, n, k) << endl;
    return 0;
}