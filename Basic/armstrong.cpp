#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int a=n,d=0,sum=0;
    while(n>0)
    {
        d=n%10;
        sum=sum+(d*d*d);
        n=n/10;
    }
    if(sum==a)
    cout<<"Armstrong Number";
    else
    cout<<"Not an Armstrong number";
}