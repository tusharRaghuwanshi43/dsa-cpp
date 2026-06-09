#include <iostream>
using namespace std;

/*
    Function: reachHome()

    Purpose:
    Move from source to destination
    using recursion.

    Example:

    Source = 1
    Destination = 10

    Path:

    1 -> 2 -> 3 -> 4 -> ... -> 10
*/

void reachHome(int src, int dest)
{
    /*
        Current state of recursion

        Prints current source
        and destination.
    */
    cout << "Source : " << src << " Destination : " << dest << endl;

    /*
        BASE CASE

        If source becomes equal
        to destination,
        stop recursion.
    */
    if (src == dest)
    {
        cout << "Pahuch Gya (Reached Home)" << endl;
        return;
    }

    /*
        Processing
        Move one step closer
        to destination.
    */
    src++;

    /*
        Recursive Call
        Solve the smaller problem.
    */
    reachHome(src, dest);
}

int main()
{
    int src = 1;
    int dest = 10;
    cout << endl;
    reachHome(src, dest);

    return 0;
}