#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of vector :";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of the vector :";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int x,idx=-1;
    cout<<"Enter the number whose last index is to find :";
    cin>>x;

    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i]==x)
        {
            idx=i;
            break;
        }
    }
    cout<<"The last index of the given  number is :"<<idx;
}