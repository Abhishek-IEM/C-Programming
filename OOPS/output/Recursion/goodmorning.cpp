#include<iostream>
using namespace std;
void goodmorning(int n){
    if(n==0) return;
    cout<<"Good Morning"<<endl;
    goodmorning(n-1);
}
int main()
{
    int n;
    cin>>n;
    goodmorning(n);
}