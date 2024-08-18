#include <iostream>
using namespace std;

void waveSort(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > arr[i - 1])
            swap(arr[i], arr[i - 1]);
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
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

    waveSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
