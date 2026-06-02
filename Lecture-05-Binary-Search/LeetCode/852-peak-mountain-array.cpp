/*
Level: Medium
Problem Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/
Problem name: 852. Peak Index in a Mountain Array
Problem Statement: Given an array that is definitely a mountain, return the index of the peak element.
Example 1:
Input: arr = [0,1,0]
Output: 1
Explanation: 1 is the peak element and its index is 1.
*/

#include <bits/stdc++.h>
using namespace std;

// Binary Search approach
class Solution
{
public:
    int peakIndexInMountainArray_Binary(vector<int> &arr)
    {
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e)
        {
            if (arr[mid] < arr[mid + 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
};

// Linear Search approach
int peakIndexInMountainArray_Linear(vector<int> &arr)
{
    int max = INT_MIN;
    int index;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    return index;
}

int main()
{
    Solution s;
    vector<int> arr = {0, 1, 0};
    cout << s.peakIndexInMountainArray_Binary(arr) << endl;
    return 0;
}