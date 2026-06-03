#include <iostream>
#include <queue>

using namespace std;

int main() {

    // Queue is a data structure which follows the FIFO (First In First Out) principle.
    queue<string> q;
    q.push("Hello");
    q.push("Bonjour");
    q.push("Namaste");
    cout << "First Element-> " << q.front() << endl;
    q.pop();
    cout << "First Element-> " << q.front() << endl;
    cout << "size of queue " << q.size() << endl;
    cout << "Empty or not " << q.empty() << endl;
    return 0;
}