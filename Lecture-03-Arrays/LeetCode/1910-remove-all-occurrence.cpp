/*
Problem Link - https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
Problem Name - 1910 - Remove All Occurrences of a Substring
*/

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        while (s.length() != 0 && s.find(part) < s.length())
        {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    Solution sol;
    cout << sol.removeOccurrences(s, part) << endl;
    return 0;
}