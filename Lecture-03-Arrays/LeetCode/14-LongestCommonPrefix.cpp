/*
Problem Link - https://leetcode.com/problems/longest-common-prefix/description/
Problem Name - 14. Longest Common Prefix
Level - Easy
Description - Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {

        string ans = "";

        // Compare the first string with all other strings
        for (int i = 0; i < strs.size() - 1; i++)
        {

            ans = ""; // Reset for each pair

            // Traverse both strings safely
            for (int j = 0; j < min(strs[i].size(), strs[i + 1].size()); j++)
            {

                if (strs[i][j] == strs[i + 1][j])
                {
                    ans += strs[i][j];
                }
                else
                {
                    break;
                }
            }

            // Replace the next string with the common prefix found
            strs[i + 1] = ans;
        }

        return strs.back();
    }
};

int main()
{
    Solution s;
    vector<string> strgs = {"flower", "flow", "flight"};
    string s1 = s.longestCommonPrefix(strgs);
    cout << endl;
    cout << "Longest Common Prefix: " << s1 << endl;
    return 0;
}