#include<iostream>
using namespace std;
void printOdd(int num)
{
    if(num==1)
    {
        cout<<1<<endl;
        return;
    }
    printOdd(num-2);
    cout<<num<<endl;
}
int main()
{
    int n;
    cin>>n;
    if(n%2==0) n--;
    printOdd(n);
}