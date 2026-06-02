/*
Problem link - https://www.naukri.com/code360/problems/pair-sum_697295
Problem name -  Pair Sum
Problem Statement - Given an integer array and a sum, find all the pairs of integers in the array whose sum is equal to the given sum. The pairs should be ordered in non-decreasing order and the order of the pairs in the output should be based on the first value of the pair.
Example:
Input: arr = [1, 3, 2, 2], s = 4
Output: [[1, 3], [2, 2]]
Explanation: The pairs of integers in the array that sum up to 4 are (1, 3) and (2, 2). The pairs are ordered in non-decreasing order and the order of the pairs in the output is based on the first value of the pair.
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    // Write your code here.
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> arr = {1, 3, 2, 2};
    int s = 4;
    vector<vector<int>> result = pairSum(arr, s);
    for (const auto &pair : result)
    {
        cout << "[" << pair[0] << ", " << pair[1] << "] ";
    }
    cout << endl;
    return 0;
}