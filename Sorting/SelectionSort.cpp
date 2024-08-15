#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array : " << endl;
    cin>>n;
    int arr[n];
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n - 1; i++)
    {
        int idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[idx])
                idx = j;
        }
        swap(arr[i], arr[idx]);
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}