/*
Problem Link - https://www.naukri.com/code360/problems/binary-search_972
Problem Name - Binary Search
Level - Easy
*/

#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &arr, int s, int e, int k)
{
    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;

    if (arr[mid] == k)
        return mid;

    if (arr[mid] < k)
        return solve(arr, mid + 1, e, k);
    else
        return solve(arr, s, mid - 1, k);
}

int search(vector<int> &nums, int target)
{
    return solve(nums, 0, nums.size() - 1, target);
}

int main()
{
    vector<int> nums = {3, 12, 18, 28, 29, 30, 35, 36, 40, 45};
    int target;
    cout << "Enter target: " << endl;
    cin >> target;
    int ans = search(nums, target);
    cout << ans << endl;
    return 0;
}