/* Level - Easy
Problem Link - https://leetcode.com/problems/reverse-string/
Problem Name - 344. Reverse String
Problem Statement - Write a function that reverses a string. The input string is given as an array of characters s.
Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Explanation: The string is reversed in-place.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        // Method 1 - Using inbuilt function
        // reverse(s.begin(),s.end());
        // Method 2 - Two pointer approach
        int st = 0;
        int e = s.size() - 1;
        while (st <= e)
        {
            swap(s[st], s[e]);
            st++;
            e--;
        }
    }
};

int main()
{
    vector<char> s;
    s.push_back('h');
    s.push_back('e');
    s.push_back('l');
    s.push_back('l');
    s.push_back('o');
    Solution sol;
    sol.reverseString(s);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
    return 0;
}