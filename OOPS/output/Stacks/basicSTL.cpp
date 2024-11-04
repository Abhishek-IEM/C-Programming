#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // cout << st.size() << endl;
    //  printing in reverse order from top to bottom
    stack<int> temp;
    while (st.size() > 0)
    {
        cout << st.top() << " ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    cout << endl;
    // putting elements back to st from temp
    while (temp.size() > 0)
    {
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
    // printing elements from bottom to top
    while (st.size() > 0)
    {
        temp.push(st.top());
        st.pop();
    }
    while (temp.size() > 0)
    {
        cout << temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
}