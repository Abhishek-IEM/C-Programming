#include <iostream>
#include <vector>
using namespace std;
void print(int arr[], int index, int n, vector<int> &ans, int sum)
{
    if (index == n)
    {
        ans.push_back(sum);
        return;
    }
    // not included
    print(arr, index + 1, n, ans, sum);
    // included
    print(arr, index + 1, n, ans, sum + arr[index]);
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    vector<int> ans;
    print(arr, 0, 4, ans, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}