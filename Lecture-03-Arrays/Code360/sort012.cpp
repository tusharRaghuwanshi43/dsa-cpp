/*
Problem Link - https://www.naukri.com/code360/problems/sort-0-1-2_631055
Problem Name -  Sort 0 1 2
*/

#include <bits/stdc++.h>
using namespace std;

// Approach - 01 (Own)
void sort012(int *arr, int n)
{
    int i = 0, j = n - 1, k = 0;

    // Move all 2s to end
    while (k <= j)
    {
        if (arr[k] == 0 || arr[k] == 1)
        {
            k++;
        }
        else
        {
            swap(arr[k], arr[j]);
            j--;
        }
    }

    // Now sort remaining 0s and 1s
    while (i <= j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else
        {
            swap(arr[i], arr[j]);
            j--;
        }
    }
}

// Approach -2
//
//  void sort012(int *arr, int n)
//  {
//      int i = 0;
//      int k = 0;
//      int j = n - 1;
//      while (k <= j)
//      {
//          if (arr[k] == 0)
//          {
//              swap(arr[i], arr[k]);
//              i++;
//              k++;
//          }
//          else if (arr[k] == 1)
//          {
//              k++;
//          }
//          else
//          {
//              swap(arr[k], arr[j]);
//              j--;
//          }
//      }
//  }

int main()
{
    int arr[] = {1, 0, 2, 2, 1, 0, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort012(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}