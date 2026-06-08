#include <iostream>
using namespace std;

/*
    Global Variable
    Accessible from every function
    in this file.
    Stored in Global Memory Area.
*/

// Good Practice is to use reference variable to share it in different function.
int score = 15;

void a(int &i)
{
    cout << score << " in a" << endl;
    // Updating global variable
    score++;
    char ch = 'a';
    // Printing value of i
    cout << i << endl;
}

void b(int &i)
{
    cout << score << " in b" << endl;
    cout << i << endl;
}

int main()
{
    cout << score << " in main" << endl;
    int i = 5;
    a(i);
    b(i);

    return 0;
}