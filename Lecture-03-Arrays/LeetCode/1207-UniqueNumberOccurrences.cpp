/*
Problem Link - https://leetcode.com/problems/unique-number-of-occurrences/
Problem Name - 1207. Unique Number of Occurrences
Level - Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool unique(vector<int> ans)
    {
        for (int i = 0; i < ans.size() - 1; i++)
        {
            if (ans[i] == ans[i + 1])
            {
                return false;
            }
        }
        return true;
    }

public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        vector<int> ans;

        for (int i = 0; i < arr.size();)
        {
            int count = 1;
            int j = i + 1;
            while (j < arr.size() && arr[i] == arr[j])
            {
                count++;
                j++;
            }
            ans.push_back(count);
            i = j;
        }

        return unique(ans);
    }
};

int main()
{
    Solution s;
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(3);
    cout << endl;
    cout << s.uniqueOccurrences(arr) << endl;
    return 0;
}