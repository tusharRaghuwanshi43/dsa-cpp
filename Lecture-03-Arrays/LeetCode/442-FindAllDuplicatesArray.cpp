/*
Problem Link - https://leetcode.com/problems/find-all-duplicates-in-an-array/
Problem Name - 442. Find All Duplicates in an Array
Level - Medium
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int count = 1;
            int j = i + 1;
            while (j < nums.size() && nums[i] == nums[j])
            {
                count++;
                ans.push_back(nums[i]);
                j++;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(8);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    vector<int> ans = s.findDuplicates(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}