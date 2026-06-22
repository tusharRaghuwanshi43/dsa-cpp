/*
LeetCode Problem ->
Problem Link - https://leetcode.com/problems/maximum-number-of-balloons/description/
Problem Name - 1189. Maximum Number of Balloons
Level - Easy
Description - Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.
You can use each character in text at most once. Return the maximum number of instances that can be formed.

Example 1:
Input: text = "nlaebolko"
Output: 1

Example 2:
Input: text = "loonbalxballpoon"
Output: 2

Example 3:
Input: text = "leetcode"
Output: 0

Constraints:
1 <= text.length <= 104
text consists of lower case English letters only.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {

        string target = "balon";
        vector<int> ans;
        for (int i = 0; i < target.size(); i++)
        {
            int count = 0;
            int j = 0;
            while (j < text.size())
            {
                if (target[i] == text[j])
                {
                    count++;
                }
                j++;
            }

            ans.push_back(count);
        }

        // 'l' and 'o' are needed twice in "balloon"
        ans[2] /= 2;
        ans[3] /= 2;
        int result = ans[0];
        for (int i = 1; i < ans.size(); i++)
        {
            result = min(result, ans[i]);
        }
        return result;
    }
};

int main()
{
    Solution s;
    string str = "loonbalxballpoon";
    cout << " Ballon: " << s.maxNumberOfBalloons(str);
    return 0;
}