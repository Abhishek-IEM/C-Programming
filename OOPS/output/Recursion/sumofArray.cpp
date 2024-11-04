#include<iostream>
#include<vector>
using namespace std;
int sumOfArray(vector<int>& v,int n,int idx,int sum)
{
    if(idx==n) return sum;
    sum+=v[idx];
    return sumOfArray(v,n,idx+1,sum); 
}
int main(){
    int n;
    cout<<"Enter size of vector:";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter elements of vectors:";
    for(int i=0;i<n;i++) cin>>v[i];

    cout<<sumOfArray(v,n,0,0);
}
