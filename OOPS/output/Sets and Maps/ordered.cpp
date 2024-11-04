#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
    // set<int> s;
    // s.insert(1);
    // s.insert(7);
    // s.insert(3);
    // s.insert(11);
    // for (auto x : s)
    // {
    //     cout << x << " ";
    // }

    map<int, int> m;
    m[2] = 30;
    m[3] = 10;
    m[1] = 50;
    for (auto x : m)
    {
        cout << x.first << " ";
    }
    for (auto x : m)
    {
        cout << x.second << " ";
    }
}