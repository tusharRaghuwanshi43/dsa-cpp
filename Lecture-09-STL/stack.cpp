#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // Stack - LIFO (Last In First Out)
    stack<string> s;

    // Push some elements onto the stack
    s.push("Hello");
    s.push("Bonjour");
    s.push("Namaste");
    cout << "Top Element-> " << s.top() << endl;

    // Pop the top element
    s.pop();
    cout << "Top Element-> " << s.top() << endl;

    // Check the size and whether the stack is empty
    cout << "size of stack " << s.size() << endl;
    cout << "Empty or not " << s.empty() << endl;
    return 0;
}