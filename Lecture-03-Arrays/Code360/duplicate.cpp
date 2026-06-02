/*
Problem Link - https://www.naukri.com/code360/problems/duplicate-in-array_893397
Problem name -  Duplicate In Array
Problem Statement - Given an array of integers of size n which contains numbers from 1 to n-1. There is only one duplicate number but it can be repeated multiple times. Find that duplicate number.
example 1-
Input: arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2]
Output: 2
example 2-
Input: arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1]
Output: 1
Explanation: The duplicate element in the array is 1, as it occurs twice while all other elements occur only once.
*/

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    // Write your code here
    int ans = 0;

    // XOR ing all array elements
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    // XOR [1,n-1]
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << findDuplicate(arr) << endl;
}