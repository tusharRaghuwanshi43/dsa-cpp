#include <iostream>
using namespace std;

char lowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int main()
{
    char ch[20] = "Tushar";
    for (int i = 0; ch[i] != '\0'; i++)
    {
        cout << lowerCase(ch[i]);
    }
    return 0;
}