/*
Level - Medium
Problem Link - https://leetcode.com/problems/rotate-array/
Problem Name - 189 Rotate Array
Problem Statement - Given an array, rotate the array to the right by k steps, where k is non-negative.
Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    // rotate the array to the right by k steps, where k is non-negative.
    void rotate(vector<int> &nums, int k)
    {
        int size = nums.size();
        vector<int> ans(size);
        for (int i = 0; i < size; i++)
        {
            ans[(i + k) % size] = nums[i];
        }
        nums = ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    s.rotate(nums, k);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}