/*
Problem Link - https://www.naukri.com/code360/problems/reverse-the-array_1262298
Problem Name - Reverse the array
Problem Statement - Given an array of integers and an integer m, reverse the elements of the array from index m+1 to the end of the array. The first m+1 elements of the array should remain unchanged.
Example:
Input - arr = [1, 2, 3, 4], m = 1
Output - arr = {1,2,4,3}
Explanation - The elements from index 2 to 3 (0-based) are reversed.
*/
#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int m)
{
    int s = m + 1;
    int e = arr.size() - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    reverseArray(arr, 1);
    printArray(arr);
    return 0;
}