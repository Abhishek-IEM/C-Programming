#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] > key) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int key;
    cout<<"Enter the value to be searched :";
    cin>>key;
    cout<<BinarySearch(arr, n, key);
    return 0;
}