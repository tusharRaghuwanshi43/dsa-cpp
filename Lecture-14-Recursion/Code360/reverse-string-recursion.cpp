/*
Problem Link - https://www.naukri.com/code360/problems/reverse-the-string_799927
Problem Name - Reverse the String
Level - Easy
*/

#include <bits/stdc++.h>
using namespace std;
void reverse(string &str, int i, int j)
{
    if (i > j)
        return;
    swap(str[i], str[j]);
    i++;
    j--;
    reverse(str, i, j);
}

string reverseString(string str)
{
    // Write your code here.
    reverse(str, 0, str.length() - 1);
    return str;
}

int main()
{
    string str = "abcde";
    cout << reverseString(str) << endl;
    return 0;
}