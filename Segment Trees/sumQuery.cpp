#include <bits/stdc++.h>
using namespace std;
vector<int> st;

void buildTree(int arr[], int i, int lo, int hi)
{
    if (lo == hi)
    {
        st[i] = arr[lo];
        return;
    }
    int mid = lo + (hi - lo) / 2;
    buildTree(arr, 2 * i + 1, lo, mid);
    buildTree(arr, 2 * i + 2, mid + 1, hi);
    st[i] = st[2 * i + 1] + st[2 * i + 2];
}

int getSum(int i, int lo, int hi, int &l, int &r)
{
    if (l > hi || r < lo)
        return 0;
    if (lo >= l && hi <= r)
        return st[i];
    int mid = lo + (hi - lo) / 2;

    int leftSum = getSum(2 * i + 1, lo, mid, l, r);
    int rightSum = getSum(2 * i + 2, mid + 1, hi, l, r);

    return leftSum + rightSum;
}

int main()
{
    int arr[] = {1, 4, 2, 8, 6, 4, 9, 3};
    int n = sizeof(arr) / 4;
    st.resize(4 * n);
    buildTree(arr, 0, 0, n - 1);
    int q;
    cout << "Enter number of queries :" << endl;
    cin >> q;
    while (q--)
    {
        int l, r;
        cout << "Enter range of query :" << endl;
        cin >> l >> r;
        cout << getSum(0, 0, n - 1, l, r) << endl;
    }
}