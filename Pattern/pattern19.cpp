#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of lines: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++)
    {
        cout<<(char)(i+64);
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<(char)(j+64);
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++)
        {
            cout<<(char)(n+j+i+'A'-2);
        }
        cout<<endl;
    }
}