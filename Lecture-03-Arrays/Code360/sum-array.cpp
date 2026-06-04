/*
Problem Link - https://www.naukri.com/code360/problems/sum-of-two-arrays_893186
problem Name - Sum of Two Arrays
Problem Statement - Given two arrays of digits, find the sum of the two arrays. The sum should also be returned as an array of digits.
Example 1:
Input: a = [1, 2, 3], b = [4, 5, 6]
Output: [5, 7, 9]
Explanation: The sum of the two arrays is 123 + 456 = 579, which is represented as [5, 7, 9].
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    // Write your code here.
    int carry = 0;
    vector<int> ans;
    int i = n - 1;
    int j = m - 1;
    while (i >= 0 && j >= 0)
    {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    while (carry != 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n, m;
    cout << "Enter the size of first array and second array: ";
    cin >> n >> m;
    cout << "Enter the elements of first array: ";
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the elements of second array: ";
    for (int i = 0; i < m; i++)
        cin >> b[i];
    vector<int> ans = findArraySum(a, n, b, m);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}