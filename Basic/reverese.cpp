#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int rev=0,d;
    while(n>0)
    {
        d=n%10;
        rev=(rev*10)+d;
        n=n/10;
    }
    cout<<rev;
}