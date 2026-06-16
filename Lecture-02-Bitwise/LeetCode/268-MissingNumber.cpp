/*
Problem Link - https://leetcode.com/problems/missing-number/
Problem Name - 268. Missing Number
Level - Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int ans = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            ans ^= i;
            ans ^= nums[i];
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {3, 0, 1};
    int ans = sol.missingNumber(nums);
    cout << ans << endl;
    return 0;
}