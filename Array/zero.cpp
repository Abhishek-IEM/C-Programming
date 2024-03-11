#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter number of rows :";
    cin>>m;
    cout<<"Enter number of columns :";
    cin>>n;
    
    int arr[m][n];
    int brr[m][n];
    cout<<"Enter the elements of the matrix :";

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                for(int i=0;i<m;i++) brr[i][j]=0;
                for(int j=0;j<n;j++) brr[i][j]=0;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}