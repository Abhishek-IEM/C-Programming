#include <iostream>
#include <string>
#include <stack>
using namespace std;

string removeDuplicates(string s)
{
    stack<char> st;
    st.push(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != st.top())
            st.push(s[i]);
    }
    s = "";
    while (st.size() > 0)
    {
        s += st.top();
        st.pop();
    }
    int i = 0, j = s.size() - 1;
    while(i < j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;
}

int main()
{
    string s = "aaabbcddaabffg";
    cout << removeDuplicates(s) << endl;
}