#include<iostream>
#include<climits>
using namespace std;
void printMax(int arr[],int n,int idx,int max){
    if(idx==n){
        cout<<max<<endl;
        return;
    }
    if(max<arr[idx]) max=arr[idx];
    printMax(arr,n,idx+1,max);
}
int main()
{
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the Array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printMax(arr,n,0,INT_MIN);
}