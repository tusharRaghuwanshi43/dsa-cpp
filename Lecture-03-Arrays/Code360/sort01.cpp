/*
Problem Link - https://www.naukri.com/code360/problems/sort-0-1_624379
Problem Name - Sort 0 1
Level - Moderate
*/

#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortZeroesAndOne(int input[], int size)
{
    // Write your code here
    int left = 0, right = size - 1;

    while (left < right)
    {
        if (input[left] == 0)
        {
            left++;
        }
        else if (input[right] == 1)
        {
            right--;
        }
        else if (input[left] == 1 && input[right] == 0)
        {
            swap(input[left], input[right]);
            left++;
            right--;
        }
        else
        {
            cout << "error";
        }
    }
}

int main()
{
    int arr[6] = {0, 1, 1, 1, 0, 0};
    cout << "before sort:" << endl;
    printArray(arr, 6);
    sortZeroesAndOne(arr, 6);
    cout << "after sort:" << endl;
    printArray(arr, 6);

    return 0;
}