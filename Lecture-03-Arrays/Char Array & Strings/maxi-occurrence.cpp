#include <iostream>
#include <string>
using namespace std;

char occurrence(string s)
{
    int arr[25] = {0};

    // Counting the character present in the string
    int number = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // lowercase
        number = ch - 'a';
        arr[number]++;
    }

    // Finding the maximum occurrence element in the string.
    int ans = -1;
    int maxi = -1;
    for (int i = 0; i < 25; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
            ans = i;
        }
    }
    return ans + 'a';
}

int main()
{

    string s = "output";
    cout << "Maximum Occurrence character present in the string: " << occurrence(s) << endl;
    return 0;
}
