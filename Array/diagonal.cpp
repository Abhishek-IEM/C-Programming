#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter number of rows and columns :";
    cin>>n;
    
    int arr[n][n];
    cout<<"Enter the elements of the matrix :";

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || (i+j)==(n-1)) cout<<arr[i][j]<<" ";
            else cout<<"  ";
        }
    cout<<endl;
    }
}