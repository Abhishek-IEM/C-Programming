#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int lo = n-1, hi = 0, mid;
    while (lo >= hi)
    {
        mid = hi + (lo - hi) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            hi = mid + 1;
        else
            lo = mid - 1;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the value to be searched: ";
    cin >> key;
    cout << binarySearch(arr, n, key);
    return 0;
}