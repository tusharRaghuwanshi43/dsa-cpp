/*
Problem Link - https://leetcode.com/problems/sort-colors/
Problem Name - 75. Sort Colors
Level - Medium
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int s = 0, k = 0;
        int j = nums.size() - 1;

        // sort 2 at the end
        while (k <= j)
        {
            if (nums[k] == 0 || nums[k] == 1)
            {
                k++;
            }
            else if (nums[j] == 2)
            {
                j--;
            }
            else
            {
                swap(nums[k], nums[j]);
                k++;
                j--;
            }
        }
        j = k - 1;

        // sort 0 & 1
        while (s <= j)
        {
            if (nums[s] == 0)
            {
                s++;
            }
            else if (nums[j] == 1)
            {
                j--;
            }
            else
            {
                swap(nums[s], nums[j]);
                s++;
                j--;
            }
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    s.sortColors(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}