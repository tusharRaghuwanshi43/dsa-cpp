#include <iostream>
#include <queue>

using namespace std;

int main()
{

    // max heap means the largest element will be at the top of the heap
    priority_queue<int> maxi;

    // min heap means the smallest element will be at the top of the heap
    // definition of min heap is a bit different than max heap, we have to use greater<int> as the third parameter in the definition of the min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    // pushing the elements in the max heap
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout << "size-> " << maxi.size() << endl;

    // why storing n in maxi.size() because when we pop the elements from the heap, the size of the heap will decrease and we will not be able to iterate through the heap properly, so we store the size of the heap before popping the elements
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;
    // pushing the elements in the min heap
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    // same as max heap, we store the size of the min heap before popping the elements
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
    cout << "empty or not " << mini.empty() << endl;
    return 0;
}