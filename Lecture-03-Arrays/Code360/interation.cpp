/*
Problem Link - https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149
Problem name - Intersection Of Two Sorted Arrays
Problem statement - Given two sorted arrays, find their intersection. The intersection of two arrays is a list that consists of the common elements between the two arrays. The common elements should be in the same order as they appear in the first array. If there are no common elements, return an empty list.   
Example 1:
Input: arr1 = [1, 2, 3, 4, 5], arr2 = [2, 3, 4, 5, 6]
Output: [2, 3, 4, 5]
Explanation: The common elements between the two arrays are 2, 3, 4, and 5. They are returned in the same order as they appear in the first array.
Example 2:
Input: arr1 = [1, 2, 3, 4, 5], arr2 = [6, 7, 8, 9, 10]
Output: []
Explanation: There are no common elements between the two arrays.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // Write your code here.
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    int n, m;
    cout << "Enter the size of the first array: ";
    cin >> n;
    cout << "Enter the size of the second array: ";
    cin >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    vector<int> ans = findArrayIntersection(arr1, n, arr2, m);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}