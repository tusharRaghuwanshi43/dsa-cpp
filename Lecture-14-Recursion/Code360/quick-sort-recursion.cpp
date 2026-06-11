/*
Problem Link - https://www.naukri.com/code360/problems/quick-sort_983625
Problem Name - Quick Sort
Level - Moderate
*/
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{

    int pivot = arr[s];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right wala part smbhal lete h
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void solve(vector<int> &arr, int s, int e)
{

    // base case
    if (s >= e)
        return;

    // partitioon karenfe
    int p = partition(arr, s, e);

    // left part sort karo
    solve(arr, s, p - 1);

    // right wala part sort karo
    solve(arr, p + 1, e);
}

vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    solve(arr, 0, arr.size() - 1);
    return arr;
}

int main()
{
    vector<int> arr = {4, 5, 4, 1, 7, 3, 2, 78, 1, 22};
    vector<int> ans = quickSort(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}