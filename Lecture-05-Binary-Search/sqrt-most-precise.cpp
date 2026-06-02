#include <iostream>
using namespace std;

int mySqrt(int x)
{
    int s = 0, e = x;
    long long int mid = s + (e - s) / 2;
    long long int ans = 0;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == x)
        {
            return mid;
        }
        else if (square < x)
        {
            ans = mid;
            s = 1 + mid;
        }
        else if (square > x)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double mostprecise(int x, int temp, int pre)
{
    double ans = temp;
    double factor = 1;
    for (int i = 0; i < pre; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < x; j = factor + j)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{

    int x;
    cout << "enter the no. : " << endl;
    cin >> x;
    double temp = mySqrt(x);
    cout << "Precise answer after integer: " << mostprecise(x, temp, 3)<<endl;
}