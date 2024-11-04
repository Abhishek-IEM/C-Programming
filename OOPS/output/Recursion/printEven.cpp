#include<iostream>
using namespace std;
void printEven(int num)
{
    if(num==0) return;
    printEven(num-2);
    cout<<num<<endl;
}
int main()
{
    int n;
    cin>>n;
    if(n%2!=0) n--;
    printEven(n);
}