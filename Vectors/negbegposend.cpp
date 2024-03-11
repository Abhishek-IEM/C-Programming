#include<iostream>
#include<vector>
using namespace std;
void negpos(vector<int>& v)
{
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(v[i]<0) i++;
        if(v[j]>0) j--;
        if(i>j) break;
        if(v[i]>0 && v[j]<0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
}
int main()
{
     int n;
    cout<<"Enter size of vector :";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of the vector :";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    negpos(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}