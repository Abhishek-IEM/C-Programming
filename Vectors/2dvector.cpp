#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> ans = [[1,2,10],[2,3,20],[2,5,25]];
    int m = ans.size();
    vector<int> v,v1,v2;
    v=ans[0];
    for(int i=0;i<m;i++)
    {
        cout<<v[i]<<" ";
    }
 }