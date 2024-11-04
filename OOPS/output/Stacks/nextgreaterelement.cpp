#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int nge[n];
    int i;
    // using a stack : pop, ans, push
    stack<int> st;
    nge[n - 1] = -1;
    st.push(arr[n - 1]);
    for (i = n - 2; i >= 0; i--)
    {
        // pop all the elements smaller than arr[i]
        // SC = O(n)  TC = O(n)
        while (st.size() > 0 && st.top() <= arr[i])
        {
            st.pop();
        }
        // mark the ans in nge array
        if (st.size() == 0)
            nge[i] = -1;
        else
            nge[i] = st.top();
        // push the arr[i]
        st.push(arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        cout << nge[i] << " ";
    }
    cout << endl;
}