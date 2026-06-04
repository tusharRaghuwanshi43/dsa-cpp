#include <iostream>
using namespace std;

int getLenght(char name[])
{
    int count = 0;

    // no need to use sizeof operator here because we are counting characters until we reach the null terminator '\0'
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverseString(char name[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(name[start++], name[end--]);
    }
}
int main()
{
    char name[100];
    cout << "Enter your name: ";
    cin >> name; // This will read input until the first whitespace character

    // if you add a space in the name, it will only read the first part of the name. For example, if you enter "John Doe", it will only read "John". Because in execution, it will stop reading input when it encounters a whitespace character (space, tab, etc.). To read the full name with spaces, you can use the `getline` function instead of `cin`.
    cout << "Hello, " << name << "!" << endl;

    cout << "Length of the name: " << getLenght(name) << endl;
    reverseString(name, getLenght(name));

    cout << "Reversed name: " << name << endl;
    name[2] = '\0'; // Null terminate the string at index 2

    cout << "Modified name: " << name << endl; // This will print only the first two characters of the name
    return 0;
}