#include<iostream>
using namespace std;
void printOdd(int a, int b)
{
    if(a>b) swap(a,b);
    for(int i=a;i<=b;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    printOdd(a,b);
}