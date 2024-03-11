#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;
    // your code goes here
    int a = 0;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] != y[i] && (x[i] != '?' && y[i] != '?'))
        {
            a = 1;
            break;
        }
    }
    cout << ((a == 1) ? "No" : "Yes") << endl;
}
