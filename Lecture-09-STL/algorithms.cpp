#include <iostream>
#include <vector>

// STL algorithms are a collection of functions that operate on ranges of elements. They are part of the C++ Standard Library and provide a wide range of functionalities for manipulating and processing data. Some common STL algorithms include sorting, searching, and transforming data.
#include <algorithm>

using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    // binary_search is a function that checks if a specific element exists in a sorted range. It returns true if the element is found and false otherwise.
    cout << "Finding 6-> " << binary_search(v.begin(), v.end(), 6) << endl;

    // lower bound - Returns iterator to the first element greater than or equal to target -> first element ≥x
    // upper bound - Returns iterator to the first element strictly greater than target -> first element >x
    cout << "Lower bound-> "
         << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper bound-> "
         << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 3;
    int b = 5;
    // max is a function that returns the larger of two values. It takes two arguments and compares them, returning the greater value.
    // min is a function that returns the smaller of two values. It takes two arguments and compares them, returning the lesser value.
    cout << "max -> " << max(a, b) << endl;
    cout << "min -> " << min(a, b) << endl;
    swap(a, b);
    cout << "a-> " << a << endl;

    // reverse means to reverse the order of elements in a range. It takes two iterators as arguments, representing the beginning and end of the range to be reversed. The elements within the specified range are rearranged in reverse order.
    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "string-> " << abcd << endl;
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "after rotate" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // sort is a function that sorts the elements in a range in ascending order by default. It takes two iterators as arguments, representing the beginning and end of the range to be sorted. The elements within the specified range are rearranged in sorted order.
    sort(v.begin(), v.end());
    cout << "after sort" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}