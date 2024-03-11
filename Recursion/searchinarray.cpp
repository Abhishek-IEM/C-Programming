#include<iostream>
#include<vector>
using namespace std;
int searchArray(vector<int> v,int n,int idx,int target){
    if(idx==n) return -1;
    if(v[idx]==target) return idx;
    return searchArray(v,n,idx+1,target);
}
int main()
{
    int n;
    cout<<"Enter size of vector:";
    cin>>n;
    
    vector<int> v(n);
    cout<<"Enter elements of vectors:";
    for(int i=0;i<n;i++) cin>>v[i];

    int target;
    cout<<"Enter target value:";
    cin>>target;

    cout<<searchArray(v,n,0,target);
}