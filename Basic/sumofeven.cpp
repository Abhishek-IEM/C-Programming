#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int d,sum=0;
    while(n>0)
    {
        d=n%10;
        if(d%2==0){
            sum=sum+d;
        }
        n=n/10;
    }
    cout<<"Sum of the even digits of the given number is: "<<sum;
} 
