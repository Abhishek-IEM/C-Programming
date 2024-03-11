#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int pge[n];
    int i;
    stack<int> st;
    pge[0]=-1;
    st.push(arr[0]);
    for(i=1;i<n;i++){
        while(st.size()>0 && st.top()<=arr[i]) 
        {
            st.pop();
        }
    if(st.size()==0) pge[i]=-1;
    else pge[i]=st.top();
    st.push(arr[i]);
    }
    for(i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
    cout<<endl;
}