#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int maxlen = 0; 
    int n = s.length();
    
    // Iterate over possible lengths for the prefix
    for (int len = 1; len < n; len++) {
        string prefix = "", suffix = "";

        for (int i = 0; i < len; i++) {
            prefix.push_back(s[i]);
        }

        for (int i = n - len; i < n; i++) {
            suffix.push_back(s[i]);
        }

        if (prefix == suffix) {
            maxlen = len; 
        }
    }

    cout << "The length of the longest prefix which is also a suffix is: " << maxlen << endl;

    return 0;
}
