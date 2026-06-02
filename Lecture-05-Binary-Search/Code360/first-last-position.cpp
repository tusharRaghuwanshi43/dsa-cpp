/*
Problem Link - leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
Problem name -  First and Last Position of an Element In Sorted Array
Problem Statement - Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value. If target is not found in the array, return [-1, -1]. You must write an algorithm with O(log n) runtime complexity.
Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Explanation: The target value 8 occurs first at index 3 and last at index 4.
*/

#include <bits/stdc++.h>
using namespace std;

int leftmost(vector<int> &arr, int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int rightmost(vector<int> &arr, int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    // Write your code here

    pair<int, int> p;
    p.first = leftmost(arr, n, k);
    p.second = rightmost(arr, n, k);

    return p;
}

int main()
{
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int n = arr.size();
    int k = 8;
    cout << "The first and last position of " << k << " is: ";
    pair<int, int> ans = firstAndLastPosition(arr, n, k);
    cout << ans.first << " " << ans.second << endl;
    return 0;
}