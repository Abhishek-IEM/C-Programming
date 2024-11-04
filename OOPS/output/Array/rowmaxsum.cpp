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
    cout<<"Enter the elements of the matrix :";

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int max=INT_MIN,index=-1;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
    if(max<sum) {
        max=sum;
        index = i;
    }
}
    cout<<max<<endl;
    cout<<index;

}