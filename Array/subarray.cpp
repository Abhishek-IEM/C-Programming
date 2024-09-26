#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> sub(n);
    for (int i = 0; i < n; i++)
        cin >> sub[i];
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        vector<int> ans;
        for (int j = i; j < n; j++)
        {
            ans.push_back(sub[j]);
            v.push_back(ans);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout<<endl;
    }
}