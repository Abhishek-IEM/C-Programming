#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the Array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the number to be searched:";
    cin>>x;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag=true;
                cout<<mid;
                break;
            }
        else{
            hi=mid-1;
        }
        }
    else if(arr[mid]<x) lo=mid+1;
    else hi=mid-1;
    }
    if(flag==false) cout<<-1;
}
