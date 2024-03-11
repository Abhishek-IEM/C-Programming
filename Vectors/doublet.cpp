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
    int x,doublet=0;
    cout<<"Enter the number whose doublet to find :";
    cin>>x;

    for(int i=0;i<=v.size()-2;i++)
    {
        for(int j=i+1;j<=v.size()-1;j++)
        {
            if(v[i]+v[j]==x)
            {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}
