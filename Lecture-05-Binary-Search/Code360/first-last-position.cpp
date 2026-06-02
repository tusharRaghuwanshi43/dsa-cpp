/*
Problem Link - https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549
Problem name -  First and Last Position of an Element In Sorted Array
*/
#include <bits/stdc++.h>
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