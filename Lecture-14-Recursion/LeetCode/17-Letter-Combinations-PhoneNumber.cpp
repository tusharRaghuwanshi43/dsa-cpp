/*
Problem Link - https://leetcode.com/problems/letter-combinations-of-a-phone-number/
Problem Name - 17. Letter Combinations of a Phone Number
Level - Medium
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void solve(string digit, string output, int index, vector<string> &ans, string mapping[])
    {

        // base case
        if (index >= digit.length())
        {
            ans.push_back(output);
            return;
        }

        int number = digit[index] - '0';
        string value = mapping[number];

        for (int i = 0; i < value.length(); i++)
        {
            output.push_back(value[i]);
            solve(digit, output, index + 1, ans, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if (digits.length() == 0)
            return ans;
        string output;
        int index = 0;
        string mapping[10] = {
            "",     // 0
            "",     // 1
            "abc",  // 2
            "def",  // 3
            "ghi",  // 4
            "jkl",  // 5
            "mno",  // 6
            "pqrs", // 7
            "tuv",  // 8
            "wxyz"  // 9
        };

        solve(digits, output, index, ans, mapping);
        return ans;
    }
};

int main()
{
    string digits = "23";
    Solution obj;
    vector<string> ans = obj.letterCombinations(digits);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}