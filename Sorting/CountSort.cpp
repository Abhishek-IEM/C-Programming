#include <iostream>
#include <vector>
using namespace std;

void countSort(vector<int> &arr, int n)
{
    int k = arr[0];
    // finding maximum element
    for (int i = 0; i < n; i++)
    {
        k = max(k, arr[i]);
    }
    vector<int> count(k + 1, 0);
    // storing the count of each element
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    // Modify the count array such that each element stores the cumulative sum
    for (int i = 1; i <= k; i++)
    {
        count[i] += count[i - 1];
    }
    // creating an output vector to store the stored array
    vector<int> output(n);

    for (int i = n - 1; i >= 0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }
    // Copy the sorted elements back to the original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

int main()
{
    int n;
    cout << "Enter size of array : " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    countSort(arr, n);

    cout << "Sorted array: "<<endl;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}