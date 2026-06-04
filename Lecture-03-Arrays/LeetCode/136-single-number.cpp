/*
Level - Easy
Problem Link - https://leetcode.com/problems/single-number/
Problem Name - 136. Single Number
Problem Statement - Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
Example 1:
Input: nums = [2,2,1]
Output: 1
Explanation: 2 occurs twice while 1 occurs once, so 1 is the single number.
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};

int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);
    Solution s;
    cout << s.singleNumber(nums) << endl;
    return 0;
}