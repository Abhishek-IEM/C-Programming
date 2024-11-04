#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of the array: ";
    cin>>n;
    int arr[n];
    queue<int> q;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        q.push(arr[i]);
    }
    int player = 0;
    while (q.size() > 1)
    {
        if (player == 0) // For Akshat
        {
            q.push(q.front());
            q.pop(); 
            q.pop(); 
        }
        else  // For Aman
        {
            q.push(q.front());
            q.pop();
            q.push(q.front());
            q.pop();
            q.pop();
        }
        player = 1 - player;
    }
    cout << player << " " << q.front() << " ";
}