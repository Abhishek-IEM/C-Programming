#include<iostream>
#include<climits>
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
     int max=INT_MIN;
     for(int i=0;i<n;i++)
     {
        if(max<arr[i])
        max=arr[i];
     }
     int smax=INT_MIN;
     for(int i=0;i<n;i++)
     {
        if(arr[i]!=max && smax<arr[i])
        smax=arr[i];
     }
     cout<<"Largest element in the given array is "<<max<<endl;
     cout<<"Second Largest element in the given array is "<<smax;
}

