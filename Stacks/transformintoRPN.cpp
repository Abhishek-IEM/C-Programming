#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string s;
    cout << "Enter the expression : ";
    cin >> s;

    string ans;

    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
            ans += s[i];
        else if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            while (st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    cout << ans << endl;
    return 0;
}
