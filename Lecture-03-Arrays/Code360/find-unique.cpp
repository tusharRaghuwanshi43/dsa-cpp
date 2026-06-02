/*
Problem Link - https://www.naukri.com/code360/problems/find-unique_625159
Problem name - Find Unique
Given an array of integers, where every element occurs twice except for one element which occurs once. Find the unique element.
Example:
Input: arr = [1, 2, 3, 2, 1]
Output: 3
Explanation: The unique element in the array is 3, as it occurs only once while all other elements occur twice.
*/

#include <bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size)
{
    // Write your code here
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array: ";
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << findUnique(arr, size) << endl;
    delete[] arr;
}