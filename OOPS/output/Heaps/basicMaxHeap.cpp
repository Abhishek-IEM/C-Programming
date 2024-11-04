#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // priority_queue<int> pq; // maxHeap
    // pq.push(10);
    // pq.push(2);
    // pq.push(-6);
    // pq.push(81);
    // cout << pq.top() << endl; // 81
    // pq.pop();
    // cout << pq.top() << endl; // 10

    priority_queue<int, vector<int>, greater<int>> pq; // minHeap
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(81);
    cout << pq.top() << endl; // -6
    pq.pop();
    cout << pq.top() << endl; // 2
}