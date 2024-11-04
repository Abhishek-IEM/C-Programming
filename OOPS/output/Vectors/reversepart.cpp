#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &a){
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i,int j,vector<int>& v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return ;
}
int main()
{
    int n;
    cout<<"Enter size of vector :";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of the vector :";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    display(v);
    int i,j;
    cout<<"Enter i and j :";
    cin>>i>>j;
    reversepart(i,j,v);
    display(v);
}