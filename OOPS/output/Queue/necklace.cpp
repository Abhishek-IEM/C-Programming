#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n, k, i = 0;
    cout << "Enter the value of n and k : " << endl;
    cin >> n >> k;

    queue<int> q;
    for (i = 0; i < n; i++)
    {
        int pearl;
        cin >> pearl;
        q.push(pearl);
    }
    k = k % n;
    for (i = 0; i < k; i++)
    {
        int p = q.front();
        q.pop();
        q.push(p);
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
    return 0;
}