/*
Problem Link - https://www.naukri.com/code360/problems/allocate-books_1090540
Problem name - Allocate Books
Problem Statement - Given an array of integers arr of size n where arr[i] represents the number of pages in the ith book and an integer m representing the number of students. The task is to allocate all the books to m students such that each student gets at least one book and the maximum number of pages assigned to a student is minimum.
Example 1:
Input: arr = [12, 34, 67, 90], m = 2
Output: 113
Explanation: The books can be allocated as [12, 34, 67] and [90]. The maximum number of pages assigned to a student is 113.
*/

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    // cout << "checking for mid "<< mid <<endl;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
        if (studentCount > m)
        {
            return false;
        }
        // cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}

int findPages(vector<int> arr, int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            // cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr = {12, 34, 67, 90};
    int m = 2;
    int n = arr.size();
    cout << "The minimum number of pages is " << endl;
    cout << findPages(arr, n, m) << endl;
    return 0;
}