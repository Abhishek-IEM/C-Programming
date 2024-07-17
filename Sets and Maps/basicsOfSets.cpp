#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1); // stores only unique element
    s.erase(2);

    cout << s.size() << endl;

    int target = 4;

    // s.find() searches in set & if not found returns the last element

    if (s.find(target) != s.end()) // target exists
    {
        cout << "Exists" << endl;
    }
    else
    {
        cout << "Does not exist" << endl;
    }

    for (int ele : s)
    {
        cout << ele << " ";
    }
}