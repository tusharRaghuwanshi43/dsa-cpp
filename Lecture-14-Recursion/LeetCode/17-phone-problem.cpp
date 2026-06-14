/*
Problem Link - https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
Problem Name - 17. Letter Combinations of a Phone Number
Level - Medium
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void solve(int index, string digit, vector<string> &ans, string output, string mapping[])
{
    // base case:
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }

    // main logic
    int number = digit[index] - '0';
    string value = mapping[number];
    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(index + 1, digit, ans, output, mapping);
        output.pop_back();
    }
}

vector<string> phone(string digit)
{
    int index = 0;
    vector<string> ans;
    string output = "";
    if (digit.length() == 0)
    {
        return ans;
    }

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

    solve(index, digit, ans, output, mapping);
    return ans;
}

int main()
{
    string str = "23";
    vector<string> ans = phone(str);
    cout << "Phone KeyBoard are:" << endl;
    for (string s : ans)
    {
        cout << s << endl;
    }
    return 0;
}