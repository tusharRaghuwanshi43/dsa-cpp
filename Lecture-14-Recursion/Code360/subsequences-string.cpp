/*
Problem Link - https://www.naukri.com/code360/problems/subsequences-of-string_985087
Problem Name - Subsequences of String
Level - Moderate
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(vector<string> &ans, string str, string output, int i)
{
    if (i >= str.length())
    {
        if (output.length() > 0)
            ans.push_back(output);
        return;
    }

    // Exclude
    solve(ans, str, output, i + 1);

    // Include
    output.push_back(str[i]);
    solve(ans, str, output, i + 1);
}

vector<string> subsequences(string str)
{
    vector<string> ans;
    string output = "";
    solve(ans, str, output, 0);
    return ans;
}

int main()
{
    string str = "abc";
    vector<string> ans = subsequences(str);
    cout << "Subsequences are:" << endl;
    for (string s : ans)
    {
        cout << s << endl;
    }
    return 0;
}