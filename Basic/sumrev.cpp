#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int a=n;
    int d=0,rev=0;
    while(n)
    {
        d=n%10;
        rev=(rev*10)+d;
        n=n/10;
    }
    cout<<"Sum of given number and its reverse is: "<<a+rev<<endl;
}