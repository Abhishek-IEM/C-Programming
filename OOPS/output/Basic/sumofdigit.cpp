#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int sum=0,d;
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    cout<<sum;
}