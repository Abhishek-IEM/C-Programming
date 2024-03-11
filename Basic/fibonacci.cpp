#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number upto which fibonacci series should be printed: ";
    cin>>n;
    int a=1,b=1,c;
    while(n-2>0)
    {
        c=a+b;
        b=a;
        a=c;
        n--;
    }
    cout<<c<<" ";
    return 0;
}