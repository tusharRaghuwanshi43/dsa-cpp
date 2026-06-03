#include <iostream>
// Deque: Double Ended Queue
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    // push_back: add element at the end of the deque
    // push_front: add element at the front of the deque
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // pop_back: remove element from the end of the deque
    // pop_front: remove element from the front of the deque
    d.pop_back();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    d.pop_front();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    d.push_front(4);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "First element: " << d.front() << endl;
    cout << "Last element: " << d.back() << endl;
    cout << "empty or not: " << d.empty() << endl;
    cout << "before erase: " << d.size() << endl;

    // erase: remove element from the deque
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase: " << d.size() << endl;
    for (int i : d)
    {
        cout << i << " ";
    }

    return 0;
}