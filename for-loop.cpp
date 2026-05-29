#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n:" << endl;
    cin >> n;

    // printing the value
    cout << "printing the value of " << n << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }

    // Sum of n numbers
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum of n values is " << sum << endl;
    return 0;
}
