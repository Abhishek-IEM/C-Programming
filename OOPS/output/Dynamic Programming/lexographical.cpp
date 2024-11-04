#include<iostream>
#include<vector>
using namespace std;

vector<int> result;

void f(int i, int n)
{
    if(i>n) return;
    if(i<=n && i!=0){
        result.push_back(i);
    }
    for(int j=(i==0) ? 1:0;j<=9;j++)
    {
        f(10*i+j,n);
    }
}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    result.clear();
    f(0,n);
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}