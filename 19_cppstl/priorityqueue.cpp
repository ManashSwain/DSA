// priority queue

// to create max heap

priority_queue<int> variable_name;

// to create min heap
priority_queue<int, vector<int>, greater<int>> variable_name;

#include <iostream>
#include <queue>
using namespace std;

int main()
{

    // max heap
    priority_queue<int> p;

    // min heap
    priority_queue<int, vector<int>, greater<int>> p2;

    p.push(789);
    p.push(43789);
    p.push(78459);
    p.push(347489);
    p.push(678956);

    p2.push(45);
    p2.push(786);
    p2.push(56);
    p2.push(54);
    p2.push(9);

    p.pop();
    cout << p.top() << endl;

    p2.pop();
    cout << p2.top() << endl;

    return 0;
}