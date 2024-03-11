#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter the String :" << endl;
    getline(cin, str);
    int n = str.length();
    string ans;
    bool flag[256] = {false};
    for (int i = 0; i < n; i++)
    {
        if (!flag[str[i]])
        {
            ans += str[i];
            flag[str[i]] = true;
        }
        else continue;
    }
    cout << ans << endl;
}