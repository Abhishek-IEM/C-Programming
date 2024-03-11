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
    int nge[n];
    int i;
    stack<int> st;
    nge[n-1]=-1;
    st.push(arr[n-1]);
    for(i=n-2;i>=0;i--){
        while(st.size()>0 && st.top()<=arr[i]) 
        {
            st.pop();
        }
    if(st.size()==0) nge[i]=-1;
    else nge[i]=st.top();
    st.push(arr[i]);
    }
    for(i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;
}