#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void negbegposend(vector<int>& v)
{
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(v[i]<0) i++;
        else if(v[j]>0) j--;
        else if(v[i]>0 && v[j]<0)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter size of vector:";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter elements of vector:";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    display(v);
    negbegposend(v);
    display(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}