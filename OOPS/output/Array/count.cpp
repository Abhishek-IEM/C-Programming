#include<iostream>
using namespace std;
int main()
{
    int n,count=0,x;
    cout<<"Enter the size of Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value of x :";
    cin>>x;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        count++;
    }
    cout<<"Number of elements greater than x is: "<<count;
}