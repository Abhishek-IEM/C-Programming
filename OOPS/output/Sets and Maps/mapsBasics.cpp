#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    pair<string, int> p1;
    p1.first = "Abhishek";
    p1.second = 7;
    m.insert(p1);

    // pair<string, int> p2;
    // p2.first = "Aryan";
    // p2.second = 18;
    // m.insert(p2);

    m["Aryan"] = 10;

    m["Ayush"] = 50;

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }

    cout << m.size() << endl;

    m.erase("Abhishek");

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }

    cout << m.size() << endl;
}