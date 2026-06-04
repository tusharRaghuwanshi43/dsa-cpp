#include <iostream>
using namespace std;

int getLenght(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
// check palindrome or not
bool checkPalindrome(char name[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        if (name[s] != name[e])
        {
            return 0; // false
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
    char name[100];
    cout << "Enter word : ";
    cin >> name;
    cout << "Check palindrome or not: " << checkPalindrome(name, getLenght(name)) << endl;
    return 0;
}
