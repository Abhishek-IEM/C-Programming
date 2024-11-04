#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp(end - start + 1);
    int left = start, right = mid + 1, index = 0;
    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            left++, index++;
        }
        else
        {
            temp[index] = arr[right];
            right++, index++;
        }
    }
    // Left array is not empty yet
    while (left <= mid)
    {
        temp[index] = arr[left];
        left++, index++;
    }
     // right array is not empty yet
    while (right <= end)
    {
        temp[index] = arr[right];
        right++, index++;
    }
    //Put these value in original array
    index = 0;
     // Left array is not empty yet
    while (start <= end)
    {
        arr[start] = temp[index];
        start++, index++;
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start == end)
        return;
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main()
{
    int n;
    cout << "Enter size of Array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements of Array :" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++)
     cout<< arr[i] << " ";
}