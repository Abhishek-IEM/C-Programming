#include <iostream>
#include <stack>
using namespace std;

void displayRec(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    cout << x << " ";
    st.pop();
    displayRec(st);
    st.push(x);
}

void display(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    display(st);
    st.push(x);
    cout << x << " ";
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    cout << endl;
    displayRec(st);
}