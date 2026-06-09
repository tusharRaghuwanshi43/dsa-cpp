#include <iostream>
using namespace std;

/*
    Function: countDistinctWayToClimbStair()

    Purpose:
    Find the number of distinct ways to reach
    the nth stair when you can climb either
    1 stair or 2 stairs at a time.

    Recurrence Relation:

    ways(n) = ways(n-1) + ways(n-2)

    Example:

    n = 3

    Ways:
    1 + 1 + 1
    1 + 2
    2 + 1

    Total = 3
*/
int countDistinctWayToClimbStair(long long nStairs)
{
    // Base Case 1
    // Invalid stair
    if (nStairs < 0)
        return 0;

    // Base Case 2
    // Reached destination
    if (nStairs == 0)
        return 1;

    // Recursive Calls
    int ans =
        countDistinctWayToClimbStair(nStairs - 1) +
        countDistinctWayToClimbStair(nStairs - 2);

    return ans;
}

int main()
{
    long long nStairs;

    cout << "Enter number of stairs: ";
    cin >> nStairs;

    int ways = countDistinctWayToClimbStair(nStairs);

    cout << "Total distinct ways = " << ways << endl;

    return 0;
}